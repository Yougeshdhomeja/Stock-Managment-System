/********************************************************************************
** Form generated from reading UI file 'buttons.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUTTONS_H
#define UI_BUTTONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Buttons
{
public:
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QDialog *Buttons)
    {
        if (Buttons->objectName().isEmpty())
            Buttons->setObjectName(QString::fromUtf8("Buttons"));
        Buttons->resize(412, 300);
        Buttons->setStyleSheet(QString::fromUtf8("#groupBox{\n"
"\n"
"background:rgb(170, 0, 0);\n"
"border-radius:8px;\n"
"\n"
"}"));
        groupBox = new QGroupBox(Buttons);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(9, 10, 401, 311));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        groupBox->setFont(font);
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setFont(font);

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        verticalLayout->addWidget(pushButton_3);


        retranslateUi(Buttons);

        QMetaObject::connectSlotsByName(Buttons);
    } // setupUi

    void retranslateUi(QDialog *Buttons)
    {
        Buttons->setWindowTitle(QApplication::translate("Buttons", "Dialog", nullptr));
        groupBox->setTitle(QApplication::translate("Buttons", "Management", nullptr));
        pushButton->setText(QApplication::translate("Buttons", "PRODUCTS-MANAGEMENT", nullptr));
        pushButton_2->setText(QApplication::translate("Buttons", "CUSTOMERS-ENTRY", nullptr));
        pushButton_3->setText(QApplication::translate("Buttons", "BILLING-DASHBOARD", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Buttons: public Ui_Buttons {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUTTONS_H
