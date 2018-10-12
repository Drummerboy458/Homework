#ifndef SEE_INFORMATION_H
#define SEE_INFORMATION_H

#include <QDialog>
#include<QSqlRelationalTableModel>
#include<QSqlRelationalDelegate>
namespace Ui {
class see_Information;
}

class see_Information : public QDialog
{
    Q_OBJECT

public:
    explicit see_Information(QWidget *parent = 0);
    ~see_Information();
private slots:
    void on_pushButton_clicked();
    void on_pushButton_10_clicked();
    void on_pushButton_2_clicked();

signals:
    void sendsignal();//向主界面通知关闭的消息
private:
    Ui::see_Information *ui;
    QSqlRelationalTableModel * model;
};

#endif // SEE_INFORMATION_H
