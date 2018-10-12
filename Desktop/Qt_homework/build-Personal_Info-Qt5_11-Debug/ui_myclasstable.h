/********************************************************************************
** Form generated from reading UI file 'myclasstable.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYCLASSTABLE_H
#define UI_MYCLASSTABLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyClassTable
{
public:
    QTableView *tableView;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_4;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QDialog *MyClassTable)
    {
        if (MyClassTable->objectName().isEmpty())
            MyClassTable->setObjectName(QStringLiteral("MyClassTable"));
        MyClassTable->resize(726, 420);
        tableView = new QTableView(MyClassTable);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(10, 10, 521, 391));
        layoutWidget = new QWidget(MyClassTable);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(550, 30, 121, 341));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QFont font;
        font.setFamily(QStringLiteral("Weibei SC"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        pushButton->setFont(font);

        verticalLayout->addWidget(pushButton);

        pushButton_4 = new QPushButton(layoutWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        QFont font1;
        font1.setFamily(QStringLiteral("Weibei SC"));
        font1.setPointSize(16);
        pushButton_4->setFont(font1);

        verticalLayout->addWidget(pushButton_4);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        QFont font2;
        font2.setFamily(QStringLiteral("Weibei TC"));
        font2.setPointSize(16);
        font2.setBold(true);
        font2.setWeight(75);
        pushButton_2->setFont(font2);

        verticalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setFont(font1);

        verticalLayout->addWidget(pushButton_3);


        retranslateUi(MyClassTable);

        QMetaObject::connectSlotsByName(MyClassTable);
    } // setupUi

    void retranslateUi(QDialog *MyClassTable)
    {
        MyClassTable->setWindowTitle(QApplication::translate("MyClassTable", "\346\210\221\347\232\204\350\257\276\350\241\250", nullptr));
        pushButton->setText(QApplication::translate("MyClassTable", "\346\267\273\345\212\240\344\270\200\350\241\214", nullptr));
        pushButton_4->setText(QApplication::translate("MyClassTable", "\346\217\220\344\272\244\344\277\256\346\224\271", nullptr));
        pushButton_2->setText(QApplication::translate("MyClassTable", "\345\210\240\351\231\244\350\241\214", nullptr));
        pushButton_3->setText(QApplication::translate("MyClassTable", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyClassTable: public Ui_MyClassTable {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYCLASSTABLE_H
