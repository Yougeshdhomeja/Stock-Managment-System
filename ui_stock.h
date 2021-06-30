/********************************************************************************
** Form generated from reading UI file 'stock.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STOCK_H
#define UI_STOCK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Stock
{
public:
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *lineEdit_ProductID;
    QLabel *label_2;
    QLineEdit *lineEdit_ProductName;
    QLabel *label_3;
    QLineEdit *lineEdit_ProductCompany;
    QLabel *label_4;
    QLineEdit *lineEdit_Productcostprice;
    QLabel *label_5;
    QLineEdit *lineEdit_Productbarcode;
    QLabel *label_6;
    QLineEdit *lineEdit_Quantity;
    QLabel *label_7;
    QLineEdit *lineEdit_ProductSP;
    QPushButton *pushButton;

    void setupUi(QDialog *Stock)
    {
        if (Stock->objectName().isEmpty())
            Stock->setObjectName(QString::fromUtf8("Stock"));
        Stock->resize(210, 502);
        Stock->setStyleSheet(QString::fromUtf8("#groupBox{\n"
"\n"
"background:rgb(170, 0, 0);\n"
"border-radius:8px;\n"
"\n"
"}"));
        groupBox = new QGroupBox(Stock);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 0, 201, 501));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        groupBox->setFont(font);
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("#groupBox{\n"
"\n"
"background:rgb(170, 0, 0);\n"
"border-radius:8px;\n"
"\n"
"}"));

        verticalLayout->addWidget(label);

        lineEdit_ProductID = new QLineEdit(groupBox);
        lineEdit_ProductID->setObjectName(QString::fromUtf8("lineEdit_ProductID"));

        verticalLayout->addWidget(lineEdit_ProductID);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        verticalLayout->addWidget(label_2);

        lineEdit_ProductName = new QLineEdit(groupBox);
        lineEdit_ProductName->setObjectName(QString::fromUtf8("lineEdit_ProductName"));

        verticalLayout->addWidget(lineEdit_ProductName);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        verticalLayout->addWidget(label_3);

        lineEdit_ProductCompany = new QLineEdit(groupBox);
        lineEdit_ProductCompany->setObjectName(QString::fromUtf8("lineEdit_ProductCompany"));

        verticalLayout->addWidget(lineEdit_ProductCompany);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        verticalLayout->addWidget(label_4);

        lineEdit_Productcostprice = new QLineEdit(groupBox);
        lineEdit_Productcostprice->setObjectName(QString::fromUtf8("lineEdit_Productcostprice"));

        verticalLayout->addWidget(lineEdit_Productcostprice);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        verticalLayout->addWidget(label_5);

        lineEdit_Productbarcode = new QLineEdit(groupBox);
        lineEdit_Productbarcode->setObjectName(QString::fromUtf8("lineEdit_Productbarcode"));

        verticalLayout->addWidget(lineEdit_Productbarcode);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);

        verticalLayout->addWidget(label_6);

        lineEdit_Quantity = new QLineEdit(groupBox);
        lineEdit_Quantity->setObjectName(QString::fromUtf8("lineEdit_Quantity"));

        verticalLayout->addWidget(lineEdit_Quantity);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font);

        verticalLayout->addWidget(label_7);

        lineEdit_ProductSP = new QLineEdit(groupBox);
        lineEdit_ProductSP->setObjectName(QString::fromUtf8("lineEdit_ProductSP"));

        verticalLayout->addWidget(lineEdit_ProductSP);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setFont(font);

        verticalLayout->addWidget(pushButton);


        retranslateUi(Stock);

        QMetaObject::connectSlotsByName(Stock);
    } // setupUi

    void retranslateUi(QDialog *Stock)
    {
        Stock->setWindowTitle(QApplication::translate("Stock", "Dialog", nullptr));
        groupBox->setTitle(QApplication::translate("Stock", "Products-Management", nullptr));
        label->setText(QApplication::translate("Stock", "Product-ID", nullptr));
        label_2->setText(QApplication::translate("Stock", "Product-Name ", nullptr));
        label_3->setText(QApplication::translate("Stock", "Product-Company", nullptr));
        label_4->setText(QApplication::translate("Stock", "Product-Costprice", nullptr));
        label_5->setText(QApplication::translate("Stock", "Product-Barcode", nullptr));
        label_6->setText(QApplication::translate("Stock", "Quantity", nullptr));
        label_7->setText(QApplication::translate("Stock", "Product-Sell-Price", nullptr));
        pushButton->setText(QApplication::translate("Stock", "Add Item", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Stock: public Ui_Stock {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STOCK_H
