#ifndef MYSQL_H
#define MYSQL_H
#include <QSql>
#include <QSqlDatabase>
#include <QDebug>
#include <QSqlQuery>
#include "student.h"
class MySql
{
public:
    MySql();
    void initsql();                     //初始化连接数据库
    void createtable();            //建表 索引 触发器
    bool loguser(QString name,QString password);
    bool inituser(QString name,QString identify,QString password);
    bool forgetpassward(QString name,QString identify);  //忘记密码
    bool addstu(my_stu* stu);
private:
     QSqlQuery* query;              //用于执行sql语句
};
#endif // MYSQL_H
