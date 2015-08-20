#-------------------------------------------------
#
# Project created by QtCreator 2015-08-17T09:48:12
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = flightKiosk
TEMPLATE = app


SOURCES += main.cpp\
        flightkiosk.cpp

HEADERS  += flightkiosk.h

FORMS    += flightkiosk.ui

# deployment on Linux
unix {
    target.path = /usr/bin/
    distfiles.path = /usr/bin/resources/
    distfiles.files = resources/*
    INSTALLS += target \
             distfiles \
}

DISTFILES += \
#    resources/delta-logo.png \
#    resources/top-bar.png \
#    resources/delta-logo-white.png \
#    resources/white-bar.png \
#    resources/search-box.png \
#    resources/scan.png \
#    resources/credit.png \
#    resources/top-label.png \
#    resources/clouds-gray.png \
#    resources/seats-plane.png \
#    resources/welcome-screen.png \
#    resources/btn-red.png \
#    resources/baggage.png \
#    resources/flight-info.png \
    ../resources/clouds-gray.jpg \
    ../resources/baggage.png \
    ../resources/btn-red.png \
    ../resources/credit.png \
    ../resources/delta-logo.png \
    ../resources/delta-logo-white.png \
    ../resources/flight-info.png \
    ../resources/scan.png \
    ../resources/search-box.png \
    ../resources/seats-plane.png \
    ../resources/top-bar.png \
    ../resources/top-label.png \
    ../resources/welcome-screen.png \
    ../resources/white-bar.png







