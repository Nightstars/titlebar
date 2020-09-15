#pragma once
#include <QMenuBar>
#include <QVBoxlayout>
class mymenu : public QWidget
{
	Q_OBJECT
public:
	mymenu();
	~mymenu();
	QHBoxLayout* layout;
	QMenuBar* menuBar;
	QAction* actionNew;
};

