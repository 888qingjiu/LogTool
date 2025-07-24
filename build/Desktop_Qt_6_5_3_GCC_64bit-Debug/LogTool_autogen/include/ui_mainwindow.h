/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *lb_loginOrNot;
    QLabel *lb_versionInfo;
    QLabel *lb_SoC;
    QLabel *lb_MCU;
    QLabel *lb_SDK;
    QTreeView *treeView_logList;
    QLabel *lb_LabelState;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *btn_connect;
    QSpacerItem *verticalSpacer;
    QPushButton *btn_copyLogs;
    QSpacerItem *verticalSpacer_2;
    QPushButton *btn_uploadLogs;
    QSpacerItem *verticalSpacer_3;
    QPushButton *btn_packFlash;
    QSpacerItem *verticalSpacer_4;
    QPushButton *btn_packDownload;
    QMenuBar *menubar;
    QMenu *menuLogTool;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(773, 526);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        lb_loginOrNot = new QLabel(centralwidget);
        lb_loginOrNot->setObjectName("lb_loginOrNot");
        lb_loginOrNot->setGeometry(QRect(550, 10, 71, 17));
        lb_versionInfo = new QLabel(centralwidget);
        lb_versionInfo->setObjectName("lb_versionInfo");
        lb_versionInfo->setGeometry(QRect(20, 450, 67, 17));
        lb_SoC = new QLabel(centralwidget);
        lb_SoC->setObjectName("lb_SoC");
        lb_SoC->setGeometry(QRect(210, 450, 67, 17));
        lb_MCU = new QLabel(centralwidget);
        lb_MCU->setObjectName("lb_MCU");
        lb_MCU->setGeometry(QRect(450, 450, 67, 17));
        lb_SDK = new QLabel(centralwidget);
        lb_SDK->setObjectName("lb_SDK");
        lb_SDK->setGeometry(QRect(580, 450, 67, 17));
        treeView_logList = new QTreeView(centralwidget);
        treeView_logList->setObjectName("treeView_logList");
        treeView_logList->setGeometry(QRect(140, 40, 571, 371));
        lb_LabelState = new QLabel(centralwidget);
        lb_LabelState->setObjectName("lb_LabelState");
        lb_LabelState->setGeometry(QRect(630, 10, 67, 17));
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(20, 40, 105, 371));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        btn_connect = new QPushButton(widget);
        btn_connect->setObjectName("btn_connect");
        btn_connect->setMinimumSize(QSize(100, 50));

        verticalLayout->addWidget(btn_connect);

        verticalSpacer = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        btn_copyLogs = new QPushButton(widget);
        btn_copyLogs->setObjectName("btn_copyLogs");
        btn_copyLogs->setMinimumSize(QSize(100, 50));

        verticalLayout->addWidget(btn_copyLogs);

        verticalSpacer_2 = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        btn_uploadLogs = new QPushButton(widget);
        btn_uploadLogs->setObjectName("btn_uploadLogs");
        btn_uploadLogs->setMinimumSize(QSize(100, 50));

        verticalLayout->addWidget(btn_uploadLogs);

        verticalSpacer_3 = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        btn_packFlash = new QPushButton(widget);
        btn_packFlash->setObjectName("btn_packFlash");
        btn_packFlash->setMinimumSize(QSize(100, 50));

        verticalLayout->addWidget(btn_packFlash);

        verticalSpacer_4 = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        btn_packDownload = new QPushButton(widget);
        btn_packDownload->setObjectName("btn_packDownload");
        btn_packDownload->setMinimumSize(QSize(100, 50));

        verticalLayout->addWidget(btn_packDownload);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 773, 27));
        menuLogTool = new QMenu(menubar);
        menuLogTool->setObjectName("menuLogTool");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuLogTool->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        lb_loginOrNot->setText(QCoreApplication::translate("MainWindow", "XPU\345\234\250\347\272\277\357\274\232", nullptr));
        lb_versionInfo->setText(QCoreApplication::translate("MainWindow", "\347\211\210\346\234\254\344\277\241\346\201\257\357\274\232", nullptr));
        lb_SoC->setText(QCoreApplication::translate("MainWindow", "SoC\357\274\232", nullptr));
        lb_MCU->setText(QCoreApplication::translate("MainWindow", "MCU\357\274\232", nullptr));
        lb_SDK->setText(QCoreApplication::translate("MainWindow", "SDK\357\274\232", nullptr));
        lb_LabelState->setText(QString());
        btn_connect->setText(QCoreApplication::translate("MainWindow", "\350\277\236\346\216\245XPU", nullptr));
        btn_copyLogs->setText(QCoreApplication::translate("MainWindow", "XPU\346\227\245\345\277\227\346\213\267\350\264\235", nullptr));
        btn_uploadLogs->setText(QCoreApplication::translate("MainWindow", "\346\227\245\345\277\227\344\270\212\344\274\240", nullptr));
        btn_packFlash->setText(QCoreApplication::translate("MainWindow", "\347\211\210\346\234\254\345\214\205\345\210\267\345\206\231", nullptr));
        btn_packDownload->setText(QCoreApplication::translate("MainWindow", "\347\211\210\346\234\254\345\214\205\344\270\213\350\275\275", nullptr));
        menuLogTool->setTitle(QCoreApplication::translate("MainWindow", "LogTool", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
