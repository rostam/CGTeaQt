/********************************************************************************
** Form generated from reading UI file 'cgteaqt.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CGTEAQT_H
#define UI_CGTEAQT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ThemeWidgetForm
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *themeLabel;
    QComboBox *themeComboBox;
    QLabel *animatedLabel;
    QComboBox *animatedComboBox;
    QLabel *legendLabel;
    QComboBox *legendComboBox;
    QCheckBox *antialiasCheckBox;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *ThemeWidgetForm)
    {
        if (ThemeWidgetForm->objectName().isEmpty())
            ThemeWidgetForm->setObjectName(QString::fromUtf8("ThemeWidgetForm"));
        ThemeWidgetForm->resize(900, 600);
        gridLayout = new QGridLayout(ThemeWidgetForm);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        themeLabel = new QLabel(ThemeWidgetForm);
        themeLabel->setObjectName(QString::fromUtf8("themeLabel"));

        horizontalLayout->addWidget(themeLabel);

        themeComboBox = new QComboBox(ThemeWidgetForm);
        themeComboBox->setObjectName(QString::fromUtf8("themeComboBox"));

        horizontalLayout->addWidget(themeComboBox);

        animatedLabel = new QLabel(ThemeWidgetForm);
        animatedLabel->setObjectName(QString::fromUtf8("animatedLabel"));

        horizontalLayout->addWidget(animatedLabel);

        animatedComboBox = new QComboBox(ThemeWidgetForm);
        animatedComboBox->setObjectName(QString::fromUtf8("animatedComboBox"));

        horizontalLayout->addWidget(animatedComboBox);

        legendLabel = new QLabel(ThemeWidgetForm);
        legendLabel->setObjectName(QString::fromUtf8("legendLabel"));

        horizontalLayout->addWidget(legendLabel);

        legendComboBox = new QComboBox(ThemeWidgetForm);
        legendComboBox->setObjectName(QString::fromUtf8("legendComboBox"));

        horizontalLayout->addWidget(legendComboBox);

        antialiasCheckBox = new QCheckBox(ThemeWidgetForm);
        antialiasCheckBox->setObjectName(QString::fromUtf8("antialiasCheckBox"));
        antialiasCheckBox->setChecked(false);

        horizontalLayout->addWidget(antialiasCheckBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 3);


        retranslateUi(ThemeWidgetForm);
        QObject::connect(themeComboBox, SIGNAL(currentIndexChanged(int)), ThemeWidgetForm, SLOT(updateUI()));
        QObject::connect(antialiasCheckBox, SIGNAL(toggled(bool)), ThemeWidgetForm, SLOT(updateUI()));
        QObject::connect(legendComboBox, SIGNAL(currentIndexChanged(int)), ThemeWidgetForm, SLOT(updateUI()));
        QObject::connect(animatedComboBox, SIGNAL(currentIndexChanged(int)), ThemeWidgetForm, SLOT(updateUI()));

        QMetaObject::connectSlotsByName(ThemeWidgetForm);
    } // setupUi

    void retranslateUi(QWidget *ThemeWidgetForm)
    {
        themeLabel->setText(QApplication::translate("ThemeWidgetForm", "Graph View", nullptr));
        animatedLabel->setText(QApplication::translate("ThemeWidgetForm", "Animation:", nullptr));
        legendLabel->setText(QApplication::translate("ThemeWidgetForm", "Legend:", nullptr));
        antialiasCheckBox->setText(QApplication::translate("ThemeWidgetForm", "Anti-aliasing", nullptr));
        Q_UNUSED(ThemeWidgetForm);
    } // retranslateUi

};

namespace Ui {
    class ThemeWidgetForm: public Ui_ThemeWidgetForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CGTEAQT_H
