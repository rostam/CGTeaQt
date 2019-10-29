QT += charts
requires(qtConfig(combobox))

HEADERS += \
    MyQWidget.h \
    cgtea/G6Format/G6Format.h \
    cgtea/actions/ActionInterface.h \
    cgtea/actions/Coloring.h \
    cgtea/datatypes.h \
    cgtea/generators/Antiprism.h \
    cgtea/generators/Banana.h \
    cgtea/generators/Complete.h \
    cgtea/generators/Cycle.h \
    cgtea/generators/GeneralizedPeterson.h \
    cgtea/generators/GeneratorInterface.h \
    cgtea/generators/PositionGenerators.h \
    cgtea/generators/Prism.h \
    cgtea/generators/Regular.h \
    cgtea/generators/Star.h \
    cgtea/generators/compute_force_directed.h \
    cgtea/generators/point.h \
    cgtea/reports/MaxDegree.h \
    cgtea/reports/MaxEigenValue.h \
    cgtea/reports/MinEigenValue.h \
    cgtea/reports/NumOfEdges.h \
    cgtea/reports/NumOfVertices.h \
    cgtea/reports/ReportInterface.h \
    cgtea/reports/SumEigenValues.h \
    cgteaqt.h

SOURCES += \
    cgtea/generators/compute_force_directed.cpp \
    cgteaqt.cpp \
    main.cpp

target.path = $$[QT_INSTALL_EXAMPLES]/charts/chartthemes
INSTALLS += target

FORMS += \
    cgteaqt.ui
