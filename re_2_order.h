#ifndef RE_2_ORDER_H
#define RE_2_ORDER_H

#include <QWidget>
#include<QSqlDatabase>
#include<QMessageBox>
#include<QSqlQuery>
#include<QSqlError>
#include<QSqlTableModel>
#include<QString>

namespace Ui {
class re_2_order;
}

class re_2_order : public QWidget
{
    Q_OBJECT

public:

    QSqlDatabase db_2;
    QSqlQuery *m_2;
    QSqlTableModel * t_2;
    explicit re_2_order(QWidget *parent = nullptr);
    ~re_2_order();
    void purchase();
    void sell();
    int getTruequantity(int number);

private slots:

    void on_order_pbtn_clicked();

    void on_but_pbtn_clicked();

    void on_sale_pbtn_clicked();

    void on_out_pbtn_clicked();

private:
    Ui::re_2_order *ui;

};

#endif // RE_2_ORDER_H
