#-------------------------------------------------
#
# Project created by QtCreator 2016-08-15T17:49:39
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

include(M5Lib/include/M5Lib.pri)

TARGET = M5LibTest
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp

HEADERS  += widget.h

FORMS    += widget.ui


DESTDIR = $$PWD
OBJECTS_DIR = $$PWD/obj
MOC_DIR = $$PWD/obj
UI_DIR = $$PWD/obj/ui_header



unix: LIBS += -L$$PWD/M5Lib/ -lM5Lib

INCLUDEPATH += $$PWD/M5Lib/include
DEPENDPATH += $$PWD/M5Lib/include

unix: PRE_TARGETDEPS += $$PWD/M5Lib/libM5Lib.a
