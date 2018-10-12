/********************************************************************************
** Form generated from reading UI file 'clock.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLOCK_H
#define UI_CLOCK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Clock
{
public:
    QWidget *widget;

    void setupUi(QDialog *Clock)
    {
        if (Clock->objectName().isEmpty())
            Clock->setObjectName(QStringLiteral("Clock"));
        Clock->resize(539, 408);
        widget = new QWidget(Clock);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(190, 50, 321, 291));

        retranslateUi(Clock);

        QMetaObject::connectSlotsByName(Clock);
    } // setupUi

    void retranslateUi(QDialog *Clock)
    {
        Clock->setWindowTitle(QApplication::translate("Clock", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Clock: public Ui_Clock {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLOCK_H
