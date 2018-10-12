#include "myclasstable.h"
#include "ui_myclasstable.h"

#include "mainwindow_login.h"
#include <QSqlTableModel>
#include <QTableView>
#include <QInputDialog>
#include <QHeaderView>
#include <QSqlQuery>
#include <QDebug>
#include <QMainWindow>
#include<QSqlError>
MyClassTable::MyClassTable(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MyClassTable)
{
    ui->setupUi(this);



     QSqlQuery *query1 = new QSqlQuery;
     QString str3 = QString("CREATE  TABLE IF NOT EXISTS classtable(identify VARCHAR(30) ,Lesson VARCHAR(30) ,Mon VARCHAR(30),Tue VARCHAR(30),Wen VARCHAR(30),Thi VARCHAR(30),Fri VARCHAR(30),Sat VARCHAR(30),Sun VARCHAR(30))");
     bool ret = query1->exec(str3);
      if(!ret)
          qDebug()<<"创建课程表表失败了。。。。"<<endl;
      else
          qDebug()<<"创建课程表成功了！"<<endl;

    model = new QSqlRelationalTableModel(this);
    model->setEditStrategy(QSqlTableModel::OnFieldChange);//保存策略
    model->setTable("classtable");
    model->setHeaderData(0, Qt::Horizontal, "节数");
    model->setHeaderData(1, Qt::Horizontal, "周一");
    model->setHeaderData(2, Qt::Horizontal, "周二");
    model->setHeaderData(3, Qt::Horizontal, "周三");
    model->setHeaderData(4, Qt::Horizontal, "周四");
    model->setHeaderData(5, Qt::Horizontal, "周五");
    model->setHeaderData(6, Qt::Horizontal, "周六");
    model->setHeaderData(7, Qt::Horizontal, "周日");
    model->removeColumn(0);//隐藏identify

     MainWindow_Login* pointer = nullptr;
     QSqlQuery query = model->query();
     QString str0 = pointer->get_identify();
    query.prepare("INSERT INTO classtable (identify) "
                  "VALUES (:identify)");
    query.bindValue(":identify", str0);
    bool ret1 = query.exec();
    if(!ret1)
        qDebug()<<"插入用户id失败了。。。。"<<endl;
    else
        qDebug()<<"插入用户id成功了！"<<endl;

    QString str1 = pointer->get_name();
    qDebug()<<"用户名:"<<str1<<endl;
    qDebug()<<"用户ID:"<<str0<<endl;
    model->setFilter(QObject::tr("identify = '%1'").arg(str0));  // 根据身份证号进行筛选
    model->select();
    ui->tableView->setModel(model);
}

MyClassTable::~MyClassTable()
{
    delete ui;
}
void MyClassTable::on_pushButton_clicked()
{
    int rowNum = model->rowCount(); //获得表的行数
    model->insertRow(rowNum); //添加一行
    model->setData(model->index(rowNum,0),rowNum);
    model->submitAll(); //可以直接提交
}

void MyClassTable::on_pushButton_2_clicked()
{
    //获取选中的行

        int curRow = ui->tableView->currentIndex().row();
    //删除该行
     model->removeRow(curRow);
}

void MyClassTable::on_pushButton_3_clicked()
{
    emit sendsignal();
    this->hide();
};

void MyClassTable::on_pushButton_4_clicked()
{
        model->database().transaction(); //开始事务操作
        if (model->submitAll())
        {
            model->database().commit(); //提交
        }
        else
        {
            model->database().rollback(); //回滚
            QMessageBox::warning(this, tr("tableModel"),
             tr("数据库错误: %1").arg(model->lastError().text()));
        }
}
