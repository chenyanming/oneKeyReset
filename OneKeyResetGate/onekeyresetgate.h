#ifndef ONEKEYRESETGATE_H
#define ONEKEYRESETGATE_H

#include <QtWidgets/QMainWindow>
#include "ui_onekeyresetgate.h"

class OneKeyResetGate : public QMainWindow
{
	Q_OBJECT

public:
	OneKeyResetGate(QWidget *parent = 0);
	~OneKeyResetGate();
public slots:
	void runInOneGo();

private:
	Ui::OneKeyResetGateClass ui;
};

#endif // ONEKEYRESETGATE_H
