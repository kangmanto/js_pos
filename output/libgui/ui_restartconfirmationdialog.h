/********************************************************************************
** Form generated from reading UI file 'restartconfirmationdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESTARTCONFIRMATIONDIALOG_H
#define UI_RESTARTCONFIRMATIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_RestartConfirmationDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *labelTitle;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushExit;
    QPushButton *pushRestart;
    QPushButton *pushSetting;

    void setupUi(QDialog *RestartConfirmationDialog)
    {
        if (RestartConfirmationDialog->objectName().isEmpty())
            RestartConfirmationDialog->setObjectName(QStringLiteral("RestartConfirmationDialog"));
        RestartConfirmationDialog->resize(380, 99);
        verticalLayout = new QVBoxLayout(RestartConfirmationDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        labelTitle = new QLabel(RestartConfirmationDialog);
        labelTitle->setObjectName(QStringLiteral("labelTitle"));

        verticalLayout->addWidget(labelTitle);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushExit = new QPushButton(RestartConfirmationDialog);
        pushExit->setObjectName(QStringLiteral("pushExit"));

        horizontalLayout->addWidget(pushExit);

        pushRestart = new QPushButton(RestartConfirmationDialog);
        pushRestart->setObjectName(QStringLiteral("pushRestart"));

        horizontalLayout->addWidget(pushRestart);

        pushSetting = new QPushButton(RestartConfirmationDialog);
        pushSetting->setObjectName(QStringLiteral("pushSetting"));

        horizontalLayout->addWidget(pushSetting);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(RestartConfirmationDialog);

        QMetaObject::connectSlotsByName(RestartConfirmationDialog);
    } // setupUi

    void retranslateUi(QDialog *RestartConfirmationDialog)
    {
        RestartConfirmationDialog->setWindowTitle(QApplication::translate("RestartConfirmationDialog", "Dialog", 0));
        labelTitle->setText(QApplication::translate("RestartConfirmationDialog", "TextLabel", 0));
        pushExit->setText(QApplication::translate("RestartConfirmationDialog", "Exit App", 0));
        pushRestart->setText(QApplication::translate("RestartConfirmationDialog", "Restart App", 0));
        pushSetting->setText(QApplication::translate("RestartConfirmationDialog", "Open Setting", 0));
    } // retranslateUi

};

namespace Ui {
    class RestartConfirmationDialog: public Ui_RestartConfirmationDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESTARTCONFIRMATIONDIALOG_H
