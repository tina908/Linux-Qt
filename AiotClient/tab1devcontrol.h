#ifndef TAB1DEVCONTROL_H
#define TAB1DEVCONTROL_H

#include <QWidget>
#include "keyled.h"
namespace Ui {
class Tab1Devcontrol;
}

class Tab1Devcontrol : public QWidget
{
    Q_OBJECT

public:
    explicit Tab1Devcontrol(QWidget *parent = nullptr);
    ~Tab1Devcontrol();

private:
    Ui::Tab1Devcontrol *ui;
    KeyLed *pKeyLed;
};

#endif // TAB1DEVCONTROL_H
