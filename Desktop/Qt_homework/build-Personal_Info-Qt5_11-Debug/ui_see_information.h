/********************************************************************************
** Form generated from reading UI file 'see_information.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEE_INFORMATION_H
#define UI_SEE_INFORMATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_see_Information
{
public:
    QTableView *tableView;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QPushButton *pushButton_10;

    void setupUi(QDialog *see_Information)
    {
        if (see_Information->objectName().isEmpty())
            see_Information->setObjectName(QStringLiteral("see_Information"));
        see_Information->resize(585, 300);
        tableView = new QTableView(see_Information);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(10, 10, 541, 171));
        layoutWidget = new QWidget(see_Information);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 220, 521, 42));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        QFont font;
        font.setFamily(QStringLiteral("Wawati SC"));
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        pushButton_2->setFont(font);

        horizontalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QFont font1;
        font1.setFamily(QStringLiteral("Weibei SC"));
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setWeight(75);
        pushButton->setFont(font1);

        horizontalLayout->addWidget(pushButton);

        pushButton_10 = new QPushButton(layoutWidget);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setFont(font1);

        horizontalLayout->addWidget(pushButton_10);


        retranslateUi(see_Information);

        QMetaObject::connectSlotsByName(see_Information);
    } // setupUi

    void retranslateUi(QDialog *see_Information)
    {
        see_Information->setWindowTitle(QApplication::translate("see_Information", "\346\210\221\347\232\204\345\237\272\346\234\254\344\277\241\346\201\257", nullptr));
        pushButton_2->setText(QApplication::translate("see_Information", "\346\267\273\345\212\240\344\277\241\346\201\257", nullptr));
        pushButton->setText(QApplication::translate("see_Information", "\346\217\220\344\272\244\344\277\256\346\224\271", nullptr));
        pushButton_10->setText(QApplication::translate("see_Information", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class see_Information: public Ui_see_Information {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEE_INFORMATION_H
