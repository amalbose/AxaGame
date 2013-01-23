TEMPLATE = app
CONFIG += console
CONFIG -= qt

SOURCES += \
    axagame/engine/stateman.cpp \
    axagame/engine/irrcontroller.cpp \
    axagame/engine/globals.cpp \
    axagame/engine/game.cpp \
    axagame/engine/event.cpp \
    axagame/engine/config.cpp \
    axagame/game/play.cpp \
    axagame/utils/utils.cpp \
    axagame/utils/properties.cpp \
    axagame/utils/logger.cpp \
    axagame/main.cpp


win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../../Softwares/irrlicht-1.7.3/lib/Linux/release/ -lIrrlicht -lGL -lGLU
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../../Softwares/irrlicht-1.7.3/lib/Linux/debug/ -lIrrlicht -lGL -lGLU
else:unix:!macx:!symbian: LIBS += -L$$PWD/../../Softwares/irrlicht-1.7.3/lib/Linux/ -lIrrlicht -lGL -lGLU

INCLUDEPATH += $$PWD/../../Softwares/irrlicht-1.7.3/include
DEPENDPATH += $$PWD/../../Softwares/irrlicht-1.7.3/include

win32:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/../../Softwares/irrlicht-1.7.3/lib/Linux/release/Irrlicht.lib
else:win32:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/../../Softwares/irrlicht-1.7.3/lib/Linux/debug/Irrlicht.lib
else:unix:!macx:!symbian: PRE_TARGETDEPS += $$PWD/../../Softwares/irrlicht-1.7.3/lib/Linux/libIrrlicht.a

HEADERS += \
    axagame/engine/stateman.h \
    axagame/engine/state.h \
    axagame/engine/singleton.h \
    axagame/engine/irrcontroller.h \
    axagame/engine/imports.h \
    axagame/engine/globals.h \
    axagame/engine/game.h \
    axagame/engine/event.h \
    axagame/engine/defaults.h \
    axagame/engine/constants.h \
    axagame/engine/config.h \
    axagame/game/play.h \
    axagame/utils/utils.h \
    axagame/utils/properties.h \
    axagame/utils/logger.h

OTHER_FILES += \
    axagame/data/config.prop
