/********************************************************************************
** Form generated from reading UI file 'rewardsetting.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REWARDSETTING_H
#define UI_REWARDSETTING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "tablewidget.h"

QT_BEGIN_NAMESPACE

class Ui_RewardSetting
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *labelTitle;
    QFrame *line;
    QWidget *widget;
    QVBoxLayout *verticalLayout_4;
    QSplitter *splitter;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    LibGUI::TableWidget *tableExchange;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    LibGUI::TableWidget *tablePoin;

    void setupUi(QWidget *RewardSetting)
    {
        if (RewardSetting->objectName().isEmpty())
            RewardSetting->setObjectName(QStringLiteral("RewardSetting"));
        RewardSetting->resize(731, 550);
        verticalLayout = new QVBoxLayout(RewardSetting);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(RewardSetting);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/icon_32.png")));

        horizontalLayout->addWidget(label);

        labelTitle = new QLabel(RewardSetting);
        labelTitle->setObjectName(QStringLiteral("labelTitle"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(labelTitle->sizePolicy().hasHeightForWidth());
        labelTitle->setSizePolicy(sizePolicy1);
        labelTitle->setStyleSheet(QStringLiteral("font-size: 20px;"));

        horizontalLayout->addWidget(labelTitle);


        verticalLayout->addLayout(horizontalLayout);

        line = new QFrame(RewardSetting);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        widget = new QWidget(RewardSetting);
        widget->setObjectName(QStringLiteral("widget"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy2);
        verticalLayout_4 = new QVBoxLayout(widget);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        splitter = new QSplitter(widget);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        verticalLayoutWidget = new QWidget(splitter);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        tableExchange = new LibGUI::TableWidget(verticalLayoutWidget);
        tableExchange->setObjectName(QStringLiteral("tableExchange"));
        sizePolicy2.setHeightForWidth(tableExchange->sizePolicy().hasHeightForWidth());
        tableExchange->setSizePolicy(sizePolicy2);

        verticalLayout_2->addWidget(tableExchange);

        splitter->addWidget(verticalLayoutWidget);
        verticalLayoutWidget_2 = new QWidget(splitter);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(verticalLayoutWidget_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_3->addWidget(label_3);

        tablePoin = new LibGUI::TableWidget(verticalLayoutWidget_2);
        tablePoin->setObjectName(QStringLiteral("tablePoin"));
        sizePolicy2.setHeightForWidth(tablePoin->sizePolicy().hasHeightForWidth());
        tablePoin->setSizePolicy(sizePolicy2);

        verticalLayout_3->addWidget(tablePoin);

        splitter->addWidget(verticalLayoutWidget_2);

        verticalLayout_4->addWidget(splitter);


        verticalLayout->addWidget(widget);


        retranslateUi(RewardSetting);

        QMetaObject::connectSlotsByName(RewardSetting);
    } // setupUi

    void retranslateUi(QWidget *RewardSetting)
    {
        RewardSetting->setWindowTitle(QApplication::translate("RewardSetting", "Form", 0));
        label->setText(QString());
        labelTitle->setText(QApplication::translate("RewardSetting", "Reward Setting", 0));
        label_2->setText(QApplication::translate("RewardSetting", "Reward Exchange", 0));
        label_3->setText(QApplication::translate("RewardSetting", "Reward Poin", 0));
    } // retranslateUi

};

namespace Ui {
    class RewardSetting: public Ui_RewardSetting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REWARDSETTING_H
