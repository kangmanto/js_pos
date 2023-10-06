/********************************************************************************
** Form generated from reading UI file 'customeradddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMERADDDIALOG_H
#define UI_CUSTOMERADDDIALOG_H

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
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CustomerAddDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineNumber;
    QLineEdit *lineName;
    QLineEdit *linePhone;
    QPlainTextEdit *plainAddress;
    QLabel *label_5;
    QLineEdit *lineEmail;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushCancel;
    QPushButton *pushSave;

    void setupUi(QDialog *CustomerAddDialog)
    {
        if (CustomerAddDialog->objectName().isEmpty())
            CustomerAddDialog->setObjectName(QStringLiteral("CustomerAddDialog"));
        CustomerAddDialog->resize(420, 254);
        CustomerAddDialog->setModal(true);
        verticalLayout = new QVBoxLayout(CustomerAddDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label = new QLabel(CustomerAddDialog);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        label_2 = new QLabel(CustomerAddDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        label_3 = new QLabel(CustomerAddDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        label_4 = new QLabel(CustomerAddDialog);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        lineNumber = new QLineEdit(CustomerAddDialog);
        lineNumber->setObjectName(QStringLiteral("lineNumber"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineNumber);

        lineName = new QLineEdit(CustomerAddDialog);
        lineName->setObjectName(QStringLiteral("lineName"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineName);

        linePhone = new QLineEdit(CustomerAddDialog);
        linePhone->setObjectName(QStringLiteral("linePhone"));

        formLayout->setWidget(3, QFormLayout::FieldRole, linePhone);

        plainAddress = new QPlainTextEdit(CustomerAddDialog);
        plainAddress->setObjectName(QStringLiteral("plainAddress"));
        plainAddress->setMaximumSize(QSize(16777215, 80));

        formLayout->setWidget(2, QFormLayout::FieldRole, plainAddress);

        label_5 = new QLabel(CustomerAddDialog);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        lineEmail = new QLineEdit(CustomerAddDialog);
        lineEmail->setObjectName(QStringLiteral("lineEmail"));

        formLayout->setWidget(4, QFormLayout::FieldRole, lineEmail);


        verticalLayout->addLayout(formLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushCancel = new QPushButton(CustomerAddDialog);
        pushCancel->setObjectName(QStringLiteral("pushCancel"));

        horizontalLayout->addWidget(pushCancel);

        pushSave = new QPushButton(CustomerAddDialog);
        pushSave->setObjectName(QStringLiteral("pushSave"));

        horizontalLayout->addWidget(pushSave);


        verticalLayout->addLayout(horizontalLayout);

        QWidget::setTabOrder(lineNumber, lineName);
        QWidget::setTabOrder(lineName, plainAddress);
        QWidget::setTabOrder(plainAddress, linePhone);
        QWidget::setTabOrder(linePhone, pushSave);
        QWidget::setTabOrder(pushSave, pushCancel);

        retranslateUi(CustomerAddDialog);
        QObject::connect(pushCancel, SIGNAL(clicked()), CustomerAddDialog, SLOT(close()));

        pushSave->setDefault(true);


        QMetaObject::connectSlotsByName(CustomerAddDialog);
    } // setupUi

    void retranslateUi(QDialog *CustomerAddDialog)
    {
        CustomerAddDialog->setWindowTitle(QApplication::translate("CustomerAddDialog", "Add new customer", 0));
        label->setText(QApplication::translate("CustomerAddDialog", "Number", 0));
        label_2->setText(QApplication::translate("CustomerAddDialog", "Name", 0));
        label_3->setText(QApplication::translate("CustomerAddDialog", "Address", 0));
        label_4->setText(QApplication::translate("CustomerAddDialog", "Phone", 0));
        lineNumber->setPlaceholderText(QApplication::translate("CustomerAddDialog", "Number", 0));
        lineName->setPlaceholderText(QApplication::translate("CustomerAddDialog", "Name", 0));
        linePhone->setPlaceholderText(QApplication::translate("CustomerAddDialog", "Phone", 0));
        plainAddress->setPlaceholderText(QApplication::translate("CustomerAddDialog", "Address", 0));
        label_5->setText(QApplication::translate("CustomerAddDialog", "Email", 0));
        lineEmail->setPlaceholderText(QApplication::translate("CustomerAddDialog", "Email", 0));
        pushCancel->setText(QApplication::translate("CustomerAddDialog", "Cancel", 0));
        pushSave->setText(QApplication::translate("CustomerAddDialog", "Save", 0));
    } // retranslateUi

};

namespace Ui {
    class CustomerAddDialog: public Ui_CustomerAddDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMERADDDIALOG_H
