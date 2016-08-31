#-------------------------------------------------
#
# Project created by QtCreator 2016-08-23T22:09:18
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = qt_test
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    create_player.cpp \
    playermanager.cpp \
    player.cpp

HEADERS  += mainwindow.h \
    create_player.h \
    playermanager.h \
    player.h

FORMS    += mainwindow.ui \
    create_player.ui

DISTFILES +=
