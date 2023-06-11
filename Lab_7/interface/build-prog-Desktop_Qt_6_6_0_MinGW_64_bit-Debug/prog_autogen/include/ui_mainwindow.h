/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *clearBut;
    QPushButton *countBut;
    QLineEdit *m1Value;
    QLineEdit *x1Value;
    QLineEdit *n1Value;
    QLabel *labelX1;
    QLabel *labelN1;
    QLabel *labelM1;
    QLabel *labelX2;
    QLineEdit *x2Value;
    QLineEdit *n2Value;
    QLabel *labelN2;
    QLabel *labelM2;
    QLineEdit *m2Value;
    QLabel *labelIMG;
    QLabel *labelResult;
    QLabel *labelResultValue;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(700, 400);
        MainWindow->setMinimumSize(QSize(700, 400));
        MainWindow->setMaximumSize(QSize(700, 400));
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: #e9edf0;"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        clearBut = new QPushButton(centralwidget);
        clearBut->setObjectName("clearBut");
        clearBut->setGeometry(QRect(520, 300, 120, 40));
        clearBut->setStyleSheet(QString::fromUtf8("background-color: rgb(28, 78, 116);\n"
"font: 700 16pt \"Times New Roman\";\n"
"color: #e9edf0;\n"
"border: 3px solid #184161;\n"
"border-radius: 10px;"));
        countBut = new QPushButton(centralwidget);
        countBut->setObjectName("countBut");
        countBut->setGeometry(QRect(520, 240, 120, 40));
        countBut->setStyleSheet(QString::fromUtf8("background-color: rgb(28, 78, 116);\n"
"font: 700 16pt \"Times New Roman\";\n"
"color: #e9edf0;\n"
"border: 3px solid #184161;\n"
"border-radius: 10px;"));
        m1Value = new QLineEdit(centralwidget);
        m1Value->setObjectName("m1Value");
        m1Value->setGeometry(QRect(315, 50, 130, 40));
        m1Value->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Times New Roman\";\n"
"background-color: rgb(138, 187, 226);\n"
"border-radius: 10px;"));
        x1Value = new QLineEdit(centralwidget);
        x1Value->setObjectName("x1Value");
        x1Value->setGeometry(QRect(35, 50, 130, 40));
        x1Value->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Times New Roman\";\n"
"background-color: rgb(138, 187, 226);\n"
"border-radius: 10px;\n"
"border-color: rgb(28, 78, 116);"));
        n1Value = new QLineEdit(centralwidget);
        n1Value->setObjectName("n1Value");
        n1Value->setGeometry(QRect(175, 50, 130, 40));
        n1Value->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Times New Roman\";\n"
"background-color: rgb(138, 187, 226);\n"
"border-radius: 10px;"));
        labelX1 = new QLabel(centralwidget);
        labelX1->setObjectName("labelX1");
        labelX1->setGeometry(QRect(90, 20, 20, 20));
        labelX1->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Times New Roman\";\n"
"color: rgb(0, 0, 0);"));
        labelN1 = new QLabel(centralwidget);
        labelN1->setObjectName("labelN1");
        labelN1->setGeometry(QRect(230, 20, 20, 20));
        labelN1->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Times New Roman\";\n"
"color: rgb(0, 0, 0);"));
        labelM1 = new QLabel(centralwidget);
        labelM1->setObjectName("labelM1");
        labelM1->setGeometry(QRect(370, 20, 20, 20));
        labelM1->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Times New Roman\";\n"
"color: rgb(0, 0, 0);"));
        labelX2 = new QLabel(centralwidget);
        labelX2->setObjectName("labelX2");
        labelX2->setGeometry(QRect(90, 100, 20, 20));
        labelX2->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Times New Roman\";\n"
"color: rgb(0, 0, 0);"));
        x2Value = new QLineEdit(centralwidget);
        x2Value->setObjectName("x2Value");
        x2Value->setGeometry(QRect(35, 130, 130, 40));
        x2Value->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Times New Roman\";\n"
"background-color: rgb(138, 187, 226);\n"
"border-radius: 10px;\n"
"border-color: rgb(28, 78, 116);"));
        n2Value = new QLineEdit(centralwidget);
        n2Value->setObjectName("n2Value");
        n2Value->setGeometry(QRect(175, 130, 130, 40));
        n2Value->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Times New Roman\";\n"
"background-color: rgb(138, 187, 226);\n"
"border-radius: 10px;\n"
"border-color: rgb(28, 78, 116);"));
        labelN2 = new QLabel(centralwidget);
        labelN2->setObjectName("labelN2");
        labelN2->setGeometry(QRect(230, 100, 20, 20));
        labelN2->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Times New Roman\";\n"
"color: rgb(0, 0, 0);"));
        labelM2 = new QLabel(centralwidget);
        labelM2->setObjectName("labelM2");
        labelM2->setGeometry(QRect(370, 100, 20, 20));
        labelM2->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Times New Roman\";\n"
"color: rgb(0, 0, 0);"));
        m2Value = new QLineEdit(centralwidget);
        m2Value->setObjectName("m2Value");
        m2Value->setGeometry(QRect(315, 130, 130, 40));
        m2Value->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Times New Roman\";\n"
"background-color: rgb(138, 187, 226);\n"
"border-radius: 10px;\n"
"border-color: rgb(28, 78, 116);"));
        labelIMG = new QLabel(centralwidget);
        labelIMG->setObjectName("labelIMG");
        labelIMG->setGeometry(QRect(510, 50, 151, 101));
        labelIMG->setStyleSheet(QString::fromUtf8("background-color: none;"));
        labelIMG->setPixmap(QPixmap(QString::fromUtf8("../image/Screenshot_1.png")));
        labelResult = new QLabel(centralwidget);
        labelResult->setObjectName("labelResult");
        labelResult->setGeometry(QRect(35, 310, 110, 20));
        labelResult->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 700 16pt \"Times New Roman\";"));
        labelResultValue = new QLabel(centralwidget);
        labelResultValue->setObjectName("labelResultValue");
        labelResultValue->setGeometry(QRect(160, 310, 170, 20));
        labelResultValue->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 700 16pt \"Times New Roman\";"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 700, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        clearBut->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        countBut->setText(QCoreApplication::translate("MainWindow", "Count", nullptr));
        x1Value->setText(QString());
        labelX1->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        labelN1->setText(QCoreApplication::translate("MainWindow", "N", nullptr));
        labelM1->setText(QCoreApplication::translate("MainWindow", "M", nullptr));
        labelX2->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        x2Value->setText(QString());
        labelN2->setText(QCoreApplication::translate("MainWindow", "N", nullptr));
        labelM2->setText(QCoreApplication::translate("MainWindow", "M", nullptr));
        labelIMG->setText(QString());
        labelResult->setText(QCoreApplication::translate("MainWindow", "The result:", nullptr));
        labelResultValue->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
