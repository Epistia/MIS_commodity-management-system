#ifndef RE_4_FINA_H
#define RE_4_FINA_H

#include <QWidget>
#include<QSqlDatabase>
#include<QMessageBox>
#include<QSqlQuery>
#include<QSqlError>
#include<QSqlTableModel>
#include<QDebug>

namespace Ui {
class re_4_fina;
}

class re_4_fina : public QWidget
{
    Q_OBJECT

public:
    QSqlDatabase db_4;
    QSqlQuery *m_4;
    QSqlTableModel * t_4;

    explicit re_4_fina(QWidget *parent = nullptr);
    ~re_4_fina();
    void indexByname(QString name);
    void getIncome(int number);
    void getProfit(int number);

private slots:
    void on_indexname_pbtn_clicked();

    void on_indexforall_pbtn_clicked();

    void on_income_pbtn_clicked();

    void on_profit_pbtn_clicked();

private:
    Ui::re_4_fina *ui;

};

#endif // RE_4_FINA_H
