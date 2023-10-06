/********************************************************************************
** Form generated from reading UI file 'itemwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ITEMWIDGET_H
#define UI_ITEMWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ItemWidget
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *label_2;
    QFrame *line;
    QVBoxLayout *verticalLayoutTop;

    void setupUi(QWidget *ItemWidget)
    {
        if (ItemWidget->objectName().isEmpty())
            ItemWidget->setObjectName(QStringLiteral("ItemWidget"));
        ItemWidget->resize(727, 587);
        verticalLayout_3 = new QVBoxLayout(ItemWidget);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 0, -1, -1);
        label = new QLabel(ItemWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/icon_32.png")));

        horizontalLayout->addWidget(label);

        label_2 = new QLabel(ItemWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setStyleSheet(QStringLiteral("font-size: 20px;"));

        horizontalLayout->addWidget(label_2);


        verticalLayout_3->addLayout(horizontalLayout);

        line = new QFrame(ItemWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line);

        verticalLayoutTop = new QVBoxLayout();
        verticalLayoutTop->setObjectName(QStringLiteral("verticalLayoutTop"));

        verticalLayout_3->addLayout(verticalLayoutTop);


        retranslateUi(ItemWidget);

        QMetaObject::connectSlotsByName(ItemWidget);
    } // setupUi

    void retranslateUi(QWidget *ItemWidget)
    {
        ItemWidget->setWindowTitle(QApplication::translate("ItemWidget", "Form", 0));
        label->setText(QString());
        label_2->setText(QApplication::translate("ItemWidget", "Items", 0));
    } // retranslateUi

};

namespace Ui {
    class ItemWidget: public Ui_ItemWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ITEMWIDGET_H
