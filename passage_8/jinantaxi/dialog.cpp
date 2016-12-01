#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_4_clicked()
{
    exit(0);
}

void Dialog::on_pushButton_3_clicked()
{
    ui->lc->setText("");
    ui->sj->setText("");
    ui->je->setText("");
}

void Dialog::on_pushButton_clicked()
{
    bool ok;
    QString tempStr;
    QString valueStr=ui->lc->text();
    float valueDouble=valueStr.toDouble(&ok);
    QString valueStr2=ui->sj->text();
    float valueDouble2=valueStr2.toDouble(&ok);
    float area;
    if (valueDouble<=0) {
        area=0.2*valueDouble2;
    } else if (valueDouble<=3) {
        area=9+0.2*valueDouble2;
    } else if (valueDouble>3 && valueDouble<=6) {
        area=4.5+1.5*valueDouble+0.2*valueDouble2;
    } else if (valueDouble>6) {
        area=2.25*valueDouble+0.2*valueDouble2;
    }
    ui->je->setText(tempStr.setNum(area));
}

void Dialog::on_pushButton_2_clicked()
{
    bool ok;
    QString tempStr;
    QString valueStr=ui->lc->text();
    float valueDouble=valueStr.toDouble(&ok);
    QString valueStr2=ui->sj->text();
    float valueDouble2=valueStr2.toDouble(&ok);
    float area;
    if (valueDouble<=0) {
        area=0.2*valueDouble2;
    } else if (valueDouble<=3) {
        area=9+0.2*valueDouble2;
    } else if (valueDouble>3 && valueDouble<=6) {
        area=3.75+1.75*valueDouble+0.2*valueDouble2;
    } else if (valueDouble>6) {
        area=2.5*valueDouble-0.75+0.2*valueDouble2;
    }
    ui->je->setText(tempStr.setNum(area));
}
