#ifndef LOGIN_FORM_H
#define LOGIN_FORM_H
#include <QMainWindow>
#include<QtSql>
#include<QtDebug>
#include<QFileInfo>
namespace Ui {
class Login_form;
}

class Login_form : public QMainWindow
{
    Q_OBJECT

public:
    explicit Login_form(QWidget *parent = nullptr);
    ~Login_form();

private:
    Ui::Login_form *ui;
};

#endif // LOGIN_FORM_H
