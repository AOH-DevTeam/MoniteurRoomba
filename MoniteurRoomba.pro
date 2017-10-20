#-------------------------------------------------
#
# Project created by QtCreator 2017-09-12T10:44:40
#
#-------------------------------------------------

QT       += core gui serialport

CONFIG +=serialport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = MoniteurRoomba
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    Liaison.cpp \
    Trame.cpp \
    configliaison.cpp \
    capteur.cpp \
    acquisition.cpp \
    test.cpp \
    dialogconfiguration.cpp

HEADERS  += mainwindow.h \
    ConfigLiaison.h \
    Liaison.h \
    Trame.h \
    capteur.h \
    acquisition.h \
    ecapt.h \
    test.h \
    dialogconfiguration.h

FORMS    += mainwindow.ui \
    dialogconfiguration.ui

RESOURCES += \
    moniteurroombaresource.qrc
