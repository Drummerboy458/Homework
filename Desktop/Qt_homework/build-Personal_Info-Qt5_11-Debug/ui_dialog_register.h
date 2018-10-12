/********************************************************************************
** Form generated from reading UI file 'dialog_register.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_REGISTER_H
#define UI_DIALOG_REGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog_register
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *name;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *ID;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *passwd;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *passwd2;
    QDialogButtonBox *yesOrNoBox;

    void setupUi(QDialog *Dialog_register)
    {
        if (Dialog_register->objectName().isEmpty())
            Dialog_register->setObjectName(QStringLiteral("Dialog_register"));
        Dialog_register->resize(466, 364);
        layoutWidget = new QWidget(Dialog_register);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 10, 441, 231));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font;
        font.setFamily(QStringLiteral("Weibei SC"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);

        horizontalLayout_2->addWidget(label_2);

        name = new QLineEdit(layoutWidget);
        name->setObjectName(QStringLiteral("name"));

        horizontalLayout_2->addWidget(name);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);

        horizontalLayout_3->addWidget(label_3);

        ID = new QLineEdit(layoutWidget);
        ID->setObjectName(QStringLiteral("ID"));

        horizontalLayout_3->addWidget(ID);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);

        horizontalLayout_4->addWidget(label_4);

        passwd = new QLineEdit(layoutWidget);
        passwd->setObjectName(QStringLiteral("passwd"));

        horizontalLayout_4->addWidget(passwd);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font);

        horizontalLayout_5->addWidget(label_5);

        passwd2 = new QLineEdit(layoutWidget);
        passwd2->setObjectName(QStringLiteral("passwd2"));

        horizontalLayout_5->addWidget(passwd2);


        verticalLayout->addLayout(horizontalLayout_5);

        yesOrNoBox = new QDialogButtonBox(Dialog_register);
        yesOrNoBox->setObjectName(QStringLiteral("yesOrNoBox"));
        yesOrNoBox->setGeometry(QRect(110, 280, 181, 41));
        yesOrNoBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(Dialog_register);

        QMetaObject::connectSlotsByName(Dialog_register);
    } // setupUi

    void retranslateUi(QDialog *Dialog_register)
    {
        Dialog_register->setWindowTitle(QApplication::translate("Dialog_register", "\346\263\250\345\206\214\350\264\246\345\217\267", nullptr));
        label_2->setText(QApplication::translate("Dialog_register", "\347\224\250\346\210\267\345\220\215:         ", nullptr));
        label_3->setText(QApplication::translate("Dialog_register", "\350\257\201\344\273\266\345\217\267:         ", nullptr));
        label_4->setText(QApplication::translate("Dialog_register", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201:", nullptr));
        label_5->setText(QApplication::translate("Dialog_register", "\350\257\267\347\241\256\350\256\244\345\257\206\347\240\201:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog_register: public Ui_Dialog_register {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_REGISTER_H
