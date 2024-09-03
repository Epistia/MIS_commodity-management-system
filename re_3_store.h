#ifndef RE_3_STORE_H
#define RE_3_STORE_H

#include <QWidget>
#include<QSqlDatabase>
#include<QMessageBox>
#include<QSqlQuery>
#include<QSqlError>
#include<QSqlTableModel>

namespace Ui {
class re_3_store;
}

class re_3_store : public QWidget
{
    Q_OBJECT

public:
    QSqlDatabase db_3;
    QSqlQuery *m_3;
    QSqlTableModel * t_3;

    explicit re_3_store(QWidget *parent = nullptr);
    ~re_3_store();
    void destroy(int number);
    void indexByquantity(int quantity);
    void indexBytime(QString time);

private slots:

    void on_destroy_pbtn_clicked();

    void on_indexbyquantity_pbtn_clicked();

    void on_indexbytime_pbtn_clicked();

private:
    Ui::re_3_store *ui;

};

#endif // RE_3_STORE_H
