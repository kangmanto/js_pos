/********************************************************************************
** Form generated from reading UI file 'changepassworddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGEPASSWORDDIALOG_H
#define UI_CHANGEPASSWORDDIALOG_H

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

class Ui_ChangePasswordDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *linePasswordOld;
    QLineEdit *linePasswordNewRe;
    QLineEdit *linePasswordNew;
    QLabel *label_2;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;
    QPushButton *pushSave;

    void setupUi(QDialog *ChangePasswordDialog)
    {
        if (ChangePasswordDialog->objectName().isEmpty())
            ChangePasswordDialog->setObjectName(QStringLiteral("ChangePasswordDialog"));
        ChangePasswordDialog->resize(321, 148);
        verticalLayout = new QVBoxLayout(ChangePasswordDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label = new QLabel(ChangePasswordDialog);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        linePasswordOld = new QLineEdit(ChangePasswordDialog);
        linePasswordOld->setObjectName(QStringLiteral("linePasswordOld"));
        linePasswordOld->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(0, QFormLayout::FieldRole, linePasswordOld);

        linePasswordNewRe = new QLineEdit(ChangePasswordDialog);
        linePasswordNewRe->setObjectName(QStringLiteral("linePasswordNewRe"));
        linePasswordNewRe->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(2, QFormLayout::FieldRole, linePasswordNewRe);

        linePasswordNew = new QLineEdit(ChangePasswordDialog);
        linePasswordNew->setObjectName(QStringLiteral("linePasswordNew"));
        linePasswordNew->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(1, QFormLayout::FieldRole, linePasswordNew);

        label_2 = new QLabel(ChangePasswordDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);


        verticalLayout->addLayout(formLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_2 = new QPushButton(ChangePasswordDialog);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setAutoDefault(false);

        horizontalLayout->addWidget(pushButton_2);

        pushSave = new QPushButton(ChangePasswordDialog);
        pushSave->setObjectName(QStringLiteral("pushSave"));

        horizontalLayout->addWidget(pushSave);


        verticalLayout->addLayout(horizontalLayout);

        QWidget::setTabOrder(linePasswordOld, linePasswordNew);
        QWidget::setTabOrder(linePasswordNew, linePasswordNewRe);
        QWidget::setTabOrder(linePasswordNewRe, pushSave);
        QWidget::setTabOrder(pushSave, pushButton_2);

        retranslateUi(ChangePasswordDialog);
        QObject::connect(pushButton_2, SIGNAL(clicked()), ChangePasswordDialog, SLOT(close()));

        pushSave->setDefault(true);


        QMetaObject::connectSlotsByName(ChangePasswordDialog);
    } // setupUi

    void retranslateUi(QDialog *ChangePasswordDialog)
    {
        ChangePasswordDialog->setWindowTitle(QApplication::translate("ChangePasswordDialog", "Change Password", 0));
        label->setText(QApplication::translate("ChangePasswordDialog", "Current Password", 0));
        linePasswordOld->setPlaceholderText(QApplication::translate("ChangePasswordDialog", "Your current password", 0));
        linePasswordNewRe->setPlaceholderText(QApplication::translate("ChangePasswordDialog", "New password again", 0));
        linePasswordNew->setPlaceholderText(QApplication::translate("ChangePasswordDialog", "New password", 0));
        label_2->setText(QApplication::translate("ChangePasswordDialog", "New Password", 0));
        pushButton_2->setText(QApplication::translate("ChangePasswordDialog", "Cancel", 0));
        pushSave->setText(QApplication::translate("ChangePasswordDialog", "Save", 0));
    } // retranslateUi

};

namespace Ui {
    class ChangePasswordDialog: public Ui_ChangePasswordDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEPASSWORDDIALOG_H
