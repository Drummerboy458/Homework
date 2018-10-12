#include "see_information.h"
#include "ui_see_information.h"

#include "mainwindow_login.h"
#include <QSqlTableModel>
#include <QTableView>
#include <QInputDialog>
#include <QHeaderView>
#include <QSqlQuery>
#include <QDebug>
#include <QMainWindow>
#include<QSqlError>
see_Information::see_Information(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::see_Information)
{
    ui->setupUi(this);
    enum studentInfoIndex
    {
        studentInfo_stuaccount = 0,
        studentInfo_stuname = 1,
        studentInfo_stusex = 2,
        studentInfo_stuage = 3,
        studentInfo_identify = 4,
        studentInfo_tel = 5,
        studentInfo_enroll_time = 6,
        studentInfo_leave_time = 7,
        studentInfo_scondition = 8,
        studentInfo_stu_text = 9
    };

    MainWindow_Login* pointer = nullptr;
    model = new QSqlRelationalTableModel(this);
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);//保存策略
    model->setTable("studentInfo");
    model->setHeaderData(studentInfo_stuaccount,Qt::Horizontal,"学号");
    model->setHeaderData(studentInfo_stuname,Qt::Horizontal,"姓名");
    model->setHeaderData(studentInfo_stusex,Qt::Horizontal,"性别");
    model->setHeaderData(studentInfo_stuage,Qt::Horizontal,"年龄");
    model->setHeaderData(studentInfo_identify,Qt::Horizontal,"身份证号");
    model->setHeaderData(studentInfo_tel,Qt::Horizontal,"电话号码");
    model->setHeaderData(studentInfo_enroll_time,Qt::Horizontal,"入学时间");
    model->setHeaderData(studentInfo_leave_time,Qt::Horizontal,"毕业时间");
    model->setHeaderData(studentInfo_scondition,Qt::Horizontal,"学业状态");
    model->setHeaderData(studentInfo_stu_text,Qt::Horizontal,"备注");
    QSqlQuery query = model->query();

   qDebug()<<"MainWindow->identify:hhhhhhh"<<pointer->get_identify();
   QString str1=pointer->get_identify();
    model->setFilter(QObject::tr("identify = '%1'").arg(str1));  // 根据身份证号进行筛选
    model->select();
    ui->tableView->setModel(model);
}

see_Information::~see_Information()
{
    delete ui;
}
void see_Information::on_pushButton_clicked()
{
    model->database().transaction(); //开始事务操作
        if (model->submitAll())
        {
            model->database().commit(); //提交
        }
        else {
            model->database().rollback(); //回滚
            QMessageBox::warning(this, tr("tableModel"),tr("数据库错误: %1").arg(model->lastError().text()));
        }
}

void see_Information::on_pushButton_10_clicked()
{
    emit sendsignal();
    this->hide();
}

void see_Information::on_pushButton_2_clicked()
{
    int rowNum = model->rowCount(); //获得表的行数
    model->insertRow(rowNum); //添加一行
    model->setData(model->index(rowNum,0),rowNum);
    model->submitAll(); //可以直接提交
}
