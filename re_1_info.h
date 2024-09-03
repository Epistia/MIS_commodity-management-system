#ifndef RE_1_INFO_H
#define RE_1_INFO_H

#include <QWidget>
#include<QSqlDatabase>
#include<QMessageBox>
#include<QSqlQuery>
#include<QSqlError>
#include<QSqlTableModel>
#include<QDebug>

namespace Ui {
class re_1_info;
}

class re_1_info : public QWidget
{
    Q_OBJECT

public:

    QSqlDatabase db_1;
    QSqlQuery *m_1;
    QSqlTableModel * t_1;

    explicit re_1_info(QWidget *parent = nullptr);
    ~re_1_info();
    void updatesellingprice(QString id,QString sellingprice);

    void indexBysell(QString price);
    void indexByname(QString name);

private slots:

    void on_inquire_pbtn_clicked();

    void on_agjust_pbtn_clicked();

    void on_index_sellpbtn_clicked();

    void on_index_namepbtn_clicked();

private:
    Ui::re_1_info *ui;

};

#endif // RE_1_INFO_H
