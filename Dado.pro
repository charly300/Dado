#-------------------------------------------------
#
# Project created by QtCreator 2014-04-13T16:55:27
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Dado
TEMPLATE = app


SOURCES += main.cpp \
    core/dado.cpp \
    ui/formdado.cpp \
    ui/mainwindow.cpp \
    controller/controllerdado.cpp

HEADERS  += \
    core/dado.h \
    ui/formdado.h \
    ui/mainwindow.h \
    controller/controllerdado.h

FORMS    += \
    ui/formdado.ui \
    ui/mainwindow.ui

RESOURCES += \
    images.qrc
