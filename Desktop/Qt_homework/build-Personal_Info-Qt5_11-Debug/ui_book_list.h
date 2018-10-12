/********************************************************************************
** Form generated from reading UI file 'book_list.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOK_LIST_H
#define UI_BOOK_LIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Book_List
{
public:
    QGridLayout *gridLayout;
    QTableView *tableView;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_4;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QDialog *Book_List)
    {
        if (Book_List->objectName().isEmpty())
            Book_List->setObjectName(QStringLiteral("Book_List"));
        Book_List->resize(418, 477);
        gridLayout = new QGridLayout(Book_List);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tableView = new QTableView(Book_List);
        tableView->setObjectName(QStringLiteral("tableView"));

        gridLayout->addWidget(tableView, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pushButton = new QPushButton(Book_List);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QFont font;
        font.setFamily(QStringLiteral("Wawati SC"));
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        pushButton->setFont(font);

        verticalLayout->addWidget(pushButton);

        pushButton_4 = new QPushButton(Book_List);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setFont(font);

        verticalLayout->addWidget(pushButton_4);

        pushButton_2 = new QPushButton(Book_List);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setFont(font);

        verticalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(Book_List);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setFont(font);

        verticalLayout->addWidget(pushButton_3);


        gridLayout->addLayout(verticalLayout, 0, 1, 1, 1);


        retranslateUi(Book_List);

        QMetaObject::connectSlotsByName(Book_List);
    } // setupUi

    void retranslateUi(QDialog *Book_List)
    {
        Book_List->setWindowTitle(QApplication::translate("Book_List", "\346\210\221\347\232\204\344\271\246\345\272\223", nullptr));
        pushButton->setText(QApplication::translate("Book_List", "\346\267\273\345\212\240\350\256\260\345\275\225", nullptr));
        pushButton_4->setText(QApplication::translate("Book_List", "\346\217\220\344\272\244\344\277\256\346\224\271", nullptr));
        pushButton_2->setText(QApplication::translate("Book_List", "\345\210\240\351\231\244\350\256\260\345\275\225", nullptr));
        pushButton_3->setText(QApplication::translate("Book_List", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Book_List: public Ui_Book_List {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOK_LIST_H
