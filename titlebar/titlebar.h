#pragma once

#include <QtWidgets/QMainWindow>
#include "basewindow.h"
#include <QMenubar>
#include <QVBoxLayout>
class titlebar : public BaseWindow
{
	Q_OBJECT

public:
	titlebar(QWidget *parent = Q_NULLPTR);
	void initTitleBar();
	void createButton();
	void translateLanguage();
private:
	QVBoxLayout * layout;
	QMenuBar* menuBar;
	QAction* actionNew;
	QPushButton *remove_watermarks_button;
	QMenu *remove_menu;
	QAction *remove_selected_action;
	QAction *remove_all_action;
};
