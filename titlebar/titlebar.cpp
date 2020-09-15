#include "titlebar.h"
#include "mymenu.h"
#include <QMainWindow>
titlebar::titlebar(QWidget *parent)
	: BaseWindow(parent)
{
	/*layout = new QVBoxLayout(this);
	layout->setGeometry(QRect(0, 30, 1000, 36));
	menuBar = new QMenuBar(this);
	menuBar->setStyleSheet("background:#00bfff;font-size:15px;color:#ffffff;");
	menuBar->setGeometry(QRect(0, 0, 400, 36));
	QMenu *menu = menuBar->addMenu(tr("File"));
	actionNew = menu->addAction(tr("New"));
	actionNew->setShortcut(QKeySequence(Qt::CTRL + Qt::Key_N));
	layout->setMenuBar(menuBar);
	setLayout(layout);*/
	// 初始化标题栏;
	initTitleBar();
}

void titlebar::initTitleBar()
{
	// 设置标题栏跑马灯效果，可以不设置;
	//m_titleBar->setTitleRoll();

	m_titleBar->setTitleIcon(":/Resources/titleicon.png");
	m_titleBar->setTitleContent(QStringLiteral("前行中的小猪-前行之路还需前行"));
	m_titleBar->setBackgroundColor(255,255 , 255,true);
	m_titleBar->setButtonType(MIN_MAX_BUTTON);
	m_titleBar->setTitleWidth(this->width());
}
