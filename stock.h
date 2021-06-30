#ifndef STOCK_H
#define STOCK_H

#include <QDialog>
#include<QtSql>
#include<QtDebug>
#include<QFileInfo>
#include "employee_info.h"

namespace Ui {
class Stock;
}

class Stock : public QDialog
{
    Q_OBJECT

public:
    explicit Stock(QWidget *parent = nullptr);
    ~Stock();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Stock *ui;
     QSqlDatabase mydb4;
};

#endif // STOCK_H
