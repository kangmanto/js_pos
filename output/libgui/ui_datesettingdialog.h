/********************************************************************************
** Form generated from reading UI file 'datesettingdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATESETTINGDIALOG_H
#define UI_DATESETTINGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DateSettingDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QDateTimeEdit *dateTimeEdit;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;

    void setupUi(QDialog *DateSettingDialog)
    {
        if (DateSettingDialog->objectName().isEmpty())
            DateSettingDialog->setObjectName(QStringLiteral("DateSettingDialog"));
        DateSettingDialog->resize(299, 111);
        verticalLayout = new QVBoxLayout(DateSettingDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(DateSettingDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(true);

        verticalLayout->addWidget(label);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        dateTimeEdit = new QDateTimeEdit(DateSettingDialog);
        dateTimeEdit->setObjectName(QStringLiteral("dateTimeEdit"));
        dateTimeEdit->setCalendarPopup(true);

        verticalLayout->addWidget(dateTimeEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(DateSettingDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(DateSettingDialog);

        QMetaObject::connectSlotsByName(DateSettingDialog);
    } // setupUi

    void retranslateUi(QDialog *DateSettingDialog)
    {
        DateSettingDialog->setWindowTitle(QApplication::translate("DateSettingDialog", "Setting Date and Time", 0));
        label->setText(QApplication::translate("DateSettingDialog", "Setting you date and time manually", 0));
        pushButton->setText(QApplication::translate("DateSettingDialog", "Save", 0));
    } // retranslateUi

};

namespace Ui {
    class DateSettingDialog: public Ui_DateSettingDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATESETTINGDIALOG_H
