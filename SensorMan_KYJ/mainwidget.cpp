#include "mainwidget.h"
#include "ui_mainwidget.h"

MainWidget::MainWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MainWidget)
{
    ui->setupUi(this);

    pTab2SockeClient = new Tab2SockeClient(ui->pTab2);
    ui->pTab2->setLayout(pTab2SockeClient->layout());

    pTab4ChartPlot =new Tab4ChartPlot(ui->pTab4);
    ui->pTab4->setLayout(pTab4ChartPlot->layout());

    pTab5Database =new Tab5Database(ui->pTab5);
    ui->pTab5->setLayout(pTab5Database->layout());

    ui->pTabWidget->setCurrentIndex(1);
    connect(pTab2SockeClient,SIGNAL(tab4RecvDataSig(QString)),pTab4ChartPlot,SLOT(Tab4RecvDataSlot(QString)));
    connect(pTab2SockeClient,SIGNAL(tab5RecvDataSig(QString)),pTab5Database,SLOT(Tab5RecvDataSlot(QString)));
}

MainWidget::~MainWidget()
{
    delete ui;
}

