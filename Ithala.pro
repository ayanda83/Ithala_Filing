#-------------------------------------------------
#
# Project created by QtCreator 2016-09-20T20:05:18
#
#-------------------------------------------------

QT       += core gui
QT       += sql
QT       += network


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Ithala
TEMPLATE = app


SOURCES += main.cpp\
        login_window.cpp \
    mainwindow.cpp \
    filemodel.cpp

HEADERS  += login_window.h \
    mainwindow.h \
    databaseconnection.h \
    filemodel.h

FORMS    += login_window.ui \
    mainwindow.ui
