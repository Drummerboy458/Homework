#include "mainwindow_login.h"
#include <QApplication>
#include "mysql.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow_Login w;
     w.setWindowTitle("个人信息管理系统");
     w.show();
    MySql mysql;
    mysql.initsql();
    return a.exec();
}
