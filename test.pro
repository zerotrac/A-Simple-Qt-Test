#-------------------------------------------------
#
# Project created by QtCreator 2016-08-11T12:52:19
#
#-------------------------------------------------

QT       += core gui
CONFIG   += c++11

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = test
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    console.cpp \
    wg1.cpp \
    wg2.cpp \
    wg0.cpp

HEADERS  += mainwindow.h \
    console.h \
    wg1.h \
    wg2.h \
    wg0.h

FORMS    += mainwindow.ui \
    wg1.ui \
    wg2.ui \
    wg0.ui
