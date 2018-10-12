#ifndef MAIN_INFORMATION_H
#define MAIN_INFORMATION_H

#include <QDialog>
#include<QDockWidget>
namespace Ui {
class main_Information;
}

class main_Information : public QDialog
{
    Q_OBJECT

public:
    explicit main_Information(QWidget *parent = 0);
    void show()
     {
         main_Information::exec();
     }
    ~main_Information();
private slots:
       void on_course_arrangement_clicked();
       void on_Basic_infomation_pushButton_clicked();

       void on_pushButton_book_clicked();

       void on_pushButton_2_clicked();
private:
    Ui::main_Information *ui;
};

#endif // MAIN_INFORMATION_H
