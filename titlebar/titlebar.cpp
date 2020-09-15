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
	// ��ʼ��������;
	initTitleBar();
}

void titlebar::initTitleBar()
{
	// ���ñ����������Ч�������Բ�����;
	//m_titleBar->setTitleRoll();

	m_titleBar->setTitleIcon(":/Resources/titleicon.png");
	m_titleBar->setTitleContent(QStringLiteral("ǰ���е�С��-ǰ��֮·����ǰ��"));
	m_titleBar->setBackgroundColor(255,255 , 255,true);
	m_titleBar->setButtonType(MIN_MAX_BUTTON);
	m_titleBar->setTitleWidth(this->width());
}
