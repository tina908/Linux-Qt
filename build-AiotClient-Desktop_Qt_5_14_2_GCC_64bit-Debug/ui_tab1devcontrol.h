/********************************************************************************
** Form generated from reading UI file 'tab1devcontrol.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TAB1DEVCONTROL_H
#define UI_TAB1DEVCONTROL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDial>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Tab1Devcontrol
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pPBtimerStart;
    QComboBox *pCBtimerValue;
    QPushButton *pPBappQuit;
    QHBoxLayout *horizontalLayout_2;
    QDial *pDialled;
    QLCDNumber *pLcdnumberLed;
    QHBoxLayout *horizontalLayout_3;
    QProgressBar *pProgressBarLed;
    QHBoxLayout *horizontalLayout_4;
    QGridLayout *gridLayout;
    QCheckBox *pCBkey2;
    QCheckBox *pCBkey8;
    QCheckBox *pCBkey4;
    QCheckBox *pCBkey5;
    QCheckBox *pCBkey3;
    QCheckBox *pCBkey1;
    QCheckBox *pCBkey7;
    QCheckBox *pCBkey6;
    QVBoxLayout *verticalLayout;
    QLCDNumber *pLcdnumberKey;

    void setupUi(QWidget *Tab1Devcontrol)
    {
        if (Tab1Devcontrol->objectName().isEmpty())
            Tab1Devcontrol->setObjectName(QString::fromUtf8("Tab1Devcontrol"));
        Tab1Devcontrol->resize(449, 379);
        verticalLayout_2 = new QVBoxLayout(Tab1Devcontrol);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pPBtimerStart = new QPushButton(Tab1Devcontrol);
        pPBtimerStart->setObjectName(QString::fromUtf8("pPBtimerStart"));
        pPBtimerStart->setCheckable(true);

        horizontalLayout->addWidget(pPBtimerStart);

        pCBtimerValue = new QComboBox(Tab1Devcontrol);
        pCBtimerValue->addItem(QString());
        pCBtimerValue->addItem(QString());
        pCBtimerValue->addItem(QString());
        pCBtimerValue->addItem(QString());
        pCBtimerValue->addItem(QString());
        pCBtimerValue->setObjectName(QString::fromUtf8("pCBtimerValue"));

        horizontalLayout->addWidget(pCBtimerValue);

        pPBappQuit = new QPushButton(Tab1Devcontrol);
        pPBappQuit->setObjectName(QString::fromUtf8("pPBappQuit"));

        horizontalLayout->addWidget(pPBappQuit);

        horizontalLayout->setStretch(0, 2);
        horizontalLayout->setStretch(1, 2);
        horizontalLayout->setStretch(2, 1);

        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pDialled = new QDial(Tab1Devcontrol);
        pDialled->setObjectName(QString::fromUtf8("pDialled"));
        pDialled->setMaximum(255);
        pDialled->setWrapping(true);
        pDialled->setNotchesVisible(true);

        horizontalLayout_2->addWidget(pDialled);

        pLcdnumberLed = new QLCDNumber(Tab1Devcontrol);
        pLcdnumberLed->setObjectName(QString::fromUtf8("pLcdnumberLed"));
        pLcdnumberLed->setDigitCount(2);
        pLcdnumberLed->setMode(QLCDNumber::Hex);

        horizontalLayout_2->addWidget(pLcdnumberLed);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pProgressBarLed = new QProgressBar(Tab1Devcontrol);
        pProgressBarLed->setObjectName(QString::fromUtf8("pProgressBarLed"));
        pProgressBarLed->setMaximum(255);
        pProgressBarLed->setValue(0);

        horizontalLayout_3->addWidget(pProgressBarLed);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pCBkey2 = new QCheckBox(Tab1Devcontrol);
        pCBkey2->setObjectName(QString::fromUtf8("pCBkey2"));

        gridLayout->addWidget(pCBkey2, 1, 2, 1, 1);

        pCBkey8 = new QCheckBox(Tab1Devcontrol);
        pCBkey8->setObjectName(QString::fromUtf8("pCBkey8"));
        pCBkey8->setCheckable(true);

        gridLayout->addWidget(pCBkey8, 0, 0, 1, 1);

        pCBkey4 = new QCheckBox(Tab1Devcontrol);
        pCBkey4->setObjectName(QString::fromUtf8("pCBkey4"));

        gridLayout->addWidget(pCBkey4, 1, 0, 1, 1);

        pCBkey5 = new QCheckBox(Tab1Devcontrol);
        pCBkey5->setObjectName(QString::fromUtf8("pCBkey5"));

        gridLayout->addWidget(pCBkey5, 0, 3, 1, 1);

        pCBkey3 = new QCheckBox(Tab1Devcontrol);
        pCBkey3->setObjectName(QString::fromUtf8("pCBkey3"));

        gridLayout->addWidget(pCBkey3, 1, 1, 1, 1);

        pCBkey1 = new QCheckBox(Tab1Devcontrol);
        pCBkey1->setObjectName(QString::fromUtf8("pCBkey1"));

        gridLayout->addWidget(pCBkey1, 1, 3, 1, 1);

        pCBkey7 = new QCheckBox(Tab1Devcontrol);
        pCBkey7->setObjectName(QString::fromUtf8("pCBkey7"));

        gridLayout->addWidget(pCBkey7, 0, 1, 1, 1);

        pCBkey6 = new QCheckBox(Tab1Devcontrol);
        pCBkey6->setObjectName(QString::fromUtf8("pCBkey6"));

        gridLayout->addWidget(pCBkey6, 0, 2, 1, 1);


        horizontalLayout_4->addLayout(gridLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pLcdnumberKey = new QLCDNumber(Tab1Devcontrol);
        pLcdnumberKey->setObjectName(QString::fromUtf8("pLcdnumberKey"));
        pLcdnumberKey->setDigitCount(2);
        pLcdnumberKey->setMode(QLCDNumber::Hex);

        verticalLayout->addWidget(pLcdnumberKey);


        horizontalLayout_4->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout_4);

        verticalLayout_2->setStretch(0, 1);
        verticalLayout_2->setStretch(1, 4);
        verticalLayout_2->setStretch(2, 1);
        verticalLayout_2->setStretch(3, 4);

        retranslateUi(Tab1Devcontrol);
        QObject::connect(pDialled, SIGNAL(valueChanged(int)), pLcdnumberLed, SLOT(display(int)));

        QMetaObject::connectSlotsByName(Tab1Devcontrol);
    } // setupUi

    void retranslateUi(QWidget *Tab1Devcontrol)
    {
        Tab1Devcontrol->setWindowTitle(QCoreApplication::translate("Tab1Devcontrol", "Form", nullptr));
        pPBtimerStart->setText(QCoreApplication::translate("Tab1Devcontrol", "TimerStart", nullptr));
        pCBtimerValue->setItemText(0, QCoreApplication::translate("Tab1Devcontrol", "100", nullptr));
        pCBtimerValue->setItemText(1, QCoreApplication::translate("Tab1Devcontrol", "200", nullptr));
        pCBtimerValue->setItemText(2, QCoreApplication::translate("Tab1Devcontrol", "500", nullptr));
        pCBtimerValue->setItemText(3, QCoreApplication::translate("Tab1Devcontrol", "1000", nullptr));
        pCBtimerValue->setItemText(4, QCoreApplication::translate("Tab1Devcontrol", "2000", nullptr));

        pPBappQuit->setText(QCoreApplication::translate("Tab1Devcontrol", "Quit", nullptr));
        pCBkey2->setText(QCoreApplication::translate("Tab1Devcontrol", "2", nullptr));
        pCBkey8->setText(QCoreApplication::translate("Tab1Devcontrol", "8", nullptr));
        pCBkey4->setText(QCoreApplication::translate("Tab1Devcontrol", "4", nullptr));
        pCBkey5->setText(QCoreApplication::translate("Tab1Devcontrol", "5", nullptr));
        pCBkey3->setText(QCoreApplication::translate("Tab1Devcontrol", "3", nullptr));
        pCBkey1->setText(QCoreApplication::translate("Tab1Devcontrol", "1", nullptr));
        pCBkey7->setText(QCoreApplication::translate("Tab1Devcontrol", "7", nullptr));
        pCBkey6->setText(QCoreApplication::translate("Tab1Devcontrol", "6", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Tab1Devcontrol: public Ui_Tab1Devcontrol {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TAB1DEVCONTROL_H
