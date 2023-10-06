/********************************************************************************
** Form generated from reading UI file 'userpermissiondialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERPERMISSIONDIALOG_H
#define UI_USERPERMISSIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_UserPermissionDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *labelUsername;
    QLabel *label_3;
    QLabel *labelName;
    QFrame *line;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QListWidget *listAvailable;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_4;
    QListWidget *listSelected;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushSave;

    void setupUi(QDialog *UserPermissionDialog)
    {
        if (UserPermissionDialog->objectName().isEmpty())
            UserPermissionDialog->setObjectName(QStringLiteral("UserPermissionDialog"));
        UserPermissionDialog->resize(452, 344);
        verticalLayout = new QVBoxLayout(UserPermissionDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label = new QLabel(UserPermissionDialog);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        labelUsername = new QLabel(UserPermissionDialog);
        labelUsername->setObjectName(QStringLiteral("labelUsername"));

        formLayout->setWidget(0, QFormLayout::FieldRole, labelUsername);

        label_3 = new QLabel(UserPermissionDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        labelName = new QLabel(UserPermissionDialog);
        labelName->setObjectName(QStringLiteral("labelName"));

        formLayout->setWidget(1, QFormLayout::FieldRole, labelName);


        verticalLayout->addLayout(formLayout);

        line = new QFrame(UserPermissionDialog);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, -1, 0, -1);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_2 = new QLabel(UserPermissionDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        listAvailable = new QListWidget(UserPermissionDialog);
        listAvailable->setObjectName(QStringLiteral("listAvailable"));

        verticalLayout_2->addWidget(listAvailable);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_4 = new QLabel(UserPermissionDialog);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_4->addWidget(label_4);

        listSelected = new QListWidget(UserPermissionDialog);
        listSelected->setObjectName(QStringLiteral("listSelected"));

        verticalLayout_4->addWidget(listSelected);


        horizontalLayout->addLayout(verticalLayout_4);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushSave = new QPushButton(UserPermissionDialog);
        pushSave->setObjectName(QStringLiteral("pushSave"));

        horizontalLayout_2->addWidget(pushSave);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(UserPermissionDialog);

        QMetaObject::connectSlotsByName(UserPermissionDialog);
    } // setupUi

    void retranslateUi(QDialog *UserPermissionDialog)
    {
        UserPermissionDialog->setWindowTitle(QApplication::translate("UserPermissionDialog", "Permission", 0));
        label->setText(QApplication::translate("UserPermissionDialog", "Username", 0));
        labelUsername->setText(QString());
        label_3->setText(QApplication::translate("UserPermissionDialog", "Name", 0));
        labelName->setText(QString());
        label_2->setText(QApplication::translate("UserPermissionDialog", "Available", 0));
        label_4->setText(QApplication::translate("UserPermissionDialog", "Selected", 0));
        pushSave->setText(QApplication::translate("UserPermissionDialog", "Save", 0));
    } // retranslateUi

};

namespace Ui {
    class UserPermissionDialog: public Ui_UserPermissionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERPERMISSIONDIALOG_H
