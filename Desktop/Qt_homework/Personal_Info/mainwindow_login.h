#ifndef MAINWINDOW_LOGIN_H
#define MAINWINDOW_LOGIN_H

#include <QAbstractButton>
#include <QMainWindow>
#include <QString>
#include <QPushButton>
#include <QMessageBox>
#include <QProgressDialog>
#include <QInputDialog>
#include <clock.h>
namespace Ui {
class MainWindow_Login;
}

class MainWindow_Login : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow_Login(QWidget *parent = 0);
    ~MainWindow_Login();
    QString name;
    QString password;
    QString identify;
    QString get_identify();
    QString get_name();
    static MainWindow_Login* getIntance();
private slots:
    void on_yesOrNoBox_clicked(QAbstractButton *button);

    void on_registerBtn_clicked();

    void on_forgetPasswdBtn_clicked();

    void on_Exit_pushButton_clicked();
private:
    Ui::MainWindow_Login *ui;
    static  MainWindow_Login* MW;     //一直指向MainWindow
    Clock* clock1;
};

#endif // MAINWINDOW_LOGIN_H
