QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Article.cpp \
    Player.cpp \
    Question.cpp \
    Word.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    ../NCYU_Class/EnglishTypingGame/Article.h \
    ../NCYU_Class/EnglishTypingGame/Player.h \
    ../NCYU_Class/EnglishTypingGame/Question.h \
    ../NCYU_Class/EnglishTypingGame/Word.h \
    Article.h \
    Player.h \
    Question.h \
    Word.h \
    mainwindow.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    vocabulary.txt
