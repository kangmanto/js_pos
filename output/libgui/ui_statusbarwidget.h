/********************************************************************************
** Form generated from reading UI file 'statusbarwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATUSBARWIDGET_H
#define UI_STATUSBARWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StatusBarWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *labelUser;
    QLabel *labelClock;

    void setupUi(QWidget *StatusBarWidget)
    {
        if (StatusBarWidget->objectName().isEmpty())
            StatusBarWidget->setObjectName(QStringLiteral("StatusBarWidget"));
        StatusBarWidget->resize(642, 35);
        horizontalLayout = new QHBoxLayout(StatusBarWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        labelUser = new QLabel(StatusBarWidget);
        labelUser->setObjectName(QStringLiteral("labelUser"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelUser->sizePolicy().hasHeightForWidth());
        labelUser->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(labelUser);

        labelClock = new QLabel(StatusBarWidget);
        labelClock->setObjectName(QStringLiteral("labelClock"));
        labelClock->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(labelClock);


        retranslateUi(StatusBarWidget);

        QMetaObject::connectSlotsByName(StatusBarWidget);
    } // setupUi

    void retranslateUi(QWidget *StatusBarWidget)
    {
        StatusBarWidget->setWindowTitle(QApplication::translate("StatusBarWidget", "Form", 0));
        labelUser->setText(QApplication::translate("StatusBarWidget", "TextLabel", 0));
        labelClock->setText(QApplication::translate("StatusBarWidget", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class StatusBarWidget: public Ui_StatusBarWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATUSBARWIDGET_H
