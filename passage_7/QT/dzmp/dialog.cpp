#include "dialog.h"
#include "ui_dialog.h"
#include <QPixmap>
#include <QPainter>
#include <QImage>
#include <QPicture>
#include <QLabel>
#include <ctime>
#include <QInputDialog>

int year=2017, mon=7, mday=12;
time_t t1,t2;
int days;
struct tm tm;

int bir () {
     memset(&tm, 0, sizeof(tm));
     tm.tm_year = year - 1900;
     tm.tm_mon = mon - 1;
     tm.tm_mday = mday;
     t1 = mktime(&tm);
     t2 = time(NULL);
     days = (t2-t1) / (24 * 3600);
     return (-days);
}

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    pix.load(":/pic/1.png");
    ui->piclabel->setPixmap(pix);
    QString tempStr;
    ui->label_3->setText(tempStr.setNum(bir()));
    ui->label->hide();
    ui->label_2->hide();
    ui->label_3->hide();
    ui->label_4->hide();
    ui->textBrowser_2->hide();
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_4_pressed()
{
    if (ui->label->isHidden()) {
        ui->label->show();
        ui->label_2->show();
        ui->label_3->show();
        ui->label_4->show();
        ui->pushButton_5->show();
        ui->pushButton_4->setText("隐藏");
        }
    else {
        ui->label->hide();
        ui->label_2->hide();
        ui->label_3->hide();
        ui->label_4->hide();
        ui->pushButton_5->hide();
        ui->textBrowser_2->hide();
        ui->pushButton_4->setText("显示");
    }
}

void Dialog::on_pushButton_pressed()
{
    pix.load(":/pic/1.png");
    ui->piclabel->setPixmap(pix);
}


void Dialog::on_pushButton_2_pressed()
{
    pix.load(":/pic/2.png");
    ui->piclabel->setPixmap(pix);
}

void Dialog::on_pushButton_3_pressed()
{
    pix.load(":/pic/3.png");
    ui->piclabel->setPixmap(pix);
}

void Dialog::on_pushButton_5_pressed()
{
    bool ok;
    QString string=QInputDialog::getText(this,tr("口令"),tr("请输入口令"),QLineEdit::Normal,tr("jfen"),&ok);
    if (ok && string=="jfen") ui->textBrowser_2->show();
}
