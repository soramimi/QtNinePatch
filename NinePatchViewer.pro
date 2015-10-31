#-------------------------------------------------
#
# Project created by QtCreator 2015-07-01T13:38:25
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = NinePatchViewer
TEMPLATE = app


SOURCES += main.cpp\
        MainWindow.cpp \
    ImageView.cpp \
    NinePatch.cpp

HEADERS  += MainWindow.h \
    ImageView.h \
    NinePatch.h

FORMS    += MainWindow.ui

