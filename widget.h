#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include<QPushButton>
#include"regist.h"
#include"mainwindow.h"
#include<QSqlDatabase>
#include<QSqlQuery>
#include<QSqlQueryModel>
#include<QMessageBox>
#include<QSqlError>

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
    void turnwindow();

private slots:
    void on_loginPushButton_clicked();

    void on_registeredPushButton_clicked();

    void on_backPushButton_clicked();

    void on_showcheckBox_clicked(bool checked);

private:
    Ui::Widget *ui;
    QSqlDatabase db;
    QSqlQueryModel*m;
};
#endif // WIDGET_H
