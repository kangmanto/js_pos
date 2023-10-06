/********************************************************************************
** Form generated from reading UI file 'addpoindialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDPOINDIALOG_H
#define UI_ADDPOINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AddPoinDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *labelNumber;
    QLabel *label_2;
    QLabel *labelReward;
    QLabel *label_3;
    QComboBox *comboType;
    QLabel *label_4;
    QComboBox *comboExchange;
    QLabel *label_5;
    QPlainTextEdit *plainDetail;
    QLabel *label_6;
    QSpinBox *spinReward;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushCancel;
    QPushButton *pushSave;

    void setupUi(QDialog *AddPoinDialog)
    {
        if (AddPoinDialog->objectName().isEmpty())
            AddPoinDialog->setObjectName(QStringLiteral("AddPoinDialog"));
        AddPoinDialog->resize(436, 280);
        AddPoinDialog->setModal(true);
        verticalLayout = new QVBoxLayout(AddPoinDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label = new QLabel(AddPoinDialog);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        labelNumber = new QLabel(AddPoinDialog);
        labelNumber->setObjectName(QStringLiteral("labelNumber"));

        formLayout->setWidget(0, QFormLayout::FieldRole, labelNumber);

        label_2 = new QLabel(AddPoinDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        labelReward = new QLabel(AddPoinDialog);
        labelReward->setObjectName(QStringLiteral("labelReward"));

        formLayout->setWidget(1, QFormLayout::FieldRole, labelReward);

        label_3 = new QLabel(AddPoinDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        comboType = new QComboBox(AddPoinDialog);
        comboType->setObjectName(QStringLiteral("comboType"));

        formLayout->setWidget(2, QFormLayout::FieldRole, comboType);

        label_4 = new QLabel(AddPoinDialog);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        comboExchange = new QComboBox(AddPoinDialog);
        comboExchange->setObjectName(QStringLiteral("comboExchange"));

        formLayout->setWidget(3, QFormLayout::FieldRole, comboExchange);

        label_5 = new QLabel(AddPoinDialog);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_5);

        plainDetail = new QPlainTextEdit(AddPoinDialog);
        plainDetail->setObjectName(QStringLiteral("plainDetail"));
        plainDetail->setMaximumSize(QSize(16777215, 75));

        formLayout->setWidget(5, QFormLayout::FieldRole, plainDetail);

        label_6 = new QLabel(AddPoinDialog);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_6);

        spinReward = new QSpinBox(AddPoinDialog);
        spinReward->setObjectName(QStringLiteral("spinReward"));
        spinReward->setMinimum(-1000000);
        spinReward->setMaximum(1000000);

        formLayout->setWidget(4, QFormLayout::FieldRole, spinReward);


        verticalLayout->addLayout(formLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushCancel = new QPushButton(AddPoinDialog);
        pushCancel->setObjectName(QStringLiteral("pushCancel"));
        pushCancel->setAutoDefault(false);

        horizontalLayout->addWidget(pushCancel);

        pushSave = new QPushButton(AddPoinDialog);
        pushSave->setObjectName(QStringLiteral("pushSave"));

        horizontalLayout->addWidget(pushSave);


        verticalLayout->addLayout(horizontalLayout);

        QWidget::setTabOrder(comboType, comboExchange);
        QWidget::setTabOrder(comboExchange, plainDetail);
        QWidget::setTabOrder(plainDetail, pushSave);
        QWidget::setTabOrder(pushSave, pushCancel);

        retranslateUi(AddPoinDialog);
        QObject::connect(pushCancel, SIGNAL(clicked()), AddPoinDialog, SLOT(close()));

        pushSave->setDefault(true);


        QMetaObject::connectSlotsByName(AddPoinDialog);
    } // setupUi

    void retranslateUi(QDialog *AddPoinDialog)
    {
        AddPoinDialog->setWindowTitle(QApplication::translate("AddPoinDialog", "Exchange Reward", 0));
        label->setText(QApplication::translate("AddPoinDialog", "Number", 0));
        labelNumber->setText(QApplication::translate("AddPoinDialog", "TextLabel", 0));
        label_2->setText(QApplication::translate("AddPoinDialog", "Available Rewards", 0));
        labelReward->setText(QApplication::translate("AddPoinDialog", "TextLabel", 0));
        label_3->setText(QApplication::translate("AddPoinDialog", "Type", 0));
        label_4->setText(QApplication::translate("AddPoinDialog", "Exchange", 0));
        label_5->setText(QApplication::translate("AddPoinDialog", "Detail", 0));
        label_6->setText(QApplication::translate("AddPoinDialog", "Reward Count", 0));
        pushCancel->setText(QApplication::translate("AddPoinDialog", "Cancel", 0));
        pushSave->setText(QApplication::translate("AddPoinDialog", "Save", 0));
    } // retranslateUi

};

namespace Ui {
    class AddPoinDialog: public Ui_AddPoinDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDPOINDIALOG_H
