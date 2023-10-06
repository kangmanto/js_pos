/********************************************************************************
** Form generated from reading UI file 'settingdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGDIALOG_H
#define UI_SETTINGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SettingDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QComboBox *comboType;
    QGroupBox *groupMysql;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label_9;
    QComboBox *comboDatabase;
    QGroupBox *groupSqlite;
    QFormLayout *formLayout_4;
    QLabel *label_10;
    QLineEdit *lineSqlitePath;
    QLabel *label_11;
    QLineEdit *lineSqliteName;
    QGroupBox *groupMysql_2;
    QFormLayout *formLayout_5;
    QLabel *label;
    QLineEdit *lineEditHost;
    QLabel *label_2;
    QSpinBox *spinBoxPort;
    QLabel *label_3;
    QLineEdit *lineEditUsername;
    QLabel *label_4;
    QLineEdit *lineEditPassword;
    QLabel *label_5;
    QLineEdit *lineEditDatabase;
    QPushButton *pushCheckMysql;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *groupServer;
    QFormLayout *formLayout_2;
    QLabel *label_6;
    QSpinBox *spinBoxServerPort;
    QGroupBox *groupClient;
    QFormLayout *formLayout_3;
    QLabel *label_7;
    QLabel *label_8;
    QLineEdit *lineEditClientAddress;
    QSpinBox *spinBoxClientPort;
    QPushButton *pushCheckConnection;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushCancel;
    QPushButton *pushSave;

    void setupUi(QDialog *SettingDialog)
    {
        if (SettingDialog->objectName().isEmpty())
            SettingDialog->setObjectName(QStringLiteral("SettingDialog"));
        SettingDialog->resize(814, 515);
        verticalLayout_3 = new QVBoxLayout(SettingDialog);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 0, -1, -1);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(-1, 0, -1, 0);
        groupBox = new QGroupBox(SettingDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        comboType = new QComboBox(groupBox);
        comboType->setObjectName(QStringLiteral("comboType"));

        verticalLayout_2->addWidget(comboType);


        verticalLayout_4->addWidget(groupBox);

        groupMysql = new QGroupBox(SettingDialog);
        groupMysql->setObjectName(QStringLiteral("groupMysql"));
        verticalLayout = new QVBoxLayout(groupMysql);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(-1, -1, -1, 0);
        label_9 = new QLabel(groupMysql);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setText(QStringLiteral("Database"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_9);

        comboDatabase = new QComboBox(groupMysql);
        comboDatabase->setObjectName(QStringLiteral("comboDatabase"));

        formLayout->setWidget(0, QFormLayout::FieldRole, comboDatabase);


        verticalLayout->addLayout(formLayout);

        groupSqlite = new QGroupBox(groupMysql);
        groupSqlite->setObjectName(QStringLiteral("groupSqlite"));
        formLayout_4 = new QFormLayout(groupSqlite);
        formLayout_4->setObjectName(QStringLiteral("formLayout_4"));
        formLayout_4->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_10 = new QLabel(groupSqlite);
        label_10->setObjectName(QStringLiteral("label_10"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_10);

        lineSqlitePath = new QLineEdit(groupSqlite);
        lineSqlitePath->setObjectName(QStringLiteral("lineSqlitePath"));

        formLayout_4->setWidget(0, QFormLayout::FieldRole, lineSqlitePath);

        label_11 = new QLabel(groupSqlite);
        label_11->setObjectName(QStringLiteral("label_11"));

        formLayout_4->setWidget(1, QFormLayout::LabelRole, label_11);

        lineSqliteName = new QLineEdit(groupSqlite);
        lineSqliteName->setObjectName(QStringLiteral("lineSqliteName"));

        formLayout_4->setWidget(1, QFormLayout::FieldRole, lineSqliteName);


        verticalLayout->addWidget(groupSqlite);

        groupMysql_2 = new QGroupBox(groupMysql);
        groupMysql_2->setObjectName(QStringLiteral("groupMysql_2"));
        formLayout_5 = new QFormLayout(groupMysql_2);
        formLayout_5->setObjectName(QStringLiteral("formLayout_5"));
        formLayout_5->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label = new QLabel(groupMysql_2);
        label->setObjectName(QStringLiteral("label"));
        label->setText(QStringLiteral("Host"));

        formLayout_5->setWidget(0, QFormLayout::LabelRole, label);

        lineEditHost = new QLineEdit(groupMysql_2);
        lineEditHost->setObjectName(QStringLiteral("lineEditHost"));
        lineEditHost->setText(QStringLiteral("localhost"));
        lineEditHost->setPlaceholderText(QStringLiteral("Myqsl host"));

        formLayout_5->setWidget(0, QFormLayout::FieldRole, lineEditHost);

        label_2 = new QLabel(groupMysql_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setText(QStringLiteral("Port"));

        formLayout_5->setWidget(1, QFormLayout::LabelRole, label_2);

        spinBoxPort = new QSpinBox(groupMysql_2);
        spinBoxPort->setObjectName(QStringLiteral("spinBoxPort"));
        spinBoxPort->setMinimum(1);
        spinBoxPort->setMaximum(65000);
        spinBoxPort->setValue(3306);

        formLayout_5->setWidget(1, QFormLayout::FieldRole, spinBoxPort);

        label_3 = new QLabel(groupMysql_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setText(QStringLiteral("Username"));

        formLayout_5->setWidget(2, QFormLayout::LabelRole, label_3);

        lineEditUsername = new QLineEdit(groupMysql_2);
        lineEditUsername->setObjectName(QStringLiteral("lineEditUsername"));
        lineEditUsername->setText(QStringLiteral("root"));
        lineEditUsername->setPlaceholderText(QStringLiteral("Mysql username"));

        formLayout_5->setWidget(2, QFormLayout::FieldRole, lineEditUsername);

        label_4 = new QLabel(groupMysql_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setText(QStringLiteral("Password"));

        formLayout_5->setWidget(3, QFormLayout::LabelRole, label_4);

        lineEditPassword = new QLineEdit(groupMysql_2);
        lineEditPassword->setObjectName(QStringLiteral("lineEditPassword"));
        lineEditPassword->setText(QStringLiteral(""));
        lineEditPassword->setEchoMode(QLineEdit::Password);
        lineEditPassword->setPlaceholderText(QStringLiteral("Mysql password"));

        formLayout_5->setWidget(3, QFormLayout::FieldRole, lineEditPassword);

        label_5 = new QLabel(groupMysql_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setText(QStringLiteral("Database"));

        formLayout_5->setWidget(4, QFormLayout::LabelRole, label_5);

        lineEditDatabase = new QLineEdit(groupMysql_2);
        lineEditDatabase->setObjectName(QStringLiteral("lineEditDatabase"));
        lineEditDatabase->setText(QStringLiteral("sultan"));
        lineEditDatabase->setPlaceholderText(QStringLiteral("Mysql database"));

        formLayout_5->setWidget(4, QFormLayout::FieldRole, lineEditDatabase);

        pushCheckMysql = new QPushButton(groupMysql_2);
        pushCheckMysql->setObjectName(QStringLiteral("pushCheckMysql"));
        pushCheckMysql->setAutoDefault(false);

        formLayout_5->setWidget(5, QFormLayout::FieldRole, pushCheckMysql);


        verticalLayout->addWidget(groupMysql_2);


        verticalLayout_4->addWidget(groupMysql);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);


        horizontalLayout_2->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, -1, -1, 20);
        groupServer = new QGroupBox(SettingDialog);
        groupServer->setObjectName(QStringLiteral("groupServer"));
        formLayout_2 = new QFormLayout(groupServer);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setHorizontalSpacing(6);
        label_6 = new QLabel(groupServer);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_6);

        spinBoxServerPort = new QSpinBox(groupServer);
        spinBoxServerPort->setObjectName(QStringLiteral("spinBoxServerPort"));
        spinBoxServerPort->setMinimum(1);
        spinBoxServerPort->setMaximum(65000);
        spinBoxServerPort->setValue(4545);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, spinBoxServerPort);


        verticalLayout_5->addWidget(groupServer);

        groupClient = new QGroupBox(SettingDialog);
        groupClient->setObjectName(QStringLiteral("groupClient"));
        formLayout_3 = new QFormLayout(groupClient);
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        formLayout_3->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_3->setHorizontalSpacing(6);
        label_7 = new QLabel(groupClient);
        label_7->setObjectName(QStringLiteral("label_7"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_7);

        label_8 = new QLabel(groupClient);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setText(QStringLiteral("Port"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_8);

        lineEditClientAddress = new QLineEdit(groupClient);
        lineEditClientAddress->setObjectName(QStringLiteral("lineEditClientAddress"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, lineEditClientAddress);

        spinBoxClientPort = new QSpinBox(groupClient);
        spinBoxClientPort->setObjectName(QStringLiteral("spinBoxClientPort"));
        spinBoxClientPort->setMinimum(1);
        spinBoxClientPort->setMaximum(65000);
        spinBoxClientPort->setValue(4545);

        formLayout_3->setWidget(1, QFormLayout::FieldRole, spinBoxClientPort);

        pushCheckConnection = new QPushButton(groupClient);
        pushCheckConnection->setObjectName(QStringLiteral("pushCheckConnection"));
        pushCheckConnection->setAutoDefault(false);

        formLayout_3->setWidget(2, QFormLayout::FieldRole, pushCheckConnection);


        verticalLayout_5->addWidget(groupClient);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_2);


        horizontalLayout_2->addLayout(verticalLayout_5);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushCancel = new QPushButton(SettingDialog);
        pushCancel->setObjectName(QStringLiteral("pushCancel"));
        pushCancel->setAutoDefault(false);

        horizontalLayout->addWidget(pushCancel);

        pushSave = new QPushButton(SettingDialog);
        pushSave->setObjectName(QStringLiteral("pushSave"));
        pushSave->setAutoDefault(false);

        horizontalLayout->addWidget(pushSave);


        verticalLayout_3->addLayout(horizontalLayout);

        QWidget::setTabOrder(comboType, spinBoxServerPort);
        QWidget::setTabOrder(spinBoxServerPort, lineEditClientAddress);
        QWidget::setTabOrder(lineEditClientAddress, spinBoxClientPort);
        QWidget::setTabOrder(spinBoxClientPort, pushCheckConnection);
        QWidget::setTabOrder(pushCheckConnection, pushSave);
        QWidget::setTabOrder(pushSave, pushCancel);

        retranslateUi(SettingDialog);

        QMetaObject::connectSlotsByName(SettingDialog);
    } // setupUi

    void retranslateUi(QDialog *SettingDialog)
    {
        SettingDialog->setWindowTitle(QApplication::translate("SettingDialog", "Application Setting", 0));
        groupBox->setTitle(QApplication::translate("SettingDialog", "Type", 0));
        groupMysql->setTitle(QApplication::translate("SettingDialog", "Database", 0));
        groupSqlite->setTitle(QApplication::translate("SettingDialog", "SQLite", 0));
        label_10->setText(QApplication::translate("SettingDialog", "DB Path", 0));
        lineSqlitePath->setPlaceholderText(QApplication::translate("SettingDialog", "Folder to save the database", 0));
        label_11->setText(QApplication::translate("SettingDialog", "DB Name", 0));
        lineSqliteName->setPlaceholderText(QApplication::translate("SettingDialog", "Database name", 0));
        groupMysql_2->setTitle(QApplication::translate("SettingDialog", "MySQL", 0));
        lineEditHost->setInputMask(QString());
        lineEditUsername->setInputMask(QString());
        lineEditDatabase->setInputMask(QString());
        pushCheckMysql->setText(QApplication::translate("SettingDialog", "Check Mysql", 0));
        groupServer->setTitle(QApplication::translate("SettingDialog", "Server Setting", 0));
        label_6->setText(QApplication::translate("SettingDialog", "Port", 0));
        groupClient->setTitle(QApplication::translate("SettingDialog", "Client Setting", 0));
        label_7->setText(QApplication::translate("SettingDialog", "Address", 0));
        lineEditClientAddress->setPlaceholderText(QApplication::translate("SettingDialog", "Server address", 0));
        pushCheckConnection->setText(QApplication::translate("SettingDialog", "Check Connection", 0));
        pushCancel->setText(QApplication::translate("SettingDialog", "Cancel", 0));
        pushSave->setText(QApplication::translate("SettingDialog", "Save", 0));
    } // retranslateUi

};

namespace Ui {
    class SettingDialog: public Ui_SettingDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGDIALOG_H
