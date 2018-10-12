#ifndef DIALOG_REGISTER_H
#define DIALOG_REGISTER_H

#include <QDialog>
#include "mainwindow_login.h"
namespace Ui {
class Dialog_register;
}

class Dialog_register : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_register(QWidget *parent = 0);
    ~Dialog_register();
private slots:
    void on_yesOrNoBox_clicked(QAbstractButton *button);
private:
    Ui::Dialog_register *ui;
     MainWindow_Login* Mparent;
};

#endif // DIALOG_REGISTER_H
