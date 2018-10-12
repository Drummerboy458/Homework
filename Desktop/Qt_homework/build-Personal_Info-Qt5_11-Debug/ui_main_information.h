/********************************************************************************
** Form generated from reading UI file 'main_information.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_INFORMATION_H
#define UI_MAIN_INFORMATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_main_Information
{
public:
    QGroupBox *groupBox_2;
    QFrame *line;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QPushButton *Basic_infomation_pushButton;
    QPushButton *course_arrangement;
    QPushButton *pushButton_2;
    QPushButton *pushButton_book;
    QFrame *line_2;
    QFrame *line_3;
    QFrame *line_4;

    void setupUi(QDialog *main_Information)
    {
        if (main_Information->objectName().isEmpty())
            main_Information->setObjectName(QStringLiteral("main_Information"));
        main_Information->resize(735, 563);
        groupBox_2 = new QGroupBox(main_Information);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(110, 20, 501, 31));
        QFont font;
        font.setFamily(QStringLiteral("Weibei SC"));
        font.setPointSize(22);
        font.setBold(true);
        font.setWeight(75);
        groupBox_2->setFont(font);
        line = new QFrame(main_Information);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(-10, 130, 801, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        groupBox = new QGroupBox(main_Information);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(0, 60, 150, 521));
        QFont font1;
        font1.setFamily(QStringLiteral("Weibei SC"));
        font1.setPointSize(23);
        font1.setBold(true);
        font1.setWeight(75);
        groupBox->setFont(font1);
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        Basic_infomation_pushButton = new QPushButton(groupBox);
        Basic_infomation_pushButton->setObjectName(QStringLiteral("Basic_infomation_pushButton"));
        QFont font2;
        font2.setFamily(QStringLiteral("Weibei SC"));
        font2.setPointSize(18);
        font2.setBold(true);
        font2.setWeight(75);
        Basic_infomation_pushButton->setFont(font2);

        verticalLayout->addWidget(Basic_infomation_pushButton);

        course_arrangement = new QPushButton(groupBox);
        course_arrangement->setObjectName(QStringLiteral("course_arrangement"));
        course_arrangement->setFont(font2);

        verticalLayout->addWidget(course_arrangement);

        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setFont(font2);

        verticalLayout->addWidget(pushButton_2);

        pushButton_book = new QPushButton(groupBox);
        pushButton_book->setObjectName(QStringLiteral("pushButton_book"));
        pushButton_book->setFont(font2);

        verticalLayout->addWidget(pushButton_book);

        line_2 = new QFrame(main_Information);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(0, 230, 1121, 20));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(main_Information);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(-30, 330, 1161, 20));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(main_Information);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setGeometry(QRect(-40, 440, 1121, 20));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        retranslateUi(main_Information);

        QMetaObject::connectSlotsByName(main_Information);
    } // setupUi

    void retranslateUi(QDialog *main_Information)
    {
        main_Information->setWindowTitle(QApplication::translate("main_Information", "\347\231\273\345\275\225\346\210\220\345\212\237", nullptr));
        groupBox_2->setTitle(QApplication::translate("main_Information", "             \346\254\242\350\277\216\347\231\273\345\275\225\344\270\252\344\272\272\344\277\241\346\201\257\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        groupBox->setTitle(QApplication::translate("main_Information", "    \346\210\221\347\232\204   ", nullptr));
        Basic_infomation_pushButton->setText(QApplication::translate("main_Information", "\345\237\272\346\234\254\344\277\241\346\201\257", nullptr));
        course_arrangement->setText(QApplication::translate("main_Information", "\350\257\276\350\241\250", nullptr));
        pushButton_2->setText(QApplication::translate("main_Information", "\351\200\232\350\256\257\345\275\225", nullptr));
        pushButton_book->setText(QApplication::translate("main_Information", "\344\271\246\345\215\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class main_Information: public Ui_main_Information {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_INFORMATION_H
