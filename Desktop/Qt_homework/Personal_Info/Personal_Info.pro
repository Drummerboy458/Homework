#-------------------------------------------------
#
# Project created by QtCreator 2018-07-23T20:54:59
#
#-------------------------------------------------

QT       += core gui
QT       += sql
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Personal_Info
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        mainwindow_login.cpp \
    clock.cpp \
    mysql.cpp \
    dialog_register.cpp \
    book_list.cpp \
    adress_list.cpp \
    myclasstable.cpp \
    main_information.cpp \
    see_information.cpp

HEADERS += \
        mainwindow_login.h \
    clock.h \
    mysql.h \
    student.h \
    dialog_register.h \
    book_list.h \
    adress_list.h \
    myclasstable.h \
    main_information.h \
    see_information.h

FORMS += \
        mainwindow_login.ui \
    clock.ui \
    dialog_register.ui \
    book_list.ui \
    adress_list.ui \
    myclasstable.ui \
    main_information.ui \
    see_information.ui

RESOURCES +=
