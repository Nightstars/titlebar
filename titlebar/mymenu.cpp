#include "mymenu.h"



mymenu::mymenu()
{
	layout = new QHBoxLayout(this);
	menuBar = new QMenuBar(this);
	menuBar->setGeometry(QRect(0, 0, 400, 24));
	QMenu* menu = menuBar->addMenu(tr("&File"));
	actionNew = menu->addAction(tr("&New"));
	actionNew->setShortcut(QKeySequence(Qt::CTRL + Qt::Key_N));

	layout->setMenuBar(menuBar);
	setLayout(layout);
}


mymenu::~mymenu()
{
}
