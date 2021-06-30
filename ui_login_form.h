/********************************************************************************
** Form generated from reading UI file 'login_form.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_FORM_H
#define UI_LOGIN_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login_form
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QGroupBox *groupBox;
    QLabel *label_3;
    QLineEdit *lineEdit_password;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label_2;
    QLineEdit *lineEdit_username;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Login_form)
    {
        if (Login_form->objectName().isEmpty())
            Login_form->setObjectName(QString::fromUtf8("Login_form"));
        Login_form->resize(502, 398);
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        Login_form->setFont(font);
        Login_form->setStyleSheet(QString::fromUtf8("#centralWidget{\n"
"\n"
"border-image:url(:/image/images.jpg)\n"
"\n"
"}"));
        centralWidget = new QWidget(Login_form);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 220, 341, 21));
        label->setStyleSheet(QString::fromUtf8("#groupbox{\n"
"\n"
"background:rgb(255, 255, 0);\n"
"border-radius:8px;\n"
"\n"
"}"));
        label->setPixmap(QPixmap(QString::fromUtf8("../../../800px_COLOURBOX4593578.jpg")));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(0, 10, 231, 371));
        groupBox->setFont(font);
        groupBox->setStyleSheet(QString::fromUtf8("#groupBox{\n"
"\n"
"background:rgb(170, 0, 0);\n"
"border-radius:8px;\n"
"\n"
"}"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(9, 108, 171, 51));
        label_3->setFont(font);
        label_3->setFrameShadow(QFrame::Sunken);
        label_3->setWordWrap(false);
        lineEdit_password = new QLineEdit(groupBox);
        lineEdit_password->setObjectName(QString::fromUtf8("lineEdit_password"));
        lineEdit_password->setGeometry(QRect(9, 170, 201, 31));
        lineEdit_password->setMaxLength(32776);
        lineEdit_password->setEchoMode(QLineEdit::Password);
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(20, 220, 75, 31));
        pushButton->setFont(font);
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(110, 220, 84, 31));
        pushButton_2->setFont(font);
        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(70, 270, 75, 31));
        pushButton_3->setFont(font);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(9, 29, 131, 41));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("#groupBox{\n"
"background:rgb(255, 0, 0);\n"
"border-radius:8px;\n"
"\n"
"\n"
"}"));
        lineEdit_username = new QLineEdit(groupBox);
        lineEdit_username->setObjectName(QString::fromUtf8("lineEdit_username"));
        lineEdit_username->setGeometry(QRect(9, 82, 201, 31));
        Login_form->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(Login_form);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Login_form->setStatusBar(statusBar);
        QWidget::setTabOrder(pushButton_3, lineEdit_password);
        QWidget::setTabOrder(lineEdit_password, pushButton);
        QWidget::setTabOrder(pushButton, pushButton_2);

        retranslateUi(Login_form);

        QMetaObject::connectSlotsByName(Login_form);
    } // setupUi

    void retranslateUi(QMainWindow *Login_form)
    {
        Login_form->setWindowTitle(QApplication::translate("Login_form", "Login_form", nullptr));
        label->setText(QString());
        groupBox->setTitle(QApplication::translate("Login_form", "Sign-In", nullptr));
        label_3->setText(QApplication::translate("Login_form", "Password:", nullptr));
        pushButton->setText(QApplication::translate("Login_form", "Login", nullptr));
        pushButton_2->setText(QApplication::translate("Login_form", "Sign-Up", nullptr));
        pushButton_3->setText(QApplication::translate("Login_form", "Delete", nullptr));
        label_2->setText(QApplication::translate("Login_form", "Username:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login_form: public Ui_Login_form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_FORM_H
