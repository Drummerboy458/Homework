#ifndef MYCLASSTABLE_H
#define MYCLASSTABLE_H

#include <QDialog>
#include<QSqlRelationalTableModel>
#include<QSqlRelationalDelegate>
namespace Ui {
class MyClassTable;
}

class MyClassTable : public QDialog
{
    Q_OBJECT

public:
    explicit MyClassTable(QWidget *parent = 0);
    ~MyClassTable();
signals:
    void sendsignal();     //向主界面通知关闭的消息
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();
private:
    Ui::MyClassTable *ui;
    QSqlRelationalTableModel * model;
};

#endif // MYCLASSTABLE_H
