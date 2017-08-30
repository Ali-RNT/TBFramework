QT       += core network

QT       -= gui

TARGET = TBFramework
TEMPLATE = lib

SOURCES += src/update.cpp \
            src/tbreceiver.cpp \
    src/user.cpp \
    src/message.cpp \
    src/chat.cpp \
    src/messageentity.cpp \
    src/photosize.cpp \
    src/audio.cpp \
    src/document.cpp \
    src/video.cpp

HEADERS += include/update.h \
            include/tbreceiver.h \
    include/user.h \
    include/message.h \
    include/chat.h \
    include/messageentity.h \
    include/photosize.h \
    include/audio.h \
    include/document.h \
    include/video.h
unix {
    target.path = /usr/lib
    INSTALLS += target
}
