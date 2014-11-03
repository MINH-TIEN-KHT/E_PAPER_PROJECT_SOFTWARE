#-------------------------------------------------
#
# Project created by QtCreator 2014-10-29T00:38:05
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets serialport

TARGET = EPaper_Manager
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h \
    mavlink_epaper/include/mavlink_epaper/mavlink_epaper.h

FORMS    += mainwindow.ui
