/********************************************************************************
** Form generated from reading UI file 'tilewidget.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TILEWIDGET_H
#define UI_TILEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TileWidget
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QLabel *labelTitle;
    QLabel *labelValue;

    void setupUi(QWidget *TileWidget)
    {
        if (TileWidget->objectName().isEmpty())
            TileWidget->setObjectName(QStringLiteral("TileWidget"));
        TileWidget->resize(200, 111);
        TileWidget->setMinimumSize(QSize(150, 0));
        TileWidget->setMaximumSize(QSize(200, 16777215));
        TileWidget->setStyleSheet(QStringLiteral("border: 1px solid #ababab;"));
        verticalLayout = new QVBoxLayout(TileWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(TileWidget);
        widget->setObjectName(QStringLiteral("widget"));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        labelTitle = new QLabel(widget);
        labelTitle->setObjectName(QStringLiteral("labelTitle"));
        labelTitle->setStyleSheet(QStringLiteral("font-size: 10px;border: none;"));

        verticalLayout_2->addWidget(labelTitle);

        labelValue = new QLabel(widget);
        labelValue->setObjectName(QStringLiteral("labelValue"));
        labelValue->setStyleSheet(QStringLiteral("font-size: 20px;border: none;"));
        labelValue->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelValue->setMargin(5);

        verticalLayout_2->addWidget(labelValue);


        verticalLayout->addWidget(widget);


        retranslateUi(TileWidget);

        QMetaObject::connectSlotsByName(TileWidget);
    } // setupUi

    void retranslateUi(QWidget *TileWidget)
    {
        TileWidget->setWindowTitle(QApplication::translate("TileWidget", "Form", 0));
        labelTitle->setText(QApplication::translate("TileWidget", "Title", 0));
        labelValue->setText(QApplication::translate("TileWidget", "Value", 0));
    } // retranslateUi

};

namespace Ui {
    class TileWidget: public Ui_TileWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TILEWIDGET_H
