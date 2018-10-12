#ifndef BOOK_LIST_H
#define BOOK_LIST_H

#include <QDialog>
#include<QSqlRelationalTableModel>
#include<QSqlRelationalDelegate>
namespace Ui {
class Book_List;
}

class Book_List : public QDialog
{
    Q_OBJECT

public:
    explicit Book_List(QWidget *parent = 0);
    ~Book_List();
signals:
    void sendsignal();     //向主界面通知关闭的消息
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::Book_List *ui;
    QSqlRelationalTableModel * model;
};

#endif // BOOK_LIST_H
