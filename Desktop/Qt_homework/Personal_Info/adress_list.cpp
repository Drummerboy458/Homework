#include "adress_list.h"
#include "ui_adress_list.h"

#include "mainwindow_login.h"
#include <QSqlTableModel>
#include <QTableView>
#include <QInputDialog>
#include <QHeaderView>
#include <QSqlQuery>
#include <QDebug>
#include <QMainWindow>
#include<QSqlError>
Adress_List::Adress_List(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Adress_List)
{
    ui->setupUi(this);
    QSqlQuery *query1 = new QSqlQuery;
    MainWindow_Login* pointer = nullptr;
    QString str0 = pointer->get_identify();
    qDebug()<<"用户ID:"<<str0<<endl;


     QString str3 = QString("CREATE  TABLE IF NOT EXISTS adresstable(identify VARCHAR(30),dia_name VARCHAR(30),dia_tel VARCHAR(15),dia_adress VARCHAR(30))");
     bool ret = query1->exec(str3);
      if(!ret)
          qDebug()<<"创建通讯录失败了。。。。"<<endl;
      else
          qDebug()<<"创建通讯录成功了！"<<endl;
    model = new QSqlRelationalTableModel(this);
    QString str1 = pointer->get_name();
    qDebug()<<"用户名:"<<str1;

    model->setEditStrategy(QSqlTableModel::OnFieldChange);//保存策略
    model->setTable("adresstable");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("姓名"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("电话号码"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("地址"));
    model->removeColumn(0);//隐藏identify
    QSqlQuery query = model->query();

    query.prepare("INSERT INTO adresstable (identify) "
                  "VALUES (:identify)");
    query.bindValue(":identify", str0);         //插入用户ID
    bool ret1 = query.exec();
    if(!ret1)
        qDebug()<<"插入用户id失败了。。。。"<<endl;
    else
        qDebug()<<"插入用户id成功了！"<<endl;

   QString str2=pointer->get_identify();
    model->setFilter(QObject::tr("identify = '%1'").arg(str2));  // 根据身份证号进行筛选
    model->select();
    ui->tableView->setModel(model);
}

Adress_List::~Adress_List()
{
    delete ui;
}
void Adress_List::on_pushButton_add_clicked()
{

    int rowNum = model->rowCount(); //获得表的行数
     model->insertRow(rowNum); //添加一行

}

void Adress_List::on_pushButton_delete_clicked()
{
    //获取选中的行

        int curRow = ui->tableView->currentIndex().row();
    //删除该行
     model->removeRow(curRow);
}

void Adress_List::on_pushButton_exit_clicked()
{
    emit sendsignal();
    this->hide();
}

void Adress_List::on_pushButton_submit_clicked()
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
