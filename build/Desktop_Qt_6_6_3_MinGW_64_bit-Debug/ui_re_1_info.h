/********************************************************************************
** Form generated from reading UI file 're_1_info.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RE_1_INFO_H
#define UI_RE_1_INFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_re_1_info
{
public:
    QGridLayout *gridLayout_4;
    QTableView *tableView;
    QWidget *widget;
    QGridLayout *gridLayout_3;
    QWidget *widget_3;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QLineEdit *idLineEdit;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *nameLineEdit;
    QLabel *label_3;
    QLineEdit *priceLineEdit;
    QWidget *widget_2;
    QGridLayout *gridLayout;
    QPushButton *inquire_pbtn;
    QPushButton *order_pbtn;
    QPushButton *store_pbtn;
    QPushButton *agjust_pbtn;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *re_1_info)
    {
        if (re_1_info->objectName().isEmpty())
            re_1_info->setObjectName("re_1_info");
        re_1_info->resize(528, 511);
        gridLayout_4 = new QGridLayout(re_1_info);
        gridLayout_4->setObjectName("gridLayout_4");
        tableView = new QTableView(re_1_info);
        tableView->setObjectName("tableView");

        gridLayout_4->addWidget(tableView, 1, 0, 1, 1);

        widget = new QWidget(re_1_info);
        widget->setObjectName("widget");
        gridLayout_3 = new QGridLayout(widget);
        gridLayout_3->setObjectName("gridLayout_3");
        widget_3 = new QWidget(widget);
        widget_3->setObjectName("widget_3");
        gridLayout_2 = new QGridLayout(widget_3);
        gridLayout_2->setObjectName("gridLayout_2");
        label = new QLabel(widget_3);
        label->setObjectName("label");

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        idLineEdit = new QLineEdit(widget_3);
        idLineEdit->setObjectName("idLineEdit");

        gridLayout_2->addWidget(idLineEdit, 0, 1, 1, 1);

        label_4 = new QLabel(widget_3);
        label_4->setObjectName("label_4");

        gridLayout_2->addWidget(label_4, 0, 2, 1, 1);

        lineEdit = new QLineEdit(widget_3);
        lineEdit->setObjectName("lineEdit");

        gridLayout_2->addWidget(lineEdit, 0, 3, 1, 1);

        label_2 = new QLabel(widget_3);
        label_2->setObjectName("label_2");

        gridLayout_2->addWidget(label_2, 0, 4, 1, 1);

        nameLineEdit = new QLineEdit(widget_3);
        nameLineEdit->setObjectName("nameLineEdit");

        gridLayout_2->addWidget(nameLineEdit, 0, 5, 1, 1);

        label_3 = new QLabel(widget_3);
        label_3->setObjectName("label_3");

        gridLayout_2->addWidget(label_3, 0, 6, 1, 1);

        priceLineEdit = new QLineEdit(widget_3);
        priceLineEdit->setObjectName("priceLineEdit");

        gridLayout_2->addWidget(priceLineEdit, 0, 7, 1, 1);


        gridLayout_3->addWidget(widget_3, 0, 0, 1, 1);

        widget_2 = new QWidget(widget);
        widget_2->setObjectName("widget_2");
        gridLayout = new QGridLayout(widget_2);
        gridLayout->setObjectName("gridLayout");
        inquire_pbtn = new QPushButton(widget_2);
        inquire_pbtn->setObjectName("inquire_pbtn");

        gridLayout->addWidget(inquire_pbtn, 0, 0, 1, 1);

        order_pbtn = new QPushButton(widget_2);
        order_pbtn->setObjectName("order_pbtn");

        gridLayout->addWidget(order_pbtn, 0, 1, 1, 1);

        store_pbtn = new QPushButton(widget_2);
        store_pbtn->setObjectName("store_pbtn");

        gridLayout->addWidget(store_pbtn, 0, 2, 1, 1);

        agjust_pbtn = new QPushButton(widget_2);
        agjust_pbtn->setObjectName("agjust_pbtn");

        gridLayout->addWidget(agjust_pbtn, 0, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(168, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 4, 1, 1);


        gridLayout_3->addWidget(widget_2, 1, 0, 1, 1);


        gridLayout_4->addWidget(widget, 0, 0, 1, 1);


        retranslateUi(re_1_info);

        QMetaObject::connectSlotsByName(re_1_info);
    } // setupUi

    void retranslateUi(QWidget *re_1_info)
    {
        re_1_info->setWindowTitle(QCoreApplication::translate("re_1_info", "\345\225\206\345\223\201\344\277\241\346\201\257", nullptr));
        label->setText(QCoreApplication::translate("re_1_info", " *\345\225\206\345\223\201ID:", nullptr));
        label_4->setText(QCoreApplication::translate("re_1_info", "\350\260\203\346\225\264\345\224\256\344\273\267\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("re_1_info", "\346\232\202\345\256\232", nullptr));
        label_3->setText(QCoreApplication::translate("re_1_info", "\346\232\202\345\256\232", nullptr));
        inquire_pbtn->setText(QCoreApplication::translate("re_1_info", "\344\270\200\351\224\256\346\237\245\350\257\242", nullptr));
        order_pbtn->setText(QCoreApplication::translate("re_1_info", "\350\256\242\345\215\225\346\237\245\350\257\242", nullptr));
        store_pbtn->setText(QCoreApplication::translate("re_1_info", "\345\272\223\345\255\230\347\212\266\346\200\201", nullptr));
        agjust_pbtn->setText(QCoreApplication::translate("re_1_info", "\350\260\203\346\225\264\345\224\256\344\273\267", nullptr));
    } // retranslateUi

};

namespace Ui {
    class re_1_info: public Ui_re_1_info {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RE_1_INFO_H
