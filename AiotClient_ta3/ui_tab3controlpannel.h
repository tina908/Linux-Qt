/********************************************************************************
** Form generated from reading UI file 'tab3controlpannel.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TAB3CONTROLPANNEL_H
#define UI_TAB3CONTROLPANNEL_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Tab3ControlPannel
{
public:
    QFormLayout *formLayout_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QPushButton *pPBPlug;
    QPushButton *pPBLamp;
    QFormLayout *formLayout;
    QLabel *label;

    void setupUi(QWidget *Tab3ControlPannel)
    {
        if (Tab3ControlPannel->objectName().isEmpty())
            Tab3ControlPannel->setObjectName(QString::fromUtf8("Tab3ControlPannel"));
        Tab3ControlPannel->resize(386, 345);
        formLayout_2 = new QFormLayout(Tab3ControlPannel);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        scrollArea = new QScrollArea(Tab3ControlPannel);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 547, 344));
        pPBPlug = new QPushButton(scrollAreaWidgetContents);
        pPBPlug->setObjectName(QString::fromUtf8("pPBPlug"));
        pPBPlug->setGeometry(QRect(210, 200, 71, 71));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/Image/plug_off.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QString::fromUtf8(":/images/Image/plug_on.png"), QSize(), QIcon::Normal, QIcon::On);
        pPBPlug->setIcon(icon);
        pPBPlug->setIconSize(QSize(70, 70));
        pPBPlug->setCheckable(true);
        pPBLamp = new QPushButton(scrollAreaWidgetContents);
        pPBLamp->setObjectName(QString::fromUtf8("pPBLamp"));
        pPBLamp->setGeometry(QRect(80, 70, 71, 71));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/Image/light_off.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon1.addFile(QString::fromUtf8(":/images/Image/light_on.png"), QSize(), QIcon::Normal, QIcon::On);
        pPBLamp->setIcon(icon1);
        pPBLamp->setIconSize(QSize(70, 70));
        pPBLamp->setCheckable(true);
        formLayout = new QFormLayout(scrollAreaWidgetContents);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QString::fromUtf8("label"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/Image/room1.png")));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        scrollArea->setWidget(scrollAreaWidgetContents);
        label->raise();
        pPBLamp->raise();
        pPBPlug->raise();

        formLayout_2->setWidget(0, QFormLayout::SpanningRole, scrollArea);


        retranslateUi(Tab3ControlPannel);

        QMetaObject::connectSlotsByName(Tab3ControlPannel);
    } // setupUi

    void retranslateUi(QWidget *Tab3ControlPannel)
    {
        Tab3ControlPannel->setWindowTitle(QCoreApplication::translate("Tab3ControlPannel", "Form", nullptr));
        pPBPlug->setText(QString());
        pPBLamp->setText(QString());
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Tab3ControlPannel: public Ui_Tab3ControlPannel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TAB3CONTROLPANNEL_H
