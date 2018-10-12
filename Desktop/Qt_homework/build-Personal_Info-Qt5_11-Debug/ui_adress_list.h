/********************************************************************************
** Form generated from reading UI file 'adress_list.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADRESS_LIST_H
#define UI_ADRESS_LIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Adress_List
{
public:
    QGridLayout *gridLayout;
    QTableView *tableView;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_add;
    QPushButton *pushButton_submit;
    QPushButton *pushButton_delete;
    QPushButton *pushButton_exit;

    void setupUi(QDialog *Adress_List)
    {
        if (Adress_List->objectName().isEmpty())
            Adress_List->setObjectName(QStringLiteral("Adress_List"));
        Adress_List->resize(400, 437);
        gridLayout = new QGridLayout(Adress_List);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tableView = new QTableView(Adress_List);
        tableView->setObjectName(QStringLiteral("tableView"));

        gridLayout->addWidget(tableView, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pushButton_add = new QPushButton(Adress_List);
        pushButton_add->setObjectName(QStringLiteral("pushButton_add"));
        QFont font;
        font.setFamily(QStringLiteral("Weibei SC"));
        font.setPointSize(15);
        font.setBold(true);
        font.setWeight(75);
        pushButton_add->setFont(font);

        verticalLayout->addWidget(pushButton_add);

        pushButton_submit = new QPushButton(Adress_List);
        pushButton_submit->setObjectName(QStringLiteral("pushButton_submit"));
        pushButton_submit->setFont(font);

        verticalLayout->addWidget(pushButton_submit);

        pushButton_delete = new QPushButton(Adress_List);
        pushButton_delete->setObjectName(QStringLiteral("pushButton_delete"));
        QFont font1;
        font1.setFamily(QStringLiteral("Weibei SC"));
        font1.setPointSize(17);
        pushButton_delete->setFont(font1);

        verticalLayout->addWidget(pushButton_delete);

        pushButton_exit = new QPushButton(Adress_List);
        pushButton_exit->setObjectName(QStringLiteral("pushButton_exit"));
        QFont font2;
        font2.setFamily(QStringLiteral("Weibei SC"));
        font2.setPointSize(17);
        font2.setBold(true);
        font2.setWeight(75);
        pushButton_exit->setFont(font2);

        verticalLayout->addWidget(pushButton_exit);


        gridLayout->addLayout(verticalLayout, 0, 1, 1, 1);


        retranslateUi(Adress_List);

        QMetaObject::connectSlotsByName(Adress_List);
    } // setupUi

    void retranslateUi(QDialog *Adress_List)
    {
        Adress_List->setWindowTitle(QApplication::translate("Adress_List", "\346\210\221\347\232\204\345\245\275\345\217\213", nullptr));
        pushButton_add->setText(QApplication::translate("Adress_List", "\346\267\273\345\212\240\350\201\224\347\263\273\344\272\272", nullptr));
        pushButton_submit->setText(QApplication::translate("Adress_List", "\346\217\220\344\272\244\344\277\256\346\224\271", nullptr));
        pushButton_delete->setText(QApplication::translate("Adress_List", "\345\210\240\351\231\244", nullptr));
        pushButton_exit->setText(QApplication::translate("Adress_List", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Adress_List: public Ui_Adress_List {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADRESS_LIST_H
