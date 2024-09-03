/********************************************************************************
** Form generated from reading UI file 're_2_order.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RE_2_ORDER_H
#define UI_RE_2_ORDER_H

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

class Ui_re_2_order
{
public:
    QGridLayout *gridLayout_4;
    QWidget *widget;
    QGridLayout *gridLayout_3;
    QWidget *widget_3;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QLineEdit *idLineEdit;
    QLabel *label_5;
    QLineEdit *nameLineEdit;
    QLabel *label_2;
    QLineEdit *quantityLineEdit;
    QLabel *label_3;
    QLineEdit *purchacepriceLineEdit;
    QLabel *label_6;
    QLineEdit *sellinglineEdit;
    QLabel *label_4;
    QLineEdit *offerLineEdit;
    QLabel *label_7;
    QLineEdit *shelflifelineEdit;
    QLabel *label_8;
    QLineEdit *timelineEdit;
    QWidget *widget_2;
    QGridLayout *gridLayout;
    QPushButton *sale_pbtn;
    QPushButton *out_pbtn;
    QPushButton *but_pbtn;
    QPushButton *order_pbtn;
    QSpacerItem *horizontalSpacer;
    QTableView *tableView;

    void setupUi(QWidget *re_2_order)
    {
        if (re_2_order->objectName().isEmpty())
            re_2_order->setObjectName("re_2_order");
        re_2_order->resize(546, 632);
        gridLayout_4 = new QGridLayout(re_2_order);
        gridLayout_4->setObjectName("gridLayout_4");
        widget = new QWidget(re_2_order);
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

        gridLayout_2->addWidget(idLineEdit, 0, 1, 1, 2);

        label_5 = new QLabel(widget_3);
        label_5->setObjectName("label_5");

        gridLayout_2->addWidget(label_5, 0, 3, 1, 1);

        nameLineEdit = new QLineEdit(widget_3);
        nameLineEdit->setObjectName("nameLineEdit");

        gridLayout_2->addWidget(nameLineEdit, 0, 4, 1, 2);

        label_2 = new QLabel(widget_3);
        label_2->setObjectName("label_2");

        gridLayout_2->addWidget(label_2, 0, 6, 1, 1);

        quantityLineEdit = new QLineEdit(widget_3);
        quantityLineEdit->setObjectName("quantityLineEdit");

        gridLayout_2->addWidget(quantityLineEdit, 0, 7, 1, 2);

        label_3 = new QLabel(widget_3);
        label_3->setObjectName("label_3");

        gridLayout_2->addWidget(label_3, 0, 9, 1, 1);

        purchacepriceLineEdit = new QLineEdit(widget_3);
        purchacepriceLineEdit->setObjectName("purchacepriceLineEdit");

        gridLayout_2->addWidget(purchacepriceLineEdit, 0, 10, 1, 2);

        label_6 = new QLabel(widget_3);
        label_6->setObjectName("label_6");

        gridLayout_2->addWidget(label_6, 1, 0, 1, 2);

        sellinglineEdit = new QLineEdit(widget_3);
        sellinglineEdit->setObjectName("sellinglineEdit");

        gridLayout_2->addWidget(sellinglineEdit, 1, 2, 1, 1);

        label_4 = new QLabel(widget_3);
        label_4->setObjectName("label_4");

        gridLayout_2->addWidget(label_4, 1, 4, 1, 1);

        offerLineEdit = new QLineEdit(widget_3);
        offerLineEdit->setObjectName("offerLineEdit");

        gridLayout_2->addWidget(offerLineEdit, 1, 5, 1, 3);

        label_7 = new QLabel(widget_3);
        label_7->setObjectName("label_7");

        gridLayout_2->addWidget(label_7, 1, 8, 1, 1);

        shelflifelineEdit = new QLineEdit(widget_3);
        shelflifelineEdit->setObjectName("shelflifelineEdit");

        gridLayout_2->addWidget(shelflifelineEdit, 1, 9, 1, 2);

        label_8 = new QLabel(widget_3);
        label_8->setObjectName("label_8");

        gridLayout_2->addWidget(label_8, 1, 11, 1, 1);

        timelineEdit = new QLineEdit(widget_3);
        timelineEdit->setObjectName("timelineEdit");

        gridLayout_2->addWidget(timelineEdit, 1, 12, 1, 1);


        gridLayout_3->addWidget(widget_3, 0, 0, 1, 1);


        gridLayout_4->addWidget(widget, 0, 0, 1, 1);

        widget_2 = new QWidget(re_2_order);
        widget_2->setObjectName("widget_2");
        gridLayout = new QGridLayout(widget_2);
        gridLayout->setObjectName("gridLayout");
        sale_pbtn = new QPushButton(widget_2);
        sale_pbtn->setObjectName("sale_pbtn");

        gridLayout->addWidget(sale_pbtn, 0, 1, 1, 1);

        out_pbtn = new QPushButton(widget_2);
        out_pbtn->setObjectName("out_pbtn");

        gridLayout->addWidget(out_pbtn, 0, 2, 1, 1);

        but_pbtn = new QPushButton(widget_2);
        but_pbtn->setObjectName("but_pbtn");

        gridLayout->addWidget(but_pbtn, 0, 3, 1, 1);

        order_pbtn = new QPushButton(widget_2);
        order_pbtn->setObjectName("order_pbtn");

        gridLayout->addWidget(order_pbtn, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(237, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 4, 1, 1);


        gridLayout_4->addWidget(widget_2, 1, 0, 1, 1);

        tableView = new QTableView(re_2_order);
        tableView->setObjectName("tableView");

        gridLayout_4->addWidget(tableView, 2, 0, 1, 1);


        retranslateUi(re_2_order);

        QMetaObject::connectSlotsByName(re_2_order);
    } // setupUi

    void retranslateUi(QWidget *re_2_order)
    {
        re_2_order->setWindowTitle(QCoreApplication::translate("re_2_order", "Form", nullptr));
        label->setText(QCoreApplication::translate("re_2_order", "*\345\225\206\345\223\201ID:", nullptr));
        label_5->setText(QCoreApplication::translate("re_2_order", "\345\220\215\347\247\260\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("re_2_order", "\346\225\260\351\207\217\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("re_2_order", "\350\277\233\344\273\267\357\274\232", nullptr));
        label_6->setText(QCoreApplication::translate("re_2_order", "\350\256\241\345\210\222\345\224\256\344\273\267\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("re_2_order", "\344\276\233\345\272\224\345\225\206\357\274\232", nullptr));
        label_7->setText(QCoreApplication::translate("re_2_order", "\344\277\235\350\264\250\346\234\237\357\274\232", nullptr));
        label_8->setText(QCoreApplication::translate("re_2_order", "\346\227\266\351\227\264\357\274\232", nullptr));
        sale_pbtn->setText(QCoreApplication::translate("re_2_order", "\346\232\202\345\256\232", nullptr));
        out_pbtn->setText(QCoreApplication::translate("re_2_order", "\345\207\272\345\224\256", nullptr));
        but_pbtn->setText(QCoreApplication::translate("re_2_order", "\350\277\233\350\264\247", nullptr));
        order_pbtn->setText(QCoreApplication::translate("re_2_order", "\350\256\242\345\215\225\347\212\266\346\200\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class re_2_order: public Ui_re_2_order {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RE_2_ORDER_H
