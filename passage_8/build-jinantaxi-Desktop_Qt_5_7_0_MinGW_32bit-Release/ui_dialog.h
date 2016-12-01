/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lc;
    QLineEdit *sj;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_4;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLabel *je;
    QLabel *label_5;
    QLabel *label_6;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(400, 300);
        Dialog->setStyleSheet(QStringLiteral("background-color: rgb(255, 224, 192);"));
        label = new QLabel(Dialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(110, 10, 181, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("\347\255\211\347\272\277 Light"));
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label_2 = new QLabel(Dialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(100, 70, 91, 20));
        label_3 = new QLabel(Dialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(70, 100, 110, 21));
        lc = new QLineEdit(Dialog);
        lc->setObjectName(QStringLiteral("lc"));
        lc->setGeometry(QRect(190, 70, 113, 20));
        lc->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        sj = new QLineEdit(Dialog);
        sj->setObjectName(QStringLiteral("sj"));
        sj->setGeometry(QRect(190, 100, 113, 20));
        sj->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        pushButton = new QPushButton(Dialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(170, 130, 51, 23));
        pushButton->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        pushButton_2 = new QPushButton(Dialog);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(250, 130, 51, 23));
        pushButton_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        label_4 = new QLabel(Dialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(80, 170, 101, 16));
        pushButton_3 = new QPushButton(Dialog);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(170, 210, 51, 23));
        pushButton_3->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        pushButton_4 = new QPushButton(Dialog);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(250, 210, 51, 23));
        pushButton_4->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        je = new QLabel(Dialog);
        je->setObjectName(QStringLiteral("je"));
        je->setGeometry(QRect(190, 170, 113, 18));
        je->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        je->setFrameShape(QFrame::Panel);
        je->setFrameShadow(QFrame::Plain);
        label_5 = new QLabel(Dialog);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(280, 250, 111, 16));
        label_6 = new QLabel(Dialog);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(280, 270, 101, 16));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "\346\265\216\345\215\227\345\207\272\347\247\237\350\275\246\350\256\241\344\273\267\347\263\273\347\273\237", 0));
        label->setText(QApplication::translate("Dialog", "\345\207\272\347\247\237\350\275\246\350\256\241\344\273\267\347\263\273\347\273\237", 0));
        label_2->setText(QApplication::translate("Dialog", "\350\267\257\347\250\213\357\274\210\345\205\254\351\207\214\357\274\211\357\274\232", 0));
        label_3->setText(QApplication::translate("Dialog", " \347\255\211\345\276\205\346\227\266\351\227\264\357\274\210\345\210\206\351\222\237\357\274\211\357\274\232", 0));
        pushButton->setText(QApplication::translate("Dialog", "\347\231\275\345\244\251", 0));
        pushButton_2->setText(QApplication::translate("Dialog", "\345\244\234\351\227\264", 0));
        label_4->setText(QApplication::translate("Dialog", " \344\273\230\350\264\271\351\207\221\351\242\235\357\274\210\345\205\203\357\274\211\357\274\232", 0));
        pushButton_3->setText(QApplication::translate("Dialog", "\351\207\215\347\275\256", 0));
        pushButton_4->setText(QApplication::translate("Dialog", "\351\200\200\345\207\272", 0));
        je->setText(QString());
        label_5->setText(QApplication::translate("Dialog", "Designed by Neuron", 0));
        label_6->setText(QApplication::translate("Dialog", "Written by QT", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
