/********************************************************************************
** Form generated from reading UI file 'mainwindow_login.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_LOGIN_H
#define UI_MAINWINDOW_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow_Login
{
public:
    QWidget *centralWidget;
    QLabel *label_nankai;
    QLabel *label_pic;
    QPushButton *registerBtn;
    QPushButton *forgetPasswdBtn;
    QDialogButtonBox *yesOrNoBox;
    QPushButton *Exit_pushButton;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLabel *label_user;
    QFontComboBox *name_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_6;
    QLabel *label_password;
    QLineEdit *password_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow_Login)
    {
        if (MainWindow_Login->objectName().isEmpty())
            MainWindow_Login->setObjectName(QStringLiteral("MainWindow_Login"));
        MainWindow_Login->resize(923, 574);
        centralWidget = new QWidget(MainWindow_Login);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label_nankai = new QLabel(centralWidget);
        label_nankai->setObjectName(QStringLiteral("label_nankai"));
        label_nankai->setGeometry(QRect(-20, 20, 931, 231));
        label_nankai->setLayoutDirection(Qt::LeftToRight);
        label_nankai->setAutoFillBackground(true);
        label_pic = new QLabel(centralWidget);
        label_pic->setObjectName(QStringLiteral("label_pic"));
        label_pic->setGeometry(QRect(0, 260, 431, 281));
        registerBtn = new QPushButton(centralWidget);
        registerBtn->setObjectName(QStringLiteral("registerBtn"));
        registerBtn->setGeometry(QRect(460, 380, 111, 41));
        QFont font;
        font.setFamily(QStringLiteral("Weibei SC"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        registerBtn->setFont(font);
        forgetPasswdBtn = new QPushButton(centralWidget);
        forgetPasswdBtn->setObjectName(QStringLiteral("forgetPasswdBtn"));
        forgetPasswdBtn->setGeometry(QRect(650, 380, 111, 41));
        QFont font1;
        font1.setFamily(QStringLiteral("Weibei SC"));
        font1.setPointSize(15);
        font1.setBold(true);
        font1.setWeight(75);
        forgetPasswdBtn->setFont(font1);
        yesOrNoBox = new QDialogButtonBox(centralWidget);
        yesOrNoBox->setObjectName(QStringLiteral("yesOrNoBox"));
        yesOrNoBox->setEnabled(true);
        yesOrNoBox->setGeometry(QRect(510, 410, 191, 61));
        QFont font2;
        font2.setFamily(QStringLiteral(".SF NS Text"));
        font2.setPointSize(13);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(50);
        yesOrNoBox->setFont(font2);
        yesOrNoBox->setStyleSheet(QStringLiteral("font: 13pt \".SF NS Text\";"));
        yesOrNoBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        Exit_pushButton = new QPushButton(centralWidget);
        Exit_pushButton->setObjectName(QStringLiteral("Exit_pushButton"));
        Exit_pushButton->setGeometry(QRect(450, 460, 361, 32));
        QFont font3;
        font3.setFamily(QStringLiteral("Weibei SC"));
        font3.setPointSize(20);
        font3.setBold(true);
        font3.setWeight(75);
        Exit_pushButton->setFont(font3);
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(450, 260, 321, 91));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        label_user = new QLabel(widget);
        label_user->setObjectName(QStringLiteral("label_user"));
        QFont font4;
        font4.setFamily(QStringLiteral("Weibei SC"));
        font4.setPointSize(17);
        font4.setBold(true);
        font4.setWeight(75);
        label_user->setFont(font4);

        horizontalLayout_3->addWidget(label_user);

        name_2 = new QFontComboBox(widget);
        name_2->setObjectName(QStringLiteral("name_2"));

        horizontalLayout_3->addWidget(name_2);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_6 = new QLabel(widget);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_4->addWidget(label_6);

        label_password = new QLabel(widget);
        label_password->setObjectName(QStringLiteral("label_password"));
        label_password->setFont(font);

        horizontalLayout_4->addWidget(label_password);

        password_2 = new QLineEdit(widget);
        password_2->setObjectName(QStringLiteral("password_2"));

        horizontalLayout_4->addWidget(password_2);


        verticalLayout_2->addLayout(horizontalLayout_4);

        MainWindow_Login->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow_Login);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 923, 22));
        MainWindow_Login->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow_Login);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow_Login->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow_Login);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow_Login->setStatusBar(statusBar);

        retranslateUi(MainWindow_Login);

        QMetaObject::connectSlotsByName(MainWindow_Login);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow_Login)
    {
        MainWindow_Login->setWindowTitle(QApplication::translate("MainWindow_Login", "Personal Information Management System", nullptr));
        label_nankai->setText(QString());
        label_pic->setText(QApplication::translate("MainWindow_Login", "\345\233\276\347\211\207", nullptr));
        registerBtn->setText(QApplication::translate("MainWindow_Login", "\346\263\250\345\206\214", nullptr));
        forgetPasswdBtn->setText(QApplication::translate("MainWindow_Login", "\345\277\230\350\256\260\345\257\206\347\240\201", nullptr));
        Exit_pushButton->setText(QApplication::translate("MainWindow_Login", "Exit", nullptr));
        label_3->setText(QString());
        label_user->setText(QApplication::translate("MainWindow_Login", "\347\224\250\346\210\267\345\220\215:", nullptr));
        name_2->setCurrentText(QApplication::translate("MainWindow_Login", "root", nullptr));
        label_6->setText(QString());
        label_password->setText(QApplication::translate("MainWindow_Login", "\345\257\206    \347\240\201:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow_Login: public Ui_MainWindow_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_LOGIN_H
