/********************************************************************************
** Form generated from reading UI file 'logindialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_LoginDialog
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QFrame *line;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineUsername;
    QLineEdit *linePassword;
    QPushButton *pushLogin;
    QLabel *labelError;
    QSpacerItem *verticalSpacer;
    QFrame *line_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelVersion;
    QPushButton *pushConfig;

    void setupUi(QDialog *LoginDialog)
    {
        if (LoginDialog->objectName().isEmpty())
            LoginDialog->setObjectName(QStringLiteral("LoginDialog"));
        LoginDialog->resize(431, 175);
        LoginDialog->setModal(true);
        horizontalLayout = new QHBoxLayout(LoginDialog);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(LoginDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/icon_128.png")));

        horizontalLayout->addWidget(label);

        line = new QFrame(LoginDialog);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(-1, -1, -1, 0);
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label_2 = new QLabel(LoginDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setText(QStringLiteral("Username"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        label_3 = new QLabel(LoginDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setText(QStringLiteral("Password"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        lineUsername = new QLineEdit(LoginDialog);
        lineUsername->setObjectName(QStringLiteral("lineUsername"));
        lineUsername->setPlaceholderText(QStringLiteral("Username"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineUsername);

        linePassword = new QLineEdit(LoginDialog);
        linePassword->setObjectName(QStringLiteral("linePassword"));
        linePassword->setEchoMode(QLineEdit::Password);
        linePassword->setPlaceholderText(QStringLiteral("Password"));

        formLayout->setWidget(1, QFormLayout::FieldRole, linePassword);

        pushLogin = new QPushButton(LoginDialog);
        pushLogin->setObjectName(QStringLiteral("pushLogin"));
        pushLogin->setText(QStringLiteral("Login"));

        formLayout->setWidget(3, QFormLayout::FieldRole, pushLogin);

        labelError = new QLabel(LoginDialog);
        labelError->setObjectName(QStringLiteral("labelError"));
        labelError->setStyleSheet(QStringLiteral("font-size: 12px; color: red;"));

        formLayout->setWidget(2, QFormLayout::FieldRole, labelError);


        verticalLayout->addLayout(formLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        line_2 = new QFrame(LoginDialog);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 0, -1, -1);
        labelVersion = new QLabel(LoginDialog);
        labelVersion->setObjectName(QStringLiteral("labelVersion"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelVersion->sizePolicy().hasHeightForWidth());
        labelVersion->setSizePolicy(sizePolicy);
        labelVersion->setStyleSheet(QStringLiteral("font-size: 12px;"));
        labelVersion->setText(QStringLiteral("version : 0.1"));

        horizontalLayout_2->addWidget(labelVersion);

        pushConfig = new QPushButton(LoginDialog);
        pushConfig->setObjectName(QStringLiteral("pushConfig"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/16x16/gear.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushConfig->setIcon(icon);
        pushConfig->setAutoDefault(false);
        pushConfig->setFlat(true);

        horizontalLayout_2->addWidget(pushConfig);


        verticalLayout->addLayout(horizontalLayout_2);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(LoginDialog);

        pushLogin->setDefault(true);


        QMetaObject::connectSlotsByName(LoginDialog);
    } // setupUi

    void retranslateUi(QDialog *LoginDialog)
    {
        LoginDialog->setWindowTitle(QString());
        label->setText(QString());
        labelError->setText(QApplication::translate("LoginDialog", "Sample", 0));
        pushConfig->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class LoginDialog: public Ui_LoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
