#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    ui->lineEdit->setValidator(new QDoubleValidator(-pow(2,32)+1,pow(2,32)-1,16,this));
    ui->lineEdit_2->setValidator(new QDoubleValidator(-pow(2,32)+1,pow(2,32)-1,16,this));
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_pressed()
{
    ui->label->setText("+");
}

void Dialog::on_pushButton_2_pressed()
{
    ui->label->setText("-");
}

void Dialog::on_pushButton_3_pressed()
{
    ui->label->setText("*");
}

void Dialog::on_pushButton_4_pressed()
{
    ui->label->setText("/");
}

void Dialog::on_pushButton_6_pressed()
{
    ui->lineEdit->setText(ui->label_3->text());
}

void Dialog::on_pushButton_5_pressed()
{
    bool ok;
    QString tempStr;
    QString valueStr=ui->lineEdit->text();
    double valueDouble=valueStr.toDouble(&ok);
    QString valueStr2=ui->lineEdit_2->text();
    double valueDouble2=valueStr2.toDouble(&ok);
    double area;
    QString js=ui->label->text();
    if (js=="+") area=valueDouble+valueDouble2;
    else if (js=="-") area=valueDouble-valueDouble2;
    else if (js=="*") area=valueDouble*valueDouble2;
    else if (js=="/") area=valueDouble/valueDouble2;
    ui->label_3->setText(tempStr.setNum(area));
}
