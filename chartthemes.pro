QT += charts
requires(qtConfig(combobox))

HEADERS += \
    cgteaqt.h

SOURCES += \
    cgteaqt.cpp \
    main.cpp

target.path = $$[QT_INSTALL_EXAMPLES]/charts/chartthemes
INSTALLS += target

FORMS += \
    cgteaqt.ui
