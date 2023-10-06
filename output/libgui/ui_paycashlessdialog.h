/********************************************************************************
** Form generated from reading UI file 'paycashlessdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAYCASHLESSDIALOG_H
#define UI_PAYCASHLESSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_PayCashlessDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QComboBox *comboBank;
    QComboBox *comboType;
    QLineEdit *lineCardNumber;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *labelSubtotal;
    QLabel *labelAdditional;
    QLabel *labelTotal;
    QFrame *line;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushCancel;
    QPushButton *pushSave;

    void setupUi(QDialog *PayCashlessDialog)
    {
        if (PayCashlessDialog->objectName().isEmpty())
            PayCashlessDialog->setObjectName(QStringLiteral("PayCashlessDialog"));
        PayCashlessDialog->resize(432, 268);
        PayCashlessDialog->setModal(true);
        verticalLayout = new QVBoxLayout(PayCashlessDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label = new QLabel(PayCashlessDialog);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        label_2 = new QLabel(PayCashlessDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        label_3 = new QLabel(PayCashlessDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        comboBank = new QComboBox(PayCashlessDialog);
        comboBank->setObjectName(QStringLiteral("comboBank"));

        formLayout->setWidget(0, QFormLayout::FieldRole, comboBank);

        comboType = new QComboBox(PayCashlessDialog);
        comboType->setObjectName(QStringLiteral("comboType"));

        formLayout->setWidget(1, QFormLayout::FieldRole, comboType);

        lineCardNumber = new QLineEdit(PayCashlessDialog);
        lineCardNumber->setObjectName(QStringLiteral("lineCardNumber"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineCardNumber);

        label_4 = new QLabel(PayCashlessDialog);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_4);

        label_5 = new QLabel(PayCashlessDialog);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_5);

        label_6 = new QLabel(PayCashlessDialog);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_6);

        labelSubtotal = new QLabel(PayCashlessDialog);
        labelSubtotal->setObjectName(QStringLiteral("labelSubtotal"));
        labelSubtotal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(4, QFormLayout::FieldRole, labelSubtotal);

        labelAdditional = new QLabel(PayCashlessDialog);
        labelAdditional->setObjectName(QStringLiteral("labelAdditional"));
        labelAdditional->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(5, QFormLayout::FieldRole, labelAdditional);

        labelTotal = new QLabel(PayCashlessDialog);
        labelTotal->setObjectName(QStringLiteral("labelTotal"));
        labelTotal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(6, QFormLayout::FieldRole, labelTotal);

        line = new QFrame(PayCashlessDialog);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        formLayout->setWidget(3, QFormLayout::FieldRole, line);


        verticalLayout->addLayout(formLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushCancel = new QPushButton(PayCashlessDialog);
        pushCancel->setObjectName(QStringLiteral("pushCancel"));
        pushCancel->setAutoDefault(false);

        horizontalLayout->addWidget(pushCancel);

        pushSave = new QPushButton(PayCashlessDialog);
        pushSave->setObjectName(QStringLiteral("pushSave"));

        horizontalLayout->addWidget(pushSave);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(PayCashlessDialog);
        QObject::connect(pushCancel, SIGNAL(clicked()), PayCashlessDialog, SLOT(close()));

        pushSave->setDefault(true);


        QMetaObject::connectSlotsByName(PayCashlessDialog);
    } // setupUi

    void retranslateUi(QDialog *PayCashlessDialog)
    {
        PayCashlessDialog->setWindowTitle(QApplication::translate("PayCashlessDialog", "Cashless Payment", 0));
        label->setText(QApplication::translate("PayCashlessDialog", "Bank", 0));
        label_2->setText(QApplication::translate("PayCashlessDialog", "Card Type", 0));
        label_3->setText(QApplication::translate("PayCashlessDialog", "Card Number", 0));
        lineCardNumber->setPlaceholderText(QApplication::translate("PayCashlessDialog", "Card number", 0));
        label_4->setText(QApplication::translate("PayCashlessDialog", "Sub Total", 0));
        label_5->setText(QApplication::translate("PayCashlessDialog", "Additional Charge", 0));
        label_6->setText(QApplication::translate("PayCashlessDialog", "Total", 0));
        labelSubtotal->setText(QApplication::translate("PayCashlessDialog", "TextLabel", 0));
        labelAdditional->setText(QApplication::translate("PayCashlessDialog", "TextLabel", 0));
        labelTotal->setText(QApplication::translate("PayCashlessDialog", "TextLabel", 0));
        pushCancel->setText(QApplication::translate("PayCashlessDialog", "Cancel", 0));
        pushSave->setText(QApplication::translate("PayCashlessDialog", "Save", 0));
    } // retranslateUi

};

namespace Ui {
    class PayCashlessDialog: public Ui_PayCashlessDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAYCASHLESSDIALOG_H
