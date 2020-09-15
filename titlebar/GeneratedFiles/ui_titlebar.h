/********************************************************************************
** Form generated from reading UI file 'titlebar.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TITLEBAR_H
#define UI_TITLEBAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_titlebarClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *titlebarClass)
    {
        if (titlebarClass->objectName().isEmpty())
            titlebarClass->setObjectName(QStringLiteral("titlebarClass"));
        titlebarClass->resize(600, 400);
        menuBar = new QMenuBar(titlebarClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        titlebarClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(titlebarClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        titlebarClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(titlebarClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        titlebarClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(titlebarClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        titlebarClass->setStatusBar(statusBar);

        retranslateUi(titlebarClass);

        QMetaObject::connectSlotsByName(titlebarClass);
    } // setupUi

    void retranslateUi(QMainWindow *titlebarClass)
    {
        titlebarClass->setWindowTitle(QApplication::translate("titlebarClass", "titlebar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class titlebarClass: public Ui_titlebarClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TITLEBAR_H
