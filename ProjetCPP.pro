#-------------------------------------------------
#
# Project created by QtCreator 2015-05-09T15:18:09
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ProjetCPP
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    Activité.cpp \
    Event.cpp \
    EventMaker.cpp \
    Projet.cpp \
    Tache.cpp \
    timing.cpp \
    taches.cpp \
    tachep.cpp \
    tachec.cpp

HEADERS  += mainwindow.h \
    Activite.h \
    Event.h \
    EventMaker.h \
    Projet.h \
    Tache.h \
    timing.h \
    calendarexception.h \
    tachec.h \
    tachep.h \
    taches.h

FORMS    += mainwindow.ui
