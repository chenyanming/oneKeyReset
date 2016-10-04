#include "onekeyresetgate.h"
#include <QProcess>
#include <QShortcut>
#include <Windows.h>
#include <QDesktopServices> 

OneKeyResetGate::OneKeyResetGate(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	connect(ui.runButton, SIGNAL(clicked(bool)), this, SLOT(runInOneGo()));
	QShortcut *shortcut = new QShortcut(QKeySequence(tr("Ctrl+0", "Run")), this);
	connect(shortcut, SIGNAL(activated()), this, SLOT(runInOneGo()));
}

OneKeyResetGate::~OneKeyResetGate()
{


}

void OneKeyResetGate::runInOneGo()
{
	for (int i = 0; i < ui.listWidget->count(); i++) {
		QString path = ui.listWidget->item(i)->text();
		QDesktopServices::openUrl(path);
		Sleep(2000);
	}

}
