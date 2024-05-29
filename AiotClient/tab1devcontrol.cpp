#include "tab1devcontrol.h"
#include "ui_tab1devcontrol.h"

Tab1Devcontrol::Tab1Devcontrol(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Tab1Devcontrol)
{
    ui->setupUi(this);
    pKeyLed = new KeyLed(this);
    pKeyLed->writeLedData(255);
}

Tab1Devcontrol::~Tab1Devcontrol()
{
    delete ui;
}
