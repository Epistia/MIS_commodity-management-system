/********************************************************************************
** Form generated from reading UI file 're_4_fina.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RE_4_FINA_H
#define UI_RE_4_FINA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_re_4_fina
{
public:
    QGridLayout *gridLayout_3;
    QTableView *tableView;
    QWidget *widget_2;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *re_4_fina)
    {
        if (re_4_fina->objectName().isEmpty())
            re_4_fina->setObjectName("re_4_fina");
        re_4_fina->resize(679, 507);
        gridLayout_3 = new QGridLayout(re_4_fina);
        gridLayout_3->setObjectName("gridLayout_3");
        tableView = new QTableView(re_4_fina);
        tableView->setObjectName("tableView");

        gridLayout_3->addWidget(tableView, 0, 1, 1, 2);

        widget_2 = new QWidget(re_4_fina);
        widget_2->setObjectName("widget_2");
        gridLayout_2 = new QGridLayout(widget_2);
        gridLayout_2->setObjectName("gridLayout_2");

        gridLayout_3->addWidget(widget_2, 1, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(321, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 1, 1, 1, 1);

        widget = new QWidget(re_4_fina);
        widget->setObjectName("widget");
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(248, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);


        gridLayout_3->addWidget(widget, 1, 2, 1, 1);


        retranslateUi(re_4_fina);

        QMetaObject::connectSlotsByName(re_4_fina);
    } // setupUi

    void retranslateUi(QWidget *re_4_fina)
    {
        re_4_fina->setWindowTitle(QCoreApplication::translate("re_4_fina", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("re_4_fina", "\350\264\242\345\212\241\346\237\245\350\257\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class re_4_fina: public Ui_re_4_fina {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RE_4_FINA_H
