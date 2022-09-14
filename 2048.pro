QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    mainwindow.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    ../0.png \
    ../010yu.png \
    ../011sul.png \
    ../012hae.png \
    ../01ja.png \
    ../02chuk.png \
    ../03in.png \
    ../04myo.png \
    ../05jin.png \
    ../06sa.png \
    ../07oo.png \
    ../08mi.png \
    ../09sin.png \
    ../1024.png \
    ../128.png \
    ../16.png \
    ../2.png \
    ../2048.png \
    ../256.png \
    ../32.png \
    ../4.png \
    ../4096.png \
    ../512.png \
    ../64.png \
    ../8.png
