/********************************************************************************
** Form generated from reading UI file 'timirbaev_ernest_mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TIMIRBAEV_ERNEST_MAINWINDOW_H
#define UI_TIMIRBAEV_ERNEST_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Timirbaev_Ernest_MainWindow
{
public:
    QAction *action;
    QAction *action_2;
    QAction *action_3;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *Timirbaev_Ernest_MainWindow)
    {
        if (Timirbaev_Ernest_MainWindow->objectName().isEmpty())
            Timirbaev_Ernest_MainWindow->setObjectName("Timirbaev_Ernest_MainWindow");
        Timirbaev_Ernest_MainWindow->resize(780, 498);
        action = new QAction(Timirbaev_Ernest_MainWindow);
        action->setObjectName("action");
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::DocumentNew));
        action->setIcon(icon);
        action_2 = new QAction(Timirbaev_Ernest_MainWindow);
        action_2->setObjectName("action_2");
        QIcon icon1(QIcon::fromTheme(QIcon::ThemeIcon::DocumentSaveAs));
        action_2->setIcon(icon1);
        action_3 = new QAction(Timirbaev_Ernest_MainWindow);
        action_3->setObjectName("action_3");
        QIcon icon2(QIcon::fromTheme(QIcon::ThemeIcon::EditDelete));
        action_3->setIcon(icon2);
        centralwidget = new QWidget(Timirbaev_Ernest_MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 710, 424));
        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 0, 0, 1, 1);

        Timirbaev_Ernest_MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Timirbaev_Ernest_MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 780, 25));
        menu = new QMenu(menubar);
        menu->setObjectName("menu");
        Timirbaev_Ernest_MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(Timirbaev_Ernest_MainWindow);
        statusbar->setObjectName("statusbar");
        Timirbaev_Ernest_MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(Timirbaev_Ernest_MainWindow);
        toolBar->setObjectName("toolBar");
        Timirbaev_Ernest_MainWindow->addToolBar(Qt::ToolBarArea::LeftToolBarArea, toolBar);

        menubar->addAction(menu->menuAction());
        menu->addAction(action);
        menu->addAction(action_2);
        menu->addAction(action_3);
        toolBar->addAction(action);
        toolBar->addAction(action_2);
        toolBar->addAction(action_3);

        retranslateUi(Timirbaev_Ernest_MainWindow);

        QMetaObject::connectSlotsByName(Timirbaev_Ernest_MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *Timirbaev_Ernest_MainWindow)
    {
        Timirbaev_Ernest_MainWindow->setWindowTitle(QCoreApplication::translate("Timirbaev_Ernest_MainWindow", "Timirbaev_Ernest_MainWindow", nullptr));
        action->setText(QCoreApplication::translate("Timirbaev_Ernest_MainWindow", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214", nullptr));
        action_2->setText(QCoreApplication::translate("Timirbaev_Ernest_MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        action_3->setText(QCoreApplication::translate("Timirbaev_Ernest_MainWindow", "\320\236\321\207\320\270\321\202\321\201\321\202\320\270\321\202\321\214", nullptr));
        menu->setTitle(QCoreApplication::translate("Timirbaev_Ernest_MainWindow", "\320\234\320\265\320\275\321\216", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("Timirbaev_Ernest_MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Timirbaev_Ernest_MainWindow: public Ui_Timirbaev_Ernest_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIMIRBAEV_ERNEST_MAINWINDOW_H
