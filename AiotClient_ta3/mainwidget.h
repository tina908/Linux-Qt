#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QWidget>
#include "tab1devcontrol.h"
#include "tab2sockeclient.h"
#include "tab3controlpannel.h"
#include "tab4chartplot.h"
#include "tab5database.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWidget; }
QT_END_NAMESPACE

class MainWidget : public QWidget
{
    Q_OBJECT

public:
    MainWidget(QWidget *parent = nullptr);
    ~MainWidget();

private:
    Ui::MainWidget *ui;
    Tab1DevControl *pTab1DevControl;
    Tab2SockeClient *pTab2SockeClient;
    Tab3ControlPannel *pTab3ControlPannel;
    Tab4ChartPlot *pTab4ChartPlot;
    Tab5Database *pTab5Database;
};
#endif // MAINWIDGET_H
