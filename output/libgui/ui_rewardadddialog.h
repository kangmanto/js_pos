/********************************************************************************
** Form generated from reading UI file 'rewardadddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REWARDADDDIALOG_H
#define UI_REWARDADDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_RewardAddDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_2;
    QSpinBox *spinCount;
    QLineEdit *lineDetail;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushCancel;
    QPushButton *pushSave;

    void setupUi(QDialog *RewardAddDialog)
    {
        if (RewardAddDialog->objectName().isEmpty())
            RewardAddDialog->setObjectName(QStringLiteral("RewardAddDialog"));
        RewardAddDialog->resize(307, 107);
        RewardAddDialog->setModal(true);
        verticalLayout = new QVBoxLayout(RewardAddDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label = new QLabel(RewardAddDialog);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        label_2 = new QLabel(RewardAddDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        spinCount = new QSpinBox(RewardAddDialog);
        spinCount->setObjectName(QStringLiteral("spinCount"));
        spinCount->setMaximum(10000000);

        formLayout->setWidget(0, QFormLayout::FieldRole, spinCount);

        lineDetail = new QLineEdit(RewardAddDialog);
        lineDetail->setObjectName(QStringLiteral("lineDetail"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineDetail);


        verticalLayout->addLayout(formLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushCancel = new QPushButton(RewardAddDialog);
        pushCancel->setObjectName(QStringLiteral("pushCancel"));
        pushCancel->setAutoDefault(false);

        horizontalLayout->addWidget(pushCancel);

        pushSave = new QPushButton(RewardAddDialog);
        pushSave->setObjectName(QStringLiteral("pushSave"));

        horizontalLayout->addWidget(pushSave);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(RewardAddDialog);
        QObject::connect(pushCancel, SIGNAL(clicked()), RewardAddDialog, SLOT(close()));

        pushSave->setDefault(true);


        QMetaObject::connectSlotsByName(RewardAddDialog);
    } // setupUi

    void retranslateUi(QDialog *RewardAddDialog)
    {
        RewardAddDialog->setWindowTitle(QApplication::translate("RewardAddDialog", "Dialog", 0));
        label->setText(QApplication::translate("RewardAddDialog", "Count", 0));
        label_2->setText(QApplication::translate("RewardAddDialog", "Detail", 0));
        lineDetail->setPlaceholderText(QApplication::translate("RewardAddDialog", "Detail, ex : Doll exchange", 0));
        pushCancel->setText(QApplication::translate("RewardAddDialog", "Cancel", 0));
        pushSave->setText(QApplication::translate("RewardAddDialog", "Save", 0));
    } // retranslateUi

};

namespace Ui {
    class RewardAddDialog: public Ui_RewardAddDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REWARDADDDIALOG_H
