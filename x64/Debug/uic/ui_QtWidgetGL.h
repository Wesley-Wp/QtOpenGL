/********************************************************************************
** Form generated from reading UI file 'QtWidgetGL.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTWIDGETGL_H
#define UI_QTWIDGETGL_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include <wpopenglwidget.h>

QT_BEGIN_NAMESPACE

class Ui_QtWidgetGLClass
{
public:
    QAction *actionDrawRectangle;
    QAction *actionClear;
    QAction *actionWrieframe;
    QAction *atColorChange;
    QAction *atDrawTriangle;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    WPOpenGLWidget *openGLWidget;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QMenu *menu_4;
    QMenu *menu_5;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtWidgetGLClass)
    {
        if (QtWidgetGLClass->objectName().isEmpty())
            QtWidgetGLClass->setObjectName(QString::fromUtf8("QtWidgetGLClass"));
        QtWidgetGLClass->resize(720, 582);
        QIcon icon;
        icon.addFile(QString::fromUtf8("user.png"), QSize(), QIcon::Normal, QIcon::Off);
        QtWidgetGLClass->setWindowIcon(icon);
        QtWidgetGLClass->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background-color:rgb(68,68,68)color:\n"
"	rgb(255,255,255);\n"
"	font: 10pt\"\345\271\274\345\234\206\"\n"
"}\n"
""));
        QtWidgetGLClass->setIconSize(QSize(72, 72));
        actionDrawRectangle = new QAction(QtWidgetGLClass);
        actionDrawRectangle->setObjectName(QString::fromUtf8("actionDrawRectangle"));
        actionClear = new QAction(QtWidgetGLClass);
        actionClear->setObjectName(QString::fromUtf8("actionClear"));
        actionWrieframe = new QAction(QtWidgetGLClass);
        actionWrieframe->setObjectName(QString::fromUtf8("actionWrieframe"));
        actionWrieframe->setCheckable(true);
        atColorChange = new QAction(QtWidgetGLClass);
        atColorChange->setObjectName(QString::fromUtf8("atColorChange"));
        atColorChange->setCheckable(true);
        atDrawTriangle = new QAction(QtWidgetGLClass);
        atDrawTriangle->setObjectName(QString::fromUtf8("atDrawTriangle"));
        centralWidget = new QWidget(QtWidgetGLClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        openGLWidget = new WPOpenGLWidget(centralWidget);
        openGLWidget->setObjectName(QString::fromUtf8("openGLWidget"));
        openGLWidget->setEnabled(true);
        sizePolicy.setHeightForWidth(openGLWidget->sizePolicy().hasHeightForWidth());
        openGLWidget->setSizePolicy(sizePolicy);
        openGLWidget->setLayoutDirection(Qt::LeftToRight);
        openGLWidget->setAutoFillBackground(false);

        horizontalLayout->addWidget(openGLWidget);

        QtWidgetGLClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QtWidgetGLClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 720, 23));
        menuBar->setStyleSheet(QString::fromUtf8("QMenuBar{\n"
"	background-color:rgb(200,200, 200);\n"
"	color:rgb(60, 60, 60);\n"
"}"));
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        menu_3 = new QMenu(menuBar);
        menu_3->setObjectName(QString::fromUtf8("menu_3"));
        menu_4 = new QMenu(menuBar);
        menu_4->setObjectName(QString::fromUtf8("menu_4"));
        menu_5 = new QMenu(menuBar);
        menu_5->setObjectName(QString::fromUtf8("menu_5"));
        QtWidgetGLClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QtWidgetGLClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        QtWidgetGLClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QtWidgetGLClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        QtWidgetGLClass->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menuBar->addAction(menu_3->menuAction());
        menuBar->addAction(menu_4->menuAction());
        menuBar->addAction(menu_5->menuAction());
        mainToolBar->addAction(atDrawTriangle);
        mainToolBar->addAction(actionDrawRectangle);
        mainToolBar->addAction(actionClear);
        mainToolBar->addAction(actionWrieframe);
        mainToolBar->addAction(atColorChange);

        retranslateUi(QtWidgetGLClass);

        QMetaObject::connectSlotsByName(QtWidgetGLClass);
    } // setupUi

    void retranslateUi(QMainWindow *QtWidgetGLClass)
    {
        QtWidgetGLClass->setWindowTitle(QCoreApplication::translate("QtWidgetGLClass", "QtWidgetGL", nullptr));
        actionDrawRectangle->setText(QCoreApplication::translate("QtWidgetGLClass", "\347\224\273\347\237\251\345\275\242", nullptr));
        actionClear->setText(QCoreApplication::translate("QtWidgetGLClass", "\346\270\205\347\251\272\345\261\217\345\271\225", nullptr));
        actionWrieframe->setText(QCoreApplication::translate("QtWidgetGLClass", "\347\272\277\346\241\206\346\250\241\345\274\217", nullptr));
        atColorChange->setText(QCoreApplication::translate("QtWidgetGLClass", "\351\242\234\350\211\262\345\212\250\346\200\201\345\217\230\345\214\226", nullptr));
        atDrawTriangle->setText(QCoreApplication::translate("QtWidgetGLClass", "\344\270\211\350\247\222\345\275\242", nullptr));
        menu->setTitle(QCoreApplication::translate("QtWidgetGLClass", "\346\226\207\344\273\266", nullptr));
        menu_2->setTitle(QCoreApplication::translate("QtWidgetGLClass", "\346\237\245\347\234\213", nullptr));
        menu_3->setTitle(QCoreApplication::translate("QtWidgetGLClass", "\350\256\276\347\275\256", nullptr));
        menu_4->setTitle(QCoreApplication::translate("QtWidgetGLClass", "\345\270\256\345\212\251", nullptr));
        menu_5->setTitle(QCoreApplication::translate("QtWidgetGLClass", "\345\205\263\344\272\216", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtWidgetGLClass: public Ui_QtWidgetGLClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTWIDGETGL_H
