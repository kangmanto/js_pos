/********************************************************************************
** Form generated from reading UI file 'autoupdatedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTOUPDATEDIALOG_H
#define UI_AUTOUPDATEDIALOG_H

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
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AutoUpdateDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *labelChecking;
    QFrame *line;
    QFormLayout *formLayout;
    QLabel *labelCV;
    QLabel *labelNV;
    QLabel *labelCurrentVersion;
    QLabel *labelNewVersion;
    QFrame *line_2;
    QPushButton *pushUpdate;
    QProgressBar *progressBar;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushClose;

    void setupUi(QDialog *AutoUpdateDialog)
    {
        if (AutoUpdateDialog->objectName().isEmpty())
            AutoUpdateDialog->setObjectName(QStringLiteral("AutoUpdateDialog"));
        AutoUpdateDialog->resize(410, 222);
        verticalLayout = new QVBoxLayout(AutoUpdateDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        labelChecking = new QLabel(AutoUpdateDialog);
        labelChecking->setObjectName(QStringLiteral("labelChecking"));
        labelChecking->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(labelChecking);

        line = new QFrame(AutoUpdateDialog);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(-1, 0, -1, -1);
        labelCV = new QLabel(AutoUpdateDialog);
        labelCV->setObjectName(QStringLiteral("labelCV"));

        formLayout->setWidget(0, QFormLayout::LabelRole, labelCV);

        labelNV = new QLabel(AutoUpdateDialog);
        labelNV->setObjectName(QStringLiteral("labelNV"));

        formLayout->setWidget(1, QFormLayout::LabelRole, labelNV);

        labelCurrentVersion = new QLabel(AutoUpdateDialog);
        labelCurrentVersion->setObjectName(QStringLiteral("labelCurrentVersion"));

        formLayout->setWidget(0, QFormLayout::FieldRole, labelCurrentVersion);

        labelNewVersion = new QLabel(AutoUpdateDialog);
        labelNewVersion->setObjectName(QStringLiteral("labelNewVersion"));

        formLayout->setWidget(1, QFormLayout::FieldRole, labelNewVersion);


        verticalLayout->addLayout(formLayout);

        line_2 = new QFrame(AutoUpdateDialog);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);

        pushUpdate = new QPushButton(AutoUpdateDialog);
        pushUpdate->setObjectName(QStringLiteral("pushUpdate"));

        verticalLayout->addWidget(pushUpdate);

        progressBar = new QProgressBar(AutoUpdateDialog);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(0);

        verticalLayout->addWidget(progressBar);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushClose = new QPushButton(AutoUpdateDialog);
        pushClose->setObjectName(QStringLiteral("pushClose"));

        horizontalLayout->addWidget(pushClose);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(AutoUpdateDialog);
        QObject::connect(pushClose, SIGNAL(clicked()), AutoUpdateDialog, SLOT(close()));

        QMetaObject::connectSlotsByName(AutoUpdateDialog);
    } // setupUi

    void retranslateUi(QDialog *AutoUpdateDialog)
    {
        AutoUpdateDialog->setWindowTitle(QApplication::translate("AutoUpdateDialog", "Check Update", 0));
        labelChecking->setText(QApplication::translate("AutoUpdateDialog", "Checking ...", 0));
        labelCV->setText(QApplication::translate("AutoUpdateDialog", "Your Version", 0));
        labelNV->setText(QApplication::translate("AutoUpdateDialog", "New Version", 0));
        labelCurrentVersion->setText(QApplication::translate("AutoUpdateDialog", "TextLabel", 0));
        labelNewVersion->setText(QApplication::translate("AutoUpdateDialog", "TextLabel", 0));
        pushUpdate->setText(QApplication::translate("AutoUpdateDialog", "Update", 0));
        pushClose->setText(QApplication::translate("AutoUpdateDialog", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class AutoUpdateDialog: public Ui_AutoUpdateDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTOUPDATEDIALOG_H
