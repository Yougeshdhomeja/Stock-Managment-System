#ifndef EMPLOYEE_INFO_H
#define EMPLOYEE_INFO_H

#include <QDialog>
#include<QtSql>
#include<QtDebug>
#include<QFileInfo>

namespace Ui {
class Employee_info;
}

class Employee_info : public QDialog
{
    Q_OBJECT

public:


    explicit Employee_info(QWidget *parent = nullptr);
    ~Employee_info();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::Employee_info *ui;
     QSqlDatabase mydb1;
};

#endif // EMPLOYEE_INFO_H
