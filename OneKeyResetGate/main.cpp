#include "onekeyresetgate.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	OneKeyResetGate w;
	w.show();
	return a.exec();
}
