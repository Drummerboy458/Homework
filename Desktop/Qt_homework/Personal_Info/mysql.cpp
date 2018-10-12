#include "mysql.h"
#include "mainwindow_login.h"
#include <QDebug>
MySql::MySql()
{

}
void MySql:: initsql()          //初始化表 连接
{
    QSqlDatabase db;
    if(QSqlDatabase::contains("qt_sql_default_connection")) ////如果不存在使用addDatabase()方法，存在则使用database()方法
            db = QSqlDatabase::database("qt_sql_default_connection");
        else
            db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setUserName("root");
    db.setPassword("Liwenwei1999.");
    db.setDatabaseName("second");
    if(!db.open())
        {
            qDebug()<<"Database connected failed!";
            return;
        }
    else
        {
            qDebug()<<"Database connected successfully!";
            createtable();
            return;
        }
}
void MySql::createtable()
{
    query = new QSqlQuery();
    query->exec("CREATE TABLE  studentInfo(stuaccount VARCHAR(30) PRIMARY KEY NOT NULL, stuname VARCHAR(30), stusex ENUM('男', '女') NOT NULL, stuage INT, identify VARCHAR(30) UNIQUE NOT NULL, tel VARCHAR(20), enroll_time DATE, leave_time DATE, scondition enum('学习', '结业', '退学'), stu_text TEXT)");
    query->exec("CREATE TABLE user(name VARCHAR(30) UNIQUE NOT NULL, identify VARCHAR(30) PRIMARY KEY, password VARCHAR(30) NOT NULL)");    //创建用户登录的表 用户名 密码 id
}
bool MySql::inituser(QString name,QString identify,QString password)
{
    query=new QSqlQuery;
    QString str=QString("insert into user value('%1','%2','%3')").arg(name).arg(identify).arg(password);
    bool ret=query->exec(str);
    MainWindow_Login *MW=MainWindow_Login::getIntance();
    MW->identify=query->value(1).toString();
    return ret;
}
bool MySql::loguser(QString name,QString password)
{
    query=new QSqlQuery;
    QString str=QString("select* from user where name= '%1' and password = '%3' ").arg(name).arg(password);
    query->exec(str);
    query->last();
    int record=query->at()+1;
    if(record==0)
        return false;
    MainWindow_Login* MW=MainWindow_Login::getIntance();
    MW->password=query->value(2).toString();
    MW->name=query->value(0).toString();
    MW->identify=query->value(1).toString();
    qDebug()<<"用户identify:"<<MW->identify;
    return true;
}
bool MySql::forgetpassward(QString name,QString identify)
{
    query=new QSqlQuery;
    QString str=QString("select name,identify,password from user where name = '%1' and identify = '%2' ").arg(name).arg(identify);
    query->exec(str);
    query->last();
    int record=query->at()+1;
    if(record == 0)
        return false;
    MainWindow_Login *MW=MainWindow_Login::getIntance();
    MW->password=query->value(2).toString();
    return true;
}

