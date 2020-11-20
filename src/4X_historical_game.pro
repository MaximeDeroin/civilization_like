#-------------------------------------------------
#
# Project created by QtCreator 2020-11-16T19:32:59
#
#-------------------------------------------------

QT       += core gui
QT       += gui
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = 4X_historical_game
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
    gui/userinterfacemanager.cpp \
    gui/map/mapview.cpp \
    gui/map/maptile.cpp

HEADERS += \
    gui/userinterfacemanager.h \
    gui/map/mapview.h \
    gui/map/maptile.h

FORMS += \
    gui/userinterfacemanager.ui

RESOURCES += \
    ../res/resources.qrc