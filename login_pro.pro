QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    mainwindow.cpp \
    re_1_info.cpp \
    re_2_order.cpp \
    re_3_store.cpp \
    re_4_fina.cpp \
    regist.cpp \
    widget.cpp

HEADERS += \
    mainwindow.h \
    re_1_info.h \
    re_2_order.h \
    re_3_store.h \
    re_4_fina.h \
    regist.h \
    widget.h

FORMS += \
    mainwindow.ui \
    re_1_info.ui \
    re_2_order.ui \
    re_3_store.ui \
    re_4_fina.ui \
    regist.ui \
    widget.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    pho.qrc
