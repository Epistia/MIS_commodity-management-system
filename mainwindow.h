#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>
#include<re_1_info.h>
#include<re_2_order.h>
#include<re_3_store.h>
#include<re_4_fina.h>

namespace Ui {
class mainwindow;
}

class mainwindow : public QWidget
{
    Q_OBJECT

public:
    explicit mainwindow(QWidget *parent = nullptr);
    ~mainwindow();
    void initPage();
    void change();


private:
    Ui::mainwindow *ui;
    re_1_info *page1;
    re_2_order *page2;
    re_3_store *page3;
    re_4_fina *page4;
};

#endif // MAINWINDOW_H
