

#include "mainwindow_login.h"
#include "ui_mainwindow_login.h"
#include "dialog_register.h"
#include <QPixmap>
#include <QLineEdit>
#include "main_information.h"
#include "mysql.h"

#include<QTextEdit>
#include<QObject>
MainWindow_Login * MainWindow_Login::MW=nullptr;
MainWindow_Login::MainWindow_Login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow_Login)
{
    ui->setupUi(this);
    this->setAttribute(Qt::WA_DeleteOnClose,1);
    clock1 = new Clock();
    QDockWidget *dockWidget1 = new QDockWidget(tr("时间"),this);
    this->setWindowTitle("Personal Information Management System");
    dockWidget1->setFeatures(QDockWidget::AllDockWidgetFeatures);
    dockWidget1->setAllowedAreas(Qt::AllDockWidgetAreas);
    dockWidget1->setWidget(clock1);
    addDockWidget(Qt::RightDockWidgetArea,dockWidget1);

    QPixmap pix1("/Users/lww/Qt_homework/Personal_Info/person.jpeg");
    int w = ui->label_pic->width();
    int h = ui->label_pic->height();
    ui->label_pic->setPixmap(pix1.scaled(w,h,Qt::IgnoreAspectRatio));

    QPixmap pix2("/Users/lww/Qt_homework/Personal_Info/南开.jpeg");
    int w1 = ui->label_nankai->width();
    int h1 = ui->label_nankai->height();
    ui->label_nankai->setPixmap(pix2.scaled(w1,h1,Qt::IgnoreAspectRatio));

    QPixmap pix3("/Users/lww/Qt_homework/Personal_Info/figure.jpeg");
    int w2 = ui->label_3->width();
    int h2 = ui->label_3->height();
    ui->label_3->setPixmap(pix3.scaled(w2,h2,Qt::KeepAspectRatio));

    QPixmap pix4("/Users/lww/Qt_homework/Personal_Info/lock.jpeg");
    int w3 = ui->label_6->width();
    int h3= ui->label_6->height();
    ui->label_6->setPixmap(pix4.scaled(w3,h3,Qt::KeepAspectRatio));

     ui->password_2->setEchoMode(QLineEdit::Password);
}

MainWindow_Login::~MainWindow_Login()
{
    delete ui;
}
MainWindow_Login *MainWindow_Login::getIntance()
{
    if(MW == nullptr)
    {
        MW = new MainWindow_Login();
    }
    return MW;
}
QString MainWindow_Login::get_identify()
{
    return MW->identify;
}
QString MainWindow_Login::get_name()
{
    return MW->name;
}
void MainWindow_Login::on_yesOrNoBox_clicked(QAbstractButton *button)
{
  main_Information  * dialog1 = new main_Information();

    if(ui->yesOrNoBox->button(QDialogButtonBox::Ok)==button)
        {
            if((ui->name_2->currentText()=="")||(ui->password_2->text()==""))
                {
                    QMessageBox::information(this,tr("警告"),tr("输入不能为空！"),QMessageBox::Ok);
                    return;
                }
            QString name= ui->name_2->currentText();  //获取用户输入的账号
            QString password=ui->password_2->text();  //获取用户输入的密码

            QProgressDialog dialog(tr("正在登录"),tr("取消"),0,30000,this);
            dialog.setWindowTitle(tr("进度"));
            dialog.setWindowModality(Qt::WindowModal);
            dialog.show();
            for(int k=0;k<30000;k++)
                {
                    dialog.setValue(k);
                    QCoreApplication::processEvents();
                    if(dialog.wasCanceled())
                        {
                            break;
                        }
                }
            dialog.setValue(30000);

            MySql *mysql=new MySql();
            bool ret=mysql->loguser(name,password); //调用登录函数 进行数据库记录的匹配
            if(!ret)
                {
                    QMessageBox::information(this,tr("消息"),tr("帐号密码不匹配！"),QMessageBox::Ok);
                    return;
                }
            QMessageBox::information(this,tr("消息"),tr("登录成功！"),QMessageBox::Ok);
            hide();
            dialog1->show();
            return;
        }
    else if(ui->yesOrNoBox->button(QDialogButtonBox::Cancel)==button)
            this->close();
}
void MainWindow_Login::on_registerBtn_clicked()
{
    this->hide();
   Dialog_register* regis = new Dialog_register();
   regis->show();
}

void MainWindow_Login::on_forgetPasswdBtn_clicked()
{

    bool ok;
    QInputDialog ecf;
    name = ecf.getText(this,tr("忘记密码"),tr("请输入用户名："),QLineEdit::Normal,nullptr,&ok);
    identify=ecf.getText(this,tr("忘记密码"),tr("请输入证件号："),QLineEdit::Normal,nullptr,&ok);
    MySql *mysql=new MySql();
    bool ret=mysql->forgetpassward(name,identify);
    if(!ret)
        {
            QMessageBox::information(this,tr("消息"),tr("消息不匹配!"),QMessageBox::Ok);
            return;
        }
    QMessageBox::information(this,tr("消息"),tr("请妥善保管您的密码:%1").arg(MW->password),QMessageBox::Ok);
    return;
}

void MainWindow_Login::on_Exit_pushButton_clicked()
{
    close();
}
