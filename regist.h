#ifndef REGIST_H
#define REGIST_H

#include <QWidget>
#include"widget.h"
#include<QSqlDatabase>
#include<QSqlQuery>
#include<QSqlError>
#include<QDebug>


namespace Ui {
class regist;
}

class regist : public QWidget
{
    Q_OBJECT

public:
    explicit regist(QWidget *parent = nullptr);
    ~regist();
    void registered();

private slots:
    void on_registerPushButton_clicked();

    void on_back_regsPushButton_clicked();

private:
    Ui::regist *ui;
    QSqlDatabase db_regis;

};

#endif // REGIST_H
