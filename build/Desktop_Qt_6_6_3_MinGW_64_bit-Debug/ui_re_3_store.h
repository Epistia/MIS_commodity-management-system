/********************************************************************************
** Form generated from reading UI file 're_3_store.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RE_3_STORE_H
#define UI_RE_3_STORE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_re_3_store
{
public:
    QGridLayout *gridLayout_2;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QPushButton *situation_pbtn;
    QPushButton *submit_pbtn;
    QTableView *tableView;

    void setupUi(QWidget *re_3_store)
    {
        if (re_3_store->objectName().isEmpty())
            re_3_store->setObjectName("re_3_store");
        re_3_store->resize(649, 641);
        gridLayout_2 = new QGridLayout(re_3_store);
        gridLayout_2->setObjectName("gridLayout_2");
        widget = new QWidget(re_3_store);
        widget->setObjectName("widget");
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(widget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName("lineEdit");

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 0, 2, 1, 1);

        lineEdit_2 = new QLineEdit(widget);
        lineEdit_2->setObjectName("lineEdit_2");

        gridLayout->addWidget(lineEdit_2, 0, 3, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 0, 4, 1, 1);

        lineEdit_3 = new QLineEdit(widget);
        lineEdit_3->setObjectName("lineEdit_3");

        gridLayout->addWidget(lineEdit_3, 0, 5, 1, 1);

        situation_pbtn = new QPushButton(widget);
        situation_pbtn->setObjectName("situation_pbtn");

        gridLayout->addWidget(situation_pbtn, 1, 2, 1, 2);

        submit_pbtn = new QPushButton(widget);
        submit_pbtn->setObjectName("submit_pbtn");

        gridLayout->addWidget(submit_pbtn, 1, 4, 1, 2);


        gridLayout_2->addWidget(widget, 0, 0, 1, 1);

        tableView = new QTableView(re_3_store);
        tableView->setObjectName("tableView");

        gridLayout_2->addWidget(tableView, 1, 0, 1, 1);


        retranslateUi(re_3_store);

        QMetaObject::connectSlotsByName(re_3_store);
    } // setupUi

    void retranslateUi(QWidget *re_3_store)
    {
        re_3_store->setWindowTitle(QCoreApplication::translate("re_3_store", "Form", nullptr));
        label->setText(QCoreApplication::translate("re_3_store", "\345\225\206\345\223\201\347\274\226\345\217\267\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("re_3_store", "\346\232\202\345\256\232", nullptr));
        label_3->setText(QCoreApplication::translate("re_3_store", "\346\232\202\345\256\232", nullptr));
        situation_pbtn->setText(QCoreApplication::translate("re_3_store", "\345\272\223\345\255\230\347\212\266\346\200\201", nullptr));
        submit_pbtn->setText(QCoreApplication::translate("re_3_store", "\351\224\200\346\257\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class re_3_store: public Ui_re_3_store {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RE_3_STORE_H
