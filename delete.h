#ifndef DELETE_H
#define DELETE_H
#include<QtSql>
#include<QtDebug>
#include<QFileInfo>
#include"login_form.h"

#include <QDialog>

namespace Ui {
class Delete;
}

class Delete : public QDialog
{
    Q_OBJECT

public:
    explicit Delete(QWidget *parent = nullptr);
    ~Delete();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Delete *ui;
    QSqlDatabase mydb3;
};

#endif // DELETE_H
