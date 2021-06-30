/********************************************************************************
** Form generated from reading UI file 'employee_info.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMPLOYEE_INFO_H
#define UI_EMPLOYEE_INFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Employee_info
{
public:
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QLineEdit *lineEdit_3_name;
    QLabel *label_4;
    QLineEdit *lineEdit_4_Con;
    QLabel *label;
    QLineEdit *lineEdit_city;
    QLabel *label_2;
    QLineEdit *lineEdit_2_cnic;
    QPushButton *pushButton;
    QLabel *label_5;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QDialog *Employee_info)
    {
        if (Employee_info->objectName().isEmpty())
            Employee_info->setObjectName(QString::fromUtf8("Employee_info"));
        Employee_info->resize(702, 411);
        groupBox = new QGroupBox(Employee_info);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 20, 153, 207));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        lineEdit_3_name = new QLineEdit(groupBox);
        lineEdit_3_name->setObjectName(QString::fromUtf8("lineEdit_3_name"));

        verticalLayout->addWidget(lineEdit_3_name);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);

        lineEdit_4_Con = new QLineEdit(groupBox);
        lineEdit_4_Con->setObjectName(QString::fromUtf8("lineEdit_4_Con"));

        verticalLayout->addWidget(lineEdit_4_Con);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        lineEdit_city = new QLineEdit(groupBox);
        lineEdit_city->setObjectName(QString::fromUtf8("lineEdit_city"));

        verticalLayout->addWidget(lineEdit_city);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        lineEdit_2_cnic = new QLineEdit(groupBox);
        lineEdit_2_cnic->setObjectName(QString::fromUtf8("lineEdit_2_cnic"));

        verticalLayout->addWidget(lineEdit_2_cnic);

        pushButton = new QPushButton(Employee_info);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(30, 250, 75, 23));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        pushButton->setFont(font);
        label_5 = new QLabel(Employee_info);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(40, 300, 161, 16));
        pushButton_2 = new QPushButton(Employee_info);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(120, 250, 75, 23));
        pushButton_2->setFont(font);
        pushButton_3 = new QPushButton(Employee_info);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(210, 250, 75, 23));
        pushButton_3->setFont(font);

        retranslateUi(Employee_info);

        QMetaObject::connectSlotsByName(Employee_info);
    } // setupUi

    void retranslateUi(QDialog *Employee_info)
    {
        Employee_info->setWindowTitle(QApplication::translate("Employee_info", "Dialog", nullptr));
        groupBox->setTitle(QApplication::translate("Employee_info", "Information", nullptr));
        label_3->setText(QApplication::translate("Employee_info", "Name", nullptr));
        label_4->setText(QApplication::translate("Employee_info", "Contact", nullptr));
        label->setText(QApplication::translate("Employee_info", "City", nullptr));
        label_2->setText(QApplication::translate("Employee_info", "CNIC", nullptr));
        pushButton->setText(QApplication::translate("Employee_info", "Save", nullptr));
        label_5->setText(QApplication::translate("Employee_info", "Status1", nullptr));
        pushButton_2->setText(QApplication::translate("Employee_info", "Update", nullptr));
        pushButton_3->setText(QApplication::translate("Employee_info", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Employee_info: public Ui_Employee_info {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMPLOYEE_INFO_H
