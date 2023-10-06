/********************************************************************************
** Form generated from reading UI file 'addtransactiondialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDTRANSACTIONDIALOG_H
#define UI_ADDTRANSACTIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AddTransactionDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QComboBox *comboType;
    QDoubleSpinBox *doubleTotal;
    QPlainTextEdit *plainDetail;
    QLabel *label_4;
    QLineEdit *lineNumber;
    QLabel *label_5;
    QLabel *label_6;
    QComboBox *comboBank;
    QDateTimeEdit *dateEdit;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushCancel;
    QPushButton *pushSave;

    void setupUi(QDialog *AddTransactionDialog)
    {
        if (AddTransactionDialog->objectName().isEmpty())
            AddTransactionDialog->setObjectName(QStringLiteral("AddTransactionDialog"));
        AddTransactionDialog->resize(369, 286);
        AddTransactionDialog->setModal(true);
        verticalLayout = new QVBoxLayout(AddTransactionDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label = new QLabel(AddTransactionDialog);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label);

        label_2 = new QLabel(AddTransactionDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_2);

        label_3 = new QLabel(AddTransactionDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_3);

        comboType = new QComboBox(AddTransactionDialog);
        comboType->setObjectName(QStringLiteral("comboType"));

        formLayout->setWidget(2, QFormLayout::FieldRole, comboType);

        doubleTotal = new QDoubleSpinBox(AddTransactionDialog);
        doubleTotal->setObjectName(QStringLiteral("doubleTotal"));
        doubleTotal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        doubleTotal->setMinimum(-1e+09);
        doubleTotal->setMaximum(1e+09);

        formLayout->setWidget(4, QFormLayout::FieldRole, doubleTotal);

        plainDetail = new QPlainTextEdit(AddTransactionDialog);
        plainDetail->setObjectName(QStringLiteral("plainDetail"));
        plainDetail->setMinimumSize(QSize(0, 0));
        plainDetail->setMaximumSize(QSize(16777215, 80));

        formLayout->setWidget(5, QFormLayout::FieldRole, plainDetail);

        label_4 = new QLabel(AddTransactionDialog);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_4);

        lineNumber = new QLineEdit(AddTransactionDialog);
        lineNumber->setObjectName(QStringLiteral("lineNumber"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineNumber);

        label_5 = new QLabel(AddTransactionDialog);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_5);

        label_6 = new QLabel(AddTransactionDialog);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_6);

        comboBank = new QComboBox(AddTransactionDialog);
        comboBank->setObjectName(QStringLiteral("comboBank"));

        formLayout->setWidget(3, QFormLayout::FieldRole, comboBank);

        dateEdit = new QDateTimeEdit(AddTransactionDialog);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, dateEdit);


        verticalLayout->addLayout(formLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushCancel = new QPushButton(AddTransactionDialog);
        pushCancel->setObjectName(QStringLiteral("pushCancel"));

        horizontalLayout->addWidget(pushCancel);

        pushSave = new QPushButton(AddTransactionDialog);
        pushSave->setObjectName(QStringLiteral("pushSave"));

        horizontalLayout->addWidget(pushSave);


        verticalLayout->addLayout(horizontalLayout);

        QWidget::setTabOrder(dateEdit, lineNumber);
        QWidget::setTabOrder(lineNumber, comboType);
        QWidget::setTabOrder(comboType, comboBank);
        QWidget::setTabOrder(comboBank, doubleTotal);
        QWidget::setTabOrder(doubleTotal, plainDetail);
        QWidget::setTabOrder(plainDetail, pushCancel);
        QWidget::setTabOrder(pushCancel, pushSave);

        retranslateUi(AddTransactionDialog);
        QObject::connect(pushCancel, SIGNAL(clicked()), AddTransactionDialog, SLOT(close()));

        QMetaObject::connectSlotsByName(AddTransactionDialog);
    } // setupUi

    void retranslateUi(QDialog *AddTransactionDialog)
    {
        AddTransactionDialog->setWindowTitle(QApplication::translate("AddTransactionDialog", "Add new transaction", 0));
        label->setText(QApplication::translate("AddTransactionDialog", "Type", 0));
        label_2->setText(QApplication::translate("AddTransactionDialog", "Total", 0));
        label_3->setText(QApplication::translate("AddTransactionDialog", "Detail", 0));
        plainDetail->setPlainText(QString());
        plainDetail->setPlaceholderText(QApplication::translate("AddTransactionDialog", "Detail transaction", 0));
        label_4->setText(QApplication::translate("AddTransactionDialog", "Number", 0));
        lineNumber->setPlaceholderText(QApplication::translate("AddTransactionDialog", "Transaction number", 0));
        label_5->setText(QApplication::translate("AddTransactionDialog", "Date", 0));
        label_6->setText(QApplication::translate("AddTransactionDialog", "Bank", 0));
        pushCancel->setText(QApplication::translate("AddTransactionDialog", "Cancel", 0));
        pushSave->setText(QApplication::translate("AddTransactionDialog", "Save", 0));
    } // retranslateUi

};

namespace Ui {
    class AddTransactionDialog: public Ui_AddTransactionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDTRANSACTIONDIALOG_H
