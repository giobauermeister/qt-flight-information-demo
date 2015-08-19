#-------------------------------------------------
#
# Project created by QtCreator 2015-08-17T16:04:41
#
#-------------------------------------------------

QT       += core gui webkitwidgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = flighInfo
TEMPLATE = app


SOURCES += main.cpp\
        flightinfo.cpp

HEADERS  += flightinfo.h

FORMS    += flightinfo.ui

# deployment on Linux
unix {
    target.path = /usr/bin/
   # images.path = /usr/bin/images/
   # images.files = images/*
    INSTALLS += target \
            # images \
}



