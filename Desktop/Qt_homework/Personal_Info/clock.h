#ifndef CLOCK_H
#define CLOCK_H

#include <QDialog>
#include<QMainWindow>
namespace Ui {
class Clock;
}

class Clock : public QDialog
{
    Q_OBJECT

public:
    explicit Clock(QWidget *parent = 0);
     QRectF textRectF(double radius, int pointSize, double angle);
     void paintEvent(QPaintEvent *event);
    ~Clock();

private:
    Ui::Clock *ui;
};

#endif // CLOCK_H
