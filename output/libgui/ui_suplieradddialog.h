/********************************************************************************
** Form generated from reading UI file 'suplieradddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUPLIERADDDIALOG_H
#define UI_SUPLIERADDDIALOG_H

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

class Ui_SuplierAddDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineName;
    QLineEdit *lineCode;
    QLineEdit *linePhone;
    QPlainTextEdit *textAddress;
    QLineEdit *lineEmail;
    QLabel *label_5;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushCancel;
    QPushButton *pushSave;

    void setupUi(QDialog *SuplierAddDialog)
    {
        if (SuplierAddDialog->objectName().isEmpty())
            SuplierAddDialog->setObjectName(QStringLiteral("SuplierAddDialog"));
        SuplierAddDialog->setWindowModality(Qt::WindowModal);
        SuplierAddDialog->resize(462, 259);
        SuplierAddDialog->setModal(true);
        verticalLayout = new QVBoxLayout(SuplierAddDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout->setHorizontalSpacing(6);
        label = new QLabel(SuplierAddDialog);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        label_2 = new QLabel(SuplierAddDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        label_3 = new QLabel(SuplierAddDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        label_4 = new QLabel(SuplierAddDialog);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        lineName = new QLineEdit(SuplierAddDialog);
        lineName->setObjectName(QStringLiteral("lineName"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineName);

        lineCode = new QLineEdit(SuplierAddDialog);
        lineCode->setObjectName(QStringLiteral("lineCode"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineCode);

        linePhone = new QLineEdit(SuplierAddDialog);
        linePhone->setObjectName(QStringLiteral("linePhone"));

        formLayout->setWidget(3, QFormLayout::FieldRole, linePhone);

        textAddress = new QPlainTextEdit(SuplierAddDialog);
        textAddress->setObjectName(QStringLiteral("textAddress"));
        textAddress->setTabChangesFocus(true);

        formLayout->setWidget(2, QFormLayout::FieldRole, textAddress);

        lineEmail = new QLineEdit(SuplierAddDialog);
        lineEmail->setObjectName(QStringLiteral("lineEmail"));

        formLayout->setWidget(4, QFormLayout::FieldRole, lineEmail);

        label_5 = new QLabel(SuplierAddDialog);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);


        verticalLayout->addLayout(formLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushCancel = new QPushButton(SuplierAddDialog);
        pushCancel->setObjectName(QStringLiteral("pushCancel"));
        pushCancel->setAutoDefault(false);

        horizontalLayout->addWidget(pushCancel);

        pushSave = new QPushButton(SuplierAddDialog);
        pushSave->setObjectName(QStringLiteral("pushSave"));

        horizontalLayout->addWidget(pushSave);


        verticalLayout->addLayout(horizontalLayout);

        QWidget::setTabOrder(lineName, lineCode);
        QWidget::setTabOrder(lineCode, textAddress);
        QWidget::setTabOrder(textAddress, linePhone);
        QWidget::setTabOrder(linePhone, pushSave);
        QWidget::setTabOrder(pushSave, pushCancel);

        retranslateUi(SuplierAddDialog);
        QObject::connect(pushCancel, SIGNAL(clicked()), SuplierAddDialog, SLOT(close()));

        pushSave->setDefault(true);


        QMetaObject::connectSlotsByName(SuplierAddDialog);
    } // setupUi

    void retranslateUi(QDialog *SuplierAddDialog)
    {
        SuplierAddDialog->setWindowTitle(QApplication::translate("SuplierAddDialog", "Add new suplier", 0));
        label->setText(QApplication::translate("SuplierAddDialog", "Name", 0));
        label_2->setText(QApplication::translate("SuplierAddDialog", "Code", 0));
        label_3->setText(QApplication::translate("SuplierAddDialog", "Address", 0));
        label_4->setText(QApplication::translate("SuplierAddDialog", "Phone", 0));
        lineName->setPlaceholderText(QApplication::translate("SuplierAddDialog", "Fullname", 0));
        lineCode->setPlaceholderText(QApplication::translate("SuplierAddDialog", "Suplier code", 0));
        linePhone->setPlaceholderText(QApplication::translate("SuplierAddDialog", "Phone", 0));
        textAddress->setPlaceholderText(QApplication::translate("SuplierAddDialog", "Address", 0));
        lineEmail->setPlaceholderText(QApplication::translate("SuplierAddDialog", "Email", 0));
        label_5->setText(QApplication::translate("SuplierAddDialog", "Email", 0));
        pushCancel->setText(QApplication::translate("SuplierAddDialog", "Cancel", 0));
        pushSave->setText(QApplication::translate("SuplierAddDialog", "Save", 0));
    } // retranslateUi

};

namespace Ui {
    class SuplierAddDialog: public Ui_SuplierAddDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUPLIERADDDIALOG_H
