#include "titlebar.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	titlebar w;
	w.resize(1000, 600);
	w.show();
	return a.exec();
}
