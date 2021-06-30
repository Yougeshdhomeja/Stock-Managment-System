#ifndef ADD_H
#define ADD_H

#include <QDialog>
#include<QtSql>
#include<QtDebug>
#include<QFileInfo>
#include "login_form.h"

namespace Ui {
class Add;
}

class Add : public QDialog
{
    Q_OBJECT
public:

    explicit Add(QWidget *parent = nullptr);
    ~Add();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Add *ui;
    QSqlDatabase mydb2;
};

#endif // ADD_H
