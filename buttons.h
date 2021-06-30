#ifndef BUTTONS_H
#define BUTTONS_H

#include <QDialog>
#include"stock.h"
#include"employee_info.h"

namespace Ui {
class Buttons;
}

class Buttons : public QDialog
{
    Q_OBJECT

public:
    explicit Buttons(QWidget *parent = nullptr);
    ~Buttons();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Buttons *ui;
};

#endif // BUTTONS_H
