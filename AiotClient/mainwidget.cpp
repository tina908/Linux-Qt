#include "mainwidget.h"
#include "ui_mainwidget.h"

MainWidget::MainWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MainWidget)
{
    ui->setupUi(this);
    pTab1Devcontrol = new Tab1Devcontrol(ui->pTab1);
    ui->pTab1->setLayout(pTab1Devcontrol->layout());
}

MainWidget::~MainWidget()
{
    delete ui;
}

