#-------------------------------------------------
#
# Project created by QtCreator 2017-05-20T22:39:20
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = myGraphicsScene
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    myview.cpp

HEADERS  += mainwindow.h \
    myview.h

FORMS    += mainwindow.ui

QT += opengl
