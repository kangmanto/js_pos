/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "tabwidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSetting;
    QAction *actionLogout;
    QAction *action_User;
    QAction *action_Suplier;
    QAction *action_Items;
    QAction *action_Cashier;
    QAction *action_About;
    QAction *actionAbout_Qt;
    QAction *action_Category;
    QAction *actionSales;
    QAction *actionItems;
    QAction *action_Change_Password;
    QAction *actionC_ustomer;
    QAction *action_Machines;
    QAction *action_Reward;
    QAction *action_Customer_List;
    QAction *actionReward_Setting;
    QAction *action_Banks;
    QAction *action_Transaction;
    QAction *action_MOney;
    QAction *actionCheck_Update;
    QAction *actionPurchase;
    QAction *actionPurchaseReturn;
    QAction *actionImport_Export_Database;
    QAction *action_Check_Stock;
    QAction *actionInitial_Stock;
    QAction *actionUnits;
    QAction *actionDate_Setting;
    QAction *action_Reset_Database;
    QAction *action_Stock_Card;
    QAction *actionSold_Return;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    LibGUI::TabWidget *tabWidget;
    QWidget *tab;
    QWidget *tab_2;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuAdministration;
    QMenu *menuInventory;
    QMenu *menuTransaction;
    QMenu *menu_Help;
    QMenu *menuReport;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 600);
        actionSetting = new QAction(MainWindow);
        actionSetting->setObjectName(QStringLiteral("actionSetting"));
        actionLogout = new QAction(MainWindow);
        actionLogout->setObjectName(QStringLiteral("actionLogout"));
        action_User = new QAction(MainWindow);
        action_User->setObjectName(QStringLiteral("action_User"));
        action_Suplier = new QAction(MainWindow);
        action_Suplier->setObjectName(QStringLiteral("action_Suplier"));
        action_Items = new QAction(MainWindow);
        action_Items->setObjectName(QStringLiteral("action_Items"));
        action_Cashier = new QAction(MainWindow);
        action_Cashier->setObjectName(QStringLiteral("action_Cashier"));
        action_About = new QAction(MainWindow);
        action_About->setObjectName(QStringLiteral("action_About"));
        actionAbout_Qt = new QAction(MainWindow);
        actionAbout_Qt->setObjectName(QStringLiteral("actionAbout_Qt"));
        action_Category = new QAction(MainWindow);
        action_Category->setObjectName(QStringLiteral("action_Category"));
        actionSales = new QAction(MainWindow);
        actionSales->setObjectName(QStringLiteral("actionSales"));
        actionItems = new QAction(MainWindow);
        actionItems->setObjectName(QStringLiteral("actionItems"));
        action_Change_Password = new QAction(MainWindow);
        action_Change_Password->setObjectName(QStringLiteral("action_Change_Password"));
        actionC_ustomer = new QAction(MainWindow);
        actionC_ustomer->setObjectName(QStringLiteral("actionC_ustomer"));
        action_Machines = new QAction(MainWindow);
        action_Machines->setObjectName(QStringLiteral("action_Machines"));
        action_Reward = new QAction(MainWindow);
        action_Reward->setObjectName(QStringLiteral("action_Reward"));
        action_Customer_List = new QAction(MainWindow);
        action_Customer_List->setObjectName(QStringLiteral("action_Customer_List"));
        actionReward_Setting = new QAction(MainWindow);
        actionReward_Setting->setObjectName(QStringLiteral("actionReward_Setting"));
        action_Banks = new QAction(MainWindow);
        action_Banks->setObjectName(QStringLiteral("action_Banks"));
        action_Transaction = new QAction(MainWindow);
        action_Transaction->setObjectName(QStringLiteral("action_Transaction"));
        action_MOney = new QAction(MainWindow);
        action_MOney->setObjectName(QStringLiteral("action_MOney"));
        actionCheck_Update = new QAction(MainWindow);
        actionCheck_Update->setObjectName(QStringLiteral("actionCheck_Update"));
        actionPurchase = new QAction(MainWindow);
        actionPurchase->setObjectName(QStringLiteral("actionPurchase"));
        actionPurchaseReturn = new QAction(MainWindow);
        actionPurchaseReturn->setObjectName(QStringLiteral("actionPurchaseReturn"));
        actionImport_Export_Database = new QAction(MainWindow);
        actionImport_Export_Database->setObjectName(QStringLiteral("actionImport_Export_Database"));
        action_Check_Stock = new QAction(MainWindow);
        action_Check_Stock->setObjectName(QStringLiteral("action_Check_Stock"));
        actionInitial_Stock = new QAction(MainWindow);
        actionInitial_Stock->setObjectName(QStringLiteral("actionInitial_Stock"));
        actionUnits = new QAction(MainWindow);
        actionUnits->setObjectName(QStringLiteral("actionUnits"));
        actionDate_Setting = new QAction(MainWindow);
        actionDate_Setting->setObjectName(QStringLiteral("actionDate_Setting"));
        action_Reset_Database = new QAction(MainWindow);
        action_Reset_Database->setObjectName(QStringLiteral("action_Reset_Database"));
        action_Stock_Card = new QAction(MainWindow);
        action_Stock_Card->setObjectName(QStringLiteral("action_Stock_Card"));
        actionSold_Return = new QAction(MainWindow);
        actionSold_Return->setObjectName(QStringLiteral("actionSold_Return"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tabWidget = new LibGUI::TabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setTabPosition(QTabWidget::South);
        tabWidget->setTabsClosable(true);
        tabWidget->setMovable(true);
        tabWidget->setTabBarAutoHide(true);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget->addTab(tab_2, QString());

        verticalLayout->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 19));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuAdministration = new QMenu(menubar);
        menuAdministration->setObjectName(QStringLiteral("menuAdministration"));
        menuInventory = new QMenu(menubar);
        menuInventory->setObjectName(QStringLiteral("menuInventory"));
        menuTransaction = new QMenu(menubar);
        menuTransaction->setObjectName(QStringLiteral("menuTransaction"));
        menu_Help = new QMenu(menubar);
        menu_Help->setObjectName(QStringLiteral("menu_Help"));
        menuReport = new QMenu(menubar);
        menuReport->setObjectName(QStringLiteral("menuReport"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuAdministration->menuAction());
        menubar->addAction(menuInventory->menuAction());
        menubar->addAction(menuTransaction->menuAction());
        menubar->addAction(menuReport->menuAction());
        menubar->addAction(menu_Help->menuAction());
        menuFile->addAction(actionSetting);
        menuFile->addAction(actionDate_Setting);
        menuFile->addSeparator();
        menuFile->addAction(actionImport_Export_Database);
        menuFile->addAction(action_Reset_Database);
        menuFile->addSeparator();
        menuFile->addAction(actionLogout);
        menuAdministration->addAction(action_User);
        menuAdministration->addAction(action_Machines);
        menuAdministration->addSeparator();
        menuAdministration->addAction(action_Change_Password);
        menuInventory->addAction(action_Category);
        menuInventory->addAction(action_Suplier);
        menuInventory->addAction(action_Items);
        menuInventory->addSeparator();
        menuInventory->addAction(action_Customer_List);
        menuInventory->addAction(actionReward_Setting);
        menuInventory->addSeparator();
        menuInventory->addAction(action_Banks);
        menuInventory->addAction(actionUnits);
        menuTransaction->addAction(action_Cashier);
        menuTransaction->addAction(actionSold_Return);
        menuTransaction->addSeparator();
        menuTransaction->addAction(actionPurchase);
        menuTransaction->addAction(actionPurchaseReturn);
        menuTransaction->addSeparator();
        menuTransaction->addAction(actionInitial_Stock);
        menuTransaction->addAction(action_Check_Stock);
        menu_Help->addAction(actionCheck_Update);
        menu_Help->addSeparator();
        menu_Help->addAction(action_About);
        menu_Help->addAction(actionAbout_Qt);
        menuReport->addAction(actionSales);
        menuReport->addAction(actionItems);
        menuReport->addSeparator();
        menuReport->addAction(action_Transaction);
        menuReport->addAction(action_MOney);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Sultan", 0));
        actionSetting->setText(QApplication::translate("MainWindow", "&Setting", 0));
        actionLogout->setText(QApplication::translate("MainWindow", "&Logout", 0));
        action_User->setText(QApplication::translate("MainWindow", "&User", 0));
        action_Suplier->setText(QApplication::translate("MainWindow", "&Suplier", 0));
        action_Items->setText(QApplication::translate("MainWindow", "&Items", 0));
        action_Cashier->setText(QApplication::translate("MainWindow", "&Cashier", 0));
        action_About->setText(QApplication::translate("MainWindow", "&About", 0));
        actionAbout_Qt->setText(QApplication::translate("MainWindow", "About &Qt", 0));
        action_Category->setText(QApplication::translate("MainWindow", "&Category", 0));
        actionSales->setText(QApplication::translate("MainWindow", "&Sales", 0));
        actionItems->setText(QApplication::translate("MainWindow", "&Items", 0));
        action_Change_Password->setText(QApplication::translate("MainWindow", "&Change Password", 0));
        actionC_ustomer->setText(QApplication::translate("MainWindow", "C&ustomer", 0));
        action_Machines->setText(QApplication::translate("MainWindow", "&Machines", 0));
        action_Reward->setText(QApplication::translate("MainWindow", "&Reward", 0));
        action_Customer_List->setText(QApplication::translate("MainWindow", "&Customer List", 0));
        actionReward_Setting->setText(QApplication::translate("MainWindow", "&Reward Setting", 0));
        action_Banks->setText(QApplication::translate("MainWindow", "&Banks", 0));
        action_Transaction->setText(QApplication::translate("MainWindow", "&Transaction", 0));
        action_MOney->setText(QApplication::translate("MainWindow", "&Money", 0));
        actionCheck_Update->setText(QApplication::translate("MainWindow", "&Check Update", 0));
        actionPurchase->setText(QApplication::translate("MainWindow", "&Purchase", 0));
        actionPurchaseReturn->setText(QApplication::translate("MainWindow", "Purchase &Return", 0));
        actionImport_Export_Database->setText(QApplication::translate("MainWindow", "&Import / Export Database", 0));
        action_Check_Stock->setText(QApplication::translate("MainWindow", "Check &Stock", 0));
        actionInitial_Stock->setText(QApplication::translate("MainWindow", "&Initial Stock", 0));
        actionUnits->setText(QApplication::translate("MainWindow", "&Units", 0));
        actionDate_Setting->setText(QApplication::translate("MainWindow", "&Date Setting", 0));
        action_Reset_Database->setText(QApplication::translate("MainWindow", "&Reset Database", 0));
        action_Stock_Card->setText(QApplication::translate("MainWindow", "Stock &Card", 0));
        actionSold_Return->setText(QApplication::translate("MainWindow", "&Sold Return", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Tab 1", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Tab 2", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "&File", 0));
        menuAdministration->setTitle(QApplication::translate("MainWindow", "&Administration", 0));
        menuInventory->setTitle(QApplication::translate("MainWindow", "&Inventory", 0));
        menuTransaction->setTitle(QApplication::translate("MainWindow", "&Transaction", 0));
        menu_Help->setTitle(QApplication::translate("MainWindow", "&Help", 0));
        menuReport->setTitle(QApplication::translate("MainWindow", "&Report", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
