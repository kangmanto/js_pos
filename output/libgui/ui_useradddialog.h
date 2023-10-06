/********************************************************************************
** Form generated from reading UI file 'useradddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERADDDIALOG_H
#define UI_USERADDDIALOG_H

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

class Ui_UserAddDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *lineUsername;
    QLineEdit *linePassword;
    QLineEdit *lineName;
    QLineEdit *lineRepassword;
    QLineEdit *linePhone;
    QPlainTextEdit *textAddress;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushCancel;
    QPushButton *pushSave;

    void setupUi(QDialog *UserAddDialog)
    {
        if (UserAddDialog->objectName().isEmpty())
            UserAddDialog->setObjectName(QStringLiteral("UserAddDialog"));
        UserAddDialog->setWindowModality(Qt::WindowModal);
        UserAddDialog->resize(437, 318);
        UserAddDialog->setModal(true);
        verticalLayout = new QVBoxLayout(UserAddDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label = new QLabel(UserAddDialog);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        label_2 = new QLabel(UserAddDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        label_3 = new QLabel(UserAddDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_3);

        label_4 = new QLabel(UserAddDialog);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_4);

        label_5 = new QLabel(UserAddDialog);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_5);

        lineUsername = new QLineEdit(UserAddDialog);
        lineUsername->setObjectName(QStringLiteral("lineUsername"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineUsername);

        linePassword = new QLineEdit(UserAddDialog);
        linePassword->setObjectName(QStringLiteral("linePassword"));
        linePassword->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(1, QFormLayout::FieldRole, linePassword);

        lineName = new QLineEdit(UserAddDialog);
        lineName->setObjectName(QStringLiteral("lineName"));

        formLayout->setWidget(3, QFormLayout::FieldRole, lineName);

        lineRepassword = new QLineEdit(UserAddDialog);
        lineRepassword->setObjectName(QStringLiteral("lineRepassword"));
        lineRepassword->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(2, QFormLayout::FieldRole, lineRepassword);

        linePhone = new QLineEdit(UserAddDialog);
        linePhone->setObjectName(QStringLiteral("linePhone"));

        formLayout->setWidget(4, QFormLayout::FieldRole, linePhone);

        textAddress = new QPlainTextEdit(UserAddDialog);
        textAddress->setObjectName(QStringLiteral("textAddress"));

        formLayout->setWidget(5, QFormLayout::FieldRole, textAddress);


        verticalLayout->addLayout(formLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushCancel = new QPushButton(UserAddDialog);
        pushCancel->setObjectName(QStringLiteral("pushCancel"));
        pushCancel->setAutoDefault(false);

        horizontalLayout->addWidget(pushCancel);

        pushSave = new QPushButton(UserAddDialog);
        pushSave->setObjectName(QStringLiteral("pushSave"));

        horizontalLayout->addWidget(pushSave);


        verticalLayout->addLayout(horizontalLayout);

        QWidget::setTabOrder(lineUsername, linePassword);
        QWidget::setTabOrder(linePassword, lineRepassword);
        QWidget::setTabOrder(lineRepassword, lineName);
        QWidget::setTabOrder(lineName, linePhone);
        QWidget::setTabOrder(linePhone, textAddress);
        QWidget::setTabOrder(textAddress, pushSave);
        QWidget::setTabOrder(pushSave, pushCancel);

        retranslateUi(UserAddDialog);
        QObject::connect(pushCancel, SIGNAL(clicked()), UserAddDialog, SLOT(hide()));

        pushSave->setDefault(true);


        QMetaObject::connectSlotsByName(UserAddDialog);
    } // setupUi

    void retranslateUi(QDialog *UserAddDialog)
    {
        UserAddDialog->setWindowTitle(QApplication::translate("UserAddDialog", "Dialog", 0));
        label->setText(QApplication::translate("UserAddDialog", "Username", 0));
        label_2->setText(QApplication::translate("UserAddDialog", "Password", 0));
        label_3->setText(QApplication::translate("UserAddDialog", "Name", 0));
        label_4->setText(QApplication::translate("UserAddDialog", "Phone", 0));
        label_5->setText(QApplication::translate("UserAddDialog", "Address", 0));
        lineUsername->setPlaceholderText(QApplication::translate("UserAddDialog", "Username", 0));
        linePassword->setPlaceholderText(QApplication::translate("UserAddDialog", "Password", 0));
        lineName->setPlaceholderText(QApplication::translate("UserAddDialog", "Name", 0));
        lineRepassword->setPlaceholderText(QApplication::translate("UserAddDialog", "Re-password", 0));
        linePhone->setPlaceholderText(QApplication::translate("UserAddDialog", "Phone", 0));
        textAddress->setPlaceholderText(QApplication::translate("UserAddDialog", "Address", 0));
        pushCancel->setText(QApplication::translate("UserAddDialog", "Cancel", 0));
        pushSave->setText(QApplication::translate("UserAddDialog", "Save", 0));
    } // retranslateUi

};

namespace Ui {
    class UserAddDialog: public Ui_UserAddDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERADDDIALOG_H
