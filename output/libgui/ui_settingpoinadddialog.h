/********************************************************************************
** Form generated from reading UI file 'settingpoinadddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGPOINADDDIALOG_H
#define UI_SETTINGPOINADDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SettingPoinAddDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_2;
    QDoubleSpinBox *doubleTotal;
    QSpinBox *spinPoin;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushCancel;
    QPushButton *pushSave;

    void setupUi(QDialog *SettingPoinAddDialog)
    {
        if (SettingPoinAddDialog->objectName().isEmpty())
            SettingPoinAddDialog->setObjectName(QStringLiteral("SettingPoinAddDialog"));
        SettingPoinAddDialog->resize(331, 118);
        verticalLayout = new QVBoxLayout(SettingPoinAddDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label = new QLabel(SettingPoinAddDialog);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        label_2 = new QLabel(SettingPoinAddDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        doubleTotal = new QDoubleSpinBox(SettingPoinAddDialog);
        doubleTotal->setObjectName(QStringLiteral("doubleTotal"));
        doubleTotal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        doubleTotal->setMaximum(1e+08);

        formLayout->setWidget(0, QFormLayout::FieldRole, doubleTotal);

        spinPoin = new QSpinBox(SettingPoinAddDialog);
        spinPoin->setObjectName(QStringLiteral("spinPoin"));
        spinPoin->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinPoin->setMaximum(1000000);

        formLayout->setWidget(1, QFormLayout::FieldRole, spinPoin);


        verticalLayout->addLayout(formLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushCancel = new QPushButton(SettingPoinAddDialog);
        pushCancel->setObjectName(QStringLiteral("pushCancel"));
        pushCancel->setAutoDefault(false);

        horizontalLayout->addWidget(pushCancel);

        pushSave = new QPushButton(SettingPoinAddDialog);
        pushSave->setObjectName(QStringLiteral("pushSave"));
        pushSave->setAutoDefault(true);

        horizontalLayout->addWidget(pushSave);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(SettingPoinAddDialog);
        QObject::connect(pushCancel, SIGNAL(clicked()), SettingPoinAddDialog, SLOT(close()));

        pushSave->setDefault(true);


        QMetaObject::connectSlotsByName(SettingPoinAddDialog);
    } // setupUi

    void retranslateUi(QDialog *SettingPoinAddDialog)
    {
        SettingPoinAddDialog->setWindowTitle(QApplication::translate("SettingPoinAddDialog", "Dialog", 0));
        label->setText(QApplication::translate("SettingPoinAddDialog", "Total Shopping", 0));
        label_2->setText(QApplication::translate("SettingPoinAddDialog", "Poin will get", 0));
        pushCancel->setText(QApplication::translate("SettingPoinAddDialog", "Cancel", 0));
        pushSave->setText(QApplication::translate("SettingPoinAddDialog", "Save", 0));
    } // retranslateUi

};

namespace Ui {
    class SettingPoinAddDialog: public Ui_SettingPoinAddDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGPOINADDDIALOG_H
