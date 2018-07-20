QT += core
QT -= gui

TARGET = beginner
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp

INCLUDEPATH += /usr/local/include

LIBS += -L/usr/local/lib/ -lopencv_core -lopencv_highgui -lopencv_imgproc -lopencv_features2d -lopencv_calib3d -lopencv_imgcodecs
