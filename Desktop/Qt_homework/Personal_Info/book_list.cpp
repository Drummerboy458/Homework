#include "book_list.h"
#include "ui_book_list.h"

#include "mainwindow_login.h"
#include <QSqlTableModel>
#include <QTableView>
#include <QInputDialog>
#include <QHeaderView>
#include <QSqlQuery>
#include <QDebug>
#include <QMainWindow>
#include<QSqlError>
Book_List::Book_List(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Book_List)
{
    ui->setupUi(this);
    QSqlQuery *query1 = new QSqlQuery;
    MainWindow_Login* pointer = nullptr;
    QString str0 = pointer->get_identify();


    QString str3 = QString("CREATE  TABLE IF NOT EXISTS booktable(identify VARCHAR(30) ,book_name VARCHAR(30),author_name VARCHAR(30),read_time DATE,add_text TEXT)");
    model = new QSqlRelationalTableModel(this);
    bool ret = query1->exec(str3);
     if(!ret)
         qDebug()<<"创建书单失败了。。。。"<<endl;
     else
         qDebug()<<"创建书单成功了！"<<endl;
    QString str1 = pointer->get_name();
    qDebug()<<"identify:"<<str0;
    qDebug()<<"Mname:"<<str1;

    model->setEditStrategy(QSqlTableModel::OnFieldChange);//保存策略
    model->setTable("booktable");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("书名"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("作者"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("阅读时间"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("备注"));
    model->removeColumn(0);//隐藏用户identify
    QSqlQuery query = model->query();

    query.prepare("INSERT INTO booktable (identify) "
                  "VALUES (:identify)");
    query.bindValue(":identify", str0);
    bool ret1 = query.exec();
    if(!ret1)
        qDebug()<<"插入id失败了。。。。"<<endl;
    else
        qDebug()<<"插入成功了！"<<endl;

   QString str2=pointer->get_identify();
    model->setFilter(QObject::tr("identify = '%1'").arg(str2));  // 根据身份证号进行筛选
    model->select();
    ui->tableView->setModel(model);
}

Book_List::~Book_List()
{
    delete ui;
}
void Book_List::on_pushButton_clicked()
{
    int rowNum = model->rowCount(); //获得表的行数
     model->insertRow(rowNum); //添加一行
}

void Book_List::on_pushButton_2_clicked()
{
    //获取选中的行

        int curRow = ui->tableView->currentIndex().row();
    //删除该行
     model->removeRow(curRow);
}

void Book_List::on_pushButton_3_clicked()
{
    emit sendsignal();
    this->hide();
}

void Book_List::on_pushButton_4_clicked()
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
