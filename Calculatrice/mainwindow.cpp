#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

double MainWindow::addition(double a,double b){
    return a+b;
}

double MainWindow::division(double a,double b){
    if(b==0){
        return 0;
    }
    else{
        return a/b;
    }
}

double MainWindow::soustraction(double a,double b){
    return a-b;
}

double MainWindow::multiplication(double a,double b){
    return a*b;
}

void MainWindow::on_pushButton_clicked()
{
    if (this->operande==""){
        this->txt1+=((ui->pushButton)->text());
        (ui->textEdit)->setText(txt1);
    }
    else{
        this->txt2+=(ui->pushButton)->text();
        (ui->textEdit)->setText(txt2);
    }
}


void MainWindow::on_pushButton_4_clicked()
{
    if (this->operande==""){
        this->txt1+=((ui->pushButton_4)->text());
        (ui->textEdit)->setText(txt1);
    }
    else{
        this->txt2+=(ui->pushButton_4)->text();
        (ui->textEdit)->setText(txt2);
    }
}


void MainWindow::on_pushButton_7_clicked()
{
    if (this->operande==""){
        this->txt1+=((ui->pushButton_7)->text());
        (ui->textEdit)->setText(txt1);
    }
    else{
        this->txt2+=(ui->pushButton_7)->text();
        (ui->textEdit)->setText(txt2);
    }
}


void MainWindow::on_pushButton_2_clicked()
{
    if (this->operande==""){
        this->txt1+=((ui->pushButton_2)->text());
        (ui->textEdit)->setText(txt1);
    }
    else{
        this->txt2+=(ui->pushButton_2)->text();
        (ui->textEdit)->setText(txt2);
    }
}


void MainWindow::on_pushButton_5_clicked()
{
    if (this->operande==""){
        this->txt1+=((ui->pushButton_5)->text());
        (ui->textEdit)->setText(txt1);
    }
    else{
        this->txt2+=(ui->pushButton_5)->text();
        (ui->textEdit)->setText(txt2);
    }
}


void MainWindow::on_pushButton_8_clicked()
{
    if (this->operande==""){
        this->txt1+=((ui->pushButton_8)->text());
        (ui->textEdit)->setText(txt1);
    }
    else{
        this->txt2+=(ui->pushButton_8)->text();
        (ui->textEdit)->setText(txt2);
    }
}


void MainWindow::on_pushButton_3_clicked()
{
    if (this->operande==""){
        this->txt1+=((ui->pushButton_3)->text());
        (ui->textEdit)->setText(txt1);
    }
    else{
        this->txt2+=(ui->pushButton_3)->text();
        (ui->textEdit)->setText(txt2);
    }
}


void MainWindow::on_pushButton_6_clicked()
{
    if (this->operande==""){
        this->txt1+=((ui->pushButton_6)->text());
        (ui->textEdit)->setText(txt1);
    }
    else{
        this->txt2+=(ui->pushButton_6)->text();
        (ui->textEdit)->setText(txt2);
    }
}


void MainWindow::on_pushButton_9_clicked()
{
    if (this->operande==""){
        this->txt1+=((ui->pushButton_9)->text());
        (ui->textEdit)->setText(txt1);
    }
    else{
        this->txt2+=(ui->pushButton_9)->text();
        (ui->textEdit)->setText(txt2);
    }
}
void MainWindow::on_pushButton_16_clicked()
{
    if (this->operande==""){
        this->txt1+=((ui->pushButton_16)->text());
        (ui->textEdit)->setText(txt1);
    }
    else{
        this->txt2+=(ui->pushButton_16)->text();
        (ui->textEdit)->setText(txt2);
    }
}


void MainWindow::on_pushButton_15_clicked()
{
    double sol=0;
    this->a=(txt1).toDouble();
    this->b=(txt2).toDouble();
    if(this->operande!="" && !(this->a==0.0 && this->b==0.0)){
        if(this->operande=="+"){
            sol=addition(this->a,this->b);
            }
        if(this->operande=="/"){
            sol=division(this->a,this->b);
        }
        if(this->operande=="*"){
            sol=multiplication(this->a,this->b);
        }
        if(this->operande=="-"){
            sol=soustraction(this->a,this->b);
        }
    }
    (ui->textEdit)->setText(QString::number(sol));
    this->a=sol;
    (this->txt1)=(QString::number(sol));
    this->b=0.0;
    this->txt2="";
    this->operande="";
}


void MainWindow::on_pushButton_13_clicked()
{
    this->operande="-";
}


void MainWindow::on_pushButton_12_clicked()
{
    this->operande="*";
}


void MainWindow::on_pushButton_11_clicked()
{
    this->operande="/";
}


void MainWindow::on_pushButton_17_clicked()
{
    this->operande="+";
}


void MainWindow::on_pushButton_14_clicked()
{
    this->txt1="";
    this->txt2="";
    this->operande="";
    (ui->textEdit)->setText("0");
}


void MainWindow::on_pushButton_18_clicked()
{
    if (this->operande==""){
        if(this->txt1==""){
            this->txt1="0";
            this->txt1+=((ui->pushButton_18)->text());
            (ui->textEdit)->setText(txt1);
        }
        else{
            this->txt1+=((ui->pushButton_18)->text());
            (ui->textEdit)->setText(txt1);
        }
    }
    else{
        if(this->txt2==""){
            this->txt2="0";
            this->txt2+=((ui->pushButton_18)->text());
            (ui->textEdit)->setText(txt2);
        }
        else{
            this->txt2+=((ui->pushButton_18)->text());
            (ui->textEdit)->setText(txt2);
        }
    }
}

