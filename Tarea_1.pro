TEMPLATE = app
QMAKE_CXXFLAGS += -Wunused-parameter
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt
LIBS += -lGL -lglut
SOURCES += \
        main.c

