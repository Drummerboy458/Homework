#include "main_information.h"
#include "ui_main_information.h"


#include "see_information.h"
#include "myclasstable.h"
#include "adress_list.h"
#include "book_list.h"
#include <QSqlTableModel>
#include <QTableView>
#include <QInputDialog>
#include <QHeaderView>
#include <QSqlQuery>
#include <QDebug>
#include <QMainWindow>
main_Information::main_Information(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::main_Information)
{
    ui->setupUi(this);
}

main_Information::~main_Information()
{
    delete ui;
}
void main_Information::on_course_arrangement_clicked()
{
    MyClassTable *myclasstable;
    this->hide();
    myclasstable=new MyClassTable(this);
    connect(myclasstable,SIGNAL(sendsignal()),this,SLOT(show()));//当点击子界面时，调用show()函数
    myclasstable->show();
}
void main_Information::on_Basic_infomation_pushButton_clicked()
{
    this->hide();
    see_Information* see = new see_Information(this);
    connect(see,SIGNAL(sendsignal()),this,SLOT(show()));//当点击子界面时
    see->show();
}



void main_Information::on_pushButton_book_clicked()
{
   Book_List *mybook;
    this->hide();
    mybook=new Book_List(this);
    connect(mybook,SIGNAL(sendsignal()),this,SLOT(show()));//当点击子界面时，调用show()函数
    mybook->show();
}

void main_Information::on_pushButton_2_clicked()
{
    Adress_List *my_dialog;
     this->hide();
     my_dialog=new Adress_List(this);
     connect(my_dialog,SIGNAL(sendsignal()),this,SLOT(show()));//当点击子界面时，调用show()函数
     my_dialog->show();
}
