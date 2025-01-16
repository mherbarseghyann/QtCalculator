#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //test
}

MainWindow::~MainWindow()
{
    delete ui;
}

long num1 = 0;
long num2 = 0;
short current = 1;
QString operation = "";
long result = 0;
bool equalClicked = false;

void MainWindow::on_btn0_clicked()
{
    if (current == 1) {
        num1 = num1 * 10;
    } else {
        num2 = num2 * 10;
    }
    updateScreen();
}

void MainWindow::on_btn1_clicked()
{
    if (current == 1) {
        num1 = num1 * 10 + 1;
    } else {
        num2 = num2 * 10 + 1;
    }
    updateScreen();
}

void MainWindow::on_btn2_clicked()
{
    if (current == 1) {
        num1 = num1 * 10 + 2;
    } else {
        num2 = num2 * 10 + 2;
    }
    updateScreen();
}

void MainWindow::on_btn3_clicked()
{
    if (current == 1) {
        num1 = num1 * 10 + 3;
    } else {
        num2 = num2 * 10 + 3;
    }
    updateScreen();
}

void MainWindow::on_btn4_clicked()
{
    if (current == 1) {
        num1 = num1 * 10 + 4;
    } else {
        num2 = num2 * 10 + 4;
    }
    updateScreen();
}

void MainWindow::on_btn5_clicked()
{
    if (current == 1) {
        num1 = num1 * 10 + 5;
    } else {
        num2 = num2 * 10 + 5;
    }
    updateScreen();
}

void MainWindow::on_btn6_clicked()
{
    if (current == 1) {
        num1 = num1 * 10 + 6;
    } else {
        num2 = num2 * 10 + 6;
    }
    updateScreen();
}

void MainWindow::on_btn7_clicked()
{
    if (current == 1) {
        num1 = num1 * 10 + 7;
    } else {
        num2 = num2 * 10 + 7;
    }
    updateScreen();
}

void MainWindow::on_btn8_clicked()
{
    if (current == 1) {
        num1 = num1 * 10 + 8;
    } else {
        num2 = num2 * 10 + 8;
    }
    updateScreen();
}

void MainWindow::on_btn9_clicked()
{
    if (current == 1) {
        num1 = num1 * 10 + 9;
    } else {
        num2 = num2 * 10 + 9;
    }
    updateScreen();
}

void MainWindow::on_btnAdd_clicked()
{
    operation = "+";
    current = 2;
    updateScreen();
}

void MainWindow::on_btnSub_clicked()
{
    operation = "-";
    current = 2;
    updateScreen();
}

void MainWindow::on_btnMulti_clicked()
{
    operation = "*";
    current = 2;
    updateScreen();
}

void MainWindow::on_btnDiv_clicked()
{
    operation = "/";
    current = 2;
    updateScreen();
}

void MainWindow::on_btnEqual_clicked()
{
    if (operation == "+") {
        result = num1 + num2;
    } else if (operation == "-") {
        result = num1 - num2;
    } else if (operation == "*") {
        result = num1 * num2;
    } else if (operation == "/") {
        if (num2 != 0) {
            result = num1 / num2;
        } else {
            ui->screen->setText("Error");
            return;
        }
    }

    ui->screen->setText(QString::number(result));
    num1 = result;
    num2 = 0;
    current = 1;
    operation = "";
    equalClicked = true;
}

void MainWindow::on_btnClear_clicked()
{
    num1 = 0;
    num2 = 0;
    current = 1;
    operation = "";
    result = 0;
    equalClicked = false;
    ui->screen->setText("0");
}

void MainWindow::updateScreen()
{
    QString display = QString::number(num1);
    if (!operation.isEmpty()) {
        display += operation;
    }
    if (current == 2 && num2 != 0) {
        display += QString::number(num2);
    }
    ui->screen->setText(display);
}



