#ifndef ADRESS_LIST_H
#define ADRESS_LIST_H

#include <QDialog>
#include<QSqlRelationalTableModel>
#include<QSqlRelationalDelegate>
namespace Ui {
class Adress_List;
}

class Adress_List : public QDialog
{
    Q_OBJECT

public:
    explicit Adress_List(QWidget *parent = 0);
    ~Adress_List();
signals:
    void sendsignal();     //向主界面通知关闭的消息
private slots:


    void on_pushButton_add_clicked();

    void on_pushButton_delete_clicked();

    void on_pushButton_exit_clicked();

    void on_pushButton_submit_clicked();
private:
    Ui::Adress_List *ui;
    QSqlRelationalTableModel * model;
};

#endif // ADRESS_LIST_H
