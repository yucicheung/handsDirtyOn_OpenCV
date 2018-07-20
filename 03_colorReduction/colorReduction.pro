#-------------------------------------------------
#
# Project created by QtCreator 2018-07-20T15:22:36
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = colorReduction
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui

INCLUDEPATH += /usr/local/include

LIBS += -L/usr/local/lib/ -lopencv_core -lopencv_highgui -lopencv_imgproc -lopencv_features2d -lopencv_calib3d -lopencv_imgcodecs
