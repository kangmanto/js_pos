/********************************************************************************
** Form generated from reading UI file 'bankadddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BANKADDDIALOG_H
#define UI_BANKADDDIALOG_H

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
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_BankAddDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineName;
    QLineEdit *lineDebit;
    QLineEdit *lineCredit;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushCancel;
    QPushButton *pushSave;

    void setupUi(QDialog *BankAddDialog)
    {
        if (BankAddDialog->objectName().isEmpty())
            BankAddDialog->setObjectName(QStringLiteral("BankAddDialog"));
        BankAddDialog->resize(400, 157);
        BankAddDialog->setModal(true);
        verticalLayout = new QVBoxLayout(BankAddDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label = new QLabel(BankAddDialog);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        label_2 = new QLabel(BankAddDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        label_3 = new QLabel(BankAddDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        lineName = new QLineEdit(BankAddDialog);
        lineName->setObjectName(QStringLiteral("lineName"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineName);

        lineDebit = new QLineEdit(BankAddDialog);
        lineDebit->setObjectName(QStringLiteral("lineDebit"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineDebit);

        lineCredit = new QLineEdit(BankAddDialog);
        lineCredit->setObjectName(QStringLiteral("lineCredit"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineCredit);


        verticalLayout->addLayout(formLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushCancel = new QPushButton(BankAddDialog);
        pushCancel->setObjectName(QStringLiteral("pushCancel"));
        pushCancel->setAutoDefault(false);

        horizontalLayout->addWidget(pushCancel);

        pushSave = new QPushButton(BankAddDialog);
        pushSave->setObjectName(QStringLiteral("pushSave"));

        horizontalLayout->addWidget(pushSave);


        verticalLayout->addLayout(horizontalLayout);

        QWidget::setTabOrder(lineName, lineDebit);
        QWidget::setTabOrder(lineDebit, lineCredit);
        QWidget::setTabOrder(lineCredit, pushSave);
        QWidget::setTabOrder(pushSave, pushCancel);

        retranslateUi(BankAddDialog);
        QObject::connect(pushCancel, SIGNAL(clicked()), BankAddDialog, SLOT(close()));

        pushSave->setDefault(true);


        QMetaObject::connectSlotsByName(BankAddDialog);
    } // setupUi

    void retranslateUi(QDialog *BankAddDialog)
    {
        BankAddDialog->setWindowTitle(QApplication::translate("BankAddDialog", "Add new bank", 0));
        label->setText(QApplication::translate("BankAddDialog", "Name", 0));
        label_2->setText(QApplication::translate("BankAddDialog", "Debit Formula", 0));
        label_3->setText(QApplication::translate("BankAddDialog", "Credit Formula", 0));
        lineName->setPlaceholderText(QApplication::translate("BankAddDialog", "Name", 0));
        lineDebit->setPlaceholderText(QApplication::translate("BankAddDialog", "Additional charge", 0));
        lineCredit->setPlaceholderText(QApplication::translate("BankAddDialog", "Additional Charge", 0));
        pushCancel->setText(QApplication::translate("BankAddDialog", "Cancel", 0));
        pushSave->setText(QApplication::translate("BankAddDialog", "Save", 0));
    } // retranslateUi

};

namespace Ui {
    class BankAddDialog: public Ui_BankAddDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BANKADDDIALOG_H
