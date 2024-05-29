/********************************************************************************
** Form generated from reading UI file 'mainwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWIDGET_H
#define UI_MAINWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWidget
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *pTabwidget;
    QWidget *pTab1;
    QWidget *tab_2;

    void setupUi(QWidget *MainWidget)
    {
        if (MainWidget->objectName().isEmpty())
            MainWidget->setObjectName(QString::fromUtf8("MainWidget"));
        MainWidget->resize(505, 376);
        verticalLayout = new QVBoxLayout(MainWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pTabwidget = new QTabWidget(MainWidget);
        pTabwidget->setObjectName(QString::fromUtf8("pTabwidget"));
        pTab1 = new QWidget();
        pTab1->setObjectName(QString::fromUtf8("pTab1"));
        pTabwidget->addTab(pTab1, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        pTabwidget->addTab(tab_2, QString());

        verticalLayout->addWidget(pTabwidget);


        retranslateUi(MainWidget);

        QMetaObject::connectSlotsByName(MainWidget);
    } // setupUi

    void retranslateUi(QWidget *MainWidget)
    {
        MainWidget->setWindowTitle(QCoreApplication::translate("MainWidget", "MainWidget", nullptr));
        pTabwidget->setTabText(pTabwidget->indexOf(pTab1), QCoreApplication::translate("MainWidget", "Tab 1", nullptr));
        pTabwidget->setTabText(pTabwidget->indexOf(tab_2), QCoreApplication::translate("MainWidget", "Tab 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWidget: public Ui_MainWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWIDGET_H
