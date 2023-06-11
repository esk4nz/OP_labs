#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "class.h"
#include "class.cpp"
#include <QDoubleValidator>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setFixedSize(700, 400);
    QDoubleValidator *validator = new QDoubleValidator(this);
    validator->setLocale(QLocale(QLocale::English));
    ui->x1Value->setValidator(validator);
    ui->x2Value->setValidator(validator);
    ui->n1Value->setValidator(validator);
    ui->n2Value->setValidator(validator);
    ui->m1Value->setValidator(validator);
    ui->m2Value->setValidator(validator);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_countBut_clicked()
{
    double result, x1, x2, n1, n2, m1, m2;
    try {
        ui->labelResultValue->clear();
        if (ui->x1Value->text().size() == 0 || ui->x2Value->text().size() == 0 || ui->m1Value->text().size() == 0 || ui->m2Value->text().size() == 0 || ui->n1Value->text().size() == 0 || ui->n2Value->text().size() == 0)
            throw QString("Заповніть усі поля, будь ласка!");
        expression A;
        expression B;
        x1 = ui->x1Value->text().toDouble();
        A.setX(x1);
        n1 = ui->n1Value->text().toDouble();
        m1 = ui->m1Value->text().toDouble();
        x2 = ui->x2Value->text().toDouble();
        B.setX(x2);
        n2 = ui->n2Value->text().toDouble();
        m2 = ui->m2Value->text().toDouble();
        if (n1 == m1 || n2 == m2) {
            throw QString("n не може дорівнювати m!");
        }
        A.setN(n1);
        A.setM(m1);
        B.setN(n2);
        B.setM(m2);
        result = A.express() + B.express();
        ui->labelResultValue->setText(QString::number(result));
    } catch (QString error_message) {
        QMessageBox::critical(this, "Помилка вводу", error_message);
        return;
    }
}



void MainWindow::on_clearBut_clicked()
{
    ui->x1Value->clear();
    ui->x2Value->clear();
    ui->n1Value->clear();
    ui->n2Value->clear();
    ui->m1Value->clear();
    ui->m2Value->clear();
    ui->labelResultValue->clear();
}
