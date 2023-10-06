/********************************************************************************
** Form generated from reading UI file 'paginationwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGINATIONWIDGET_H
#define UI_PAGINATIONWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PaginationWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QSpinBox *spinPage;
    QLabel *label;
    QLabel *labelMax;
    QComboBox *comboPerPage;

    void setupUi(QWidget *PaginationWidget)
    {
        if (PaginationWidget->objectName().isEmpty())
            PaginationWidget->setObjectName(QStringLiteral("PaginationWidget"));
        PaginationWidget->resize(256, 44);
        horizontalLayout = new QHBoxLayout(PaginationWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        spinPage = new QSpinBox(PaginationWidget);
        spinPage->setObjectName(QStringLiteral("spinPage"));
        spinPage->setMinimum(1);
        spinPage->setMaximum(1);

        horizontalLayout->addWidget(spinPage);

        label = new QLabel(PaginationWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        labelMax = new QLabel(PaginationWidget);
        labelMax->setObjectName(QStringLiteral("labelMax"));

        horizontalLayout->addWidget(labelMax);

        comboPerPage = new QComboBox(PaginationWidget);
        comboPerPage->setObjectName(QStringLiteral("comboPerPage"));

        horizontalLayout->addWidget(comboPerPage);


        retranslateUi(PaginationWidget);

        QMetaObject::connectSlotsByName(PaginationWidget);
    } // setupUi

    void retranslateUi(QWidget *PaginationWidget)
    {
        PaginationWidget->setWindowTitle(QApplication::translate("PaginationWidget", "Form", 0));
        label->setText(QApplication::translate("PaginationWidget", "/", 0));
        labelMax->setText(QApplication::translate("PaginationWidget", "1", 0));
    } // retranslateUi

};

namespace Ui {
    class PaginationWidget: public Ui_PaginationWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGINATIONWIDGET_H
