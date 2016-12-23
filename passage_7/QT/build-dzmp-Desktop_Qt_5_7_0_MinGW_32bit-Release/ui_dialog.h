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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLabel *piclabel;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QWidget *widget2;
    QVBoxLayout *verticalLayout_4;
    QTextBrowser *textBrowser;
    QSpacerItem *verticalSpacer;
    QTextBrowser *textBrowser_2;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(571, 313);
        piclabel = new QLabel(Dialog);
        piclabel->setObjectName(QStringLiteral("piclabel"));
        piclabel->setGeometry(QRect(300, 10, 200, 200));
        widget = new QWidget(Dialog);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(340, 232, 168, 67));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout->addWidget(label_4);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_3->addLayout(verticalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton_4 = new QPushButton(widget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        horizontalLayout_2->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(widget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        horizontalLayout_2->addWidget(pushButton_5);


        verticalLayout_3->addLayout(horizontalLayout_2);

        widget1 = new QWidget(Dialog);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(520, 40, 31, 151));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(widget1);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout_2->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget1);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout_2->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(widget1);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        verticalLayout_2->addWidget(pushButton_3);

        widget2 = new QWidget(Dialog);
        widget2->setObjectName(QStringLiteral("widget2"));
        widget2->setGeometry(QRect(10, 10, 258, 291));
        verticalLayout_4 = new QVBoxLayout(widget2);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        textBrowser = new QTextBrowser(widget2);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\215\216\346\226\207\350\241\214\346\245\267"));
        font.setPointSize(12);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        textBrowser->setFont(font);
        textBrowser->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";"));

        verticalLayout_4->addWidget(textBrowser);

        verticalSpacer = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        textBrowser_2 = new QTextBrowser(widget2);
        textBrowser_2->setObjectName(QStringLiteral("textBrowser_2"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\215\216\346\226\207\350\241\214\346\245\267"));
        font1.setPointSize(12);
        textBrowser_2->setFont(font1);
        textBrowser_2->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";"));

        verticalLayout_4->addWidget(textBrowser_2);

        pushButton->raise();
        pushButton_2->raise();
        pushButton_3->raise();
        pushButton_4->raise();
        label->raise();
        piclabel->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        pushButton_5->raise();
        textBrowser->raise();
        textBrowser_2->raise();
        textBrowser->raise();

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "\347\224\265\345\255\220\345\220\215\347\211\207", 0));
        piclabel->setText(QApplication::translate("Dialog", "piclabel", 0));
        label->setText(QApplication::translate("Dialog", "\345\207\272\347\224\237\346\227\245\346\234\237;1991\345\271\2647\346\234\21012\346\227\245", 0));
        label_2->setText(QApplication::translate("Dialog", "\350\267\235\347\246\273\347\224\237\346\227\245\350\277\230\346\234\211\357\274\232", 0));
        label_3->setText(QApplication::translate("Dialog", "TextLabel", 0));
        label_4->setText(QApplication::translate("Dialog", "\345\244\251", 0));
        pushButton_4->setText(QApplication::translate("Dialog", "\346\230\276\347\244\272", 0));
        pushButton_5->setText(QApplication::translate("Dialog", "\345\217\243\344\273\244", 0));
        pushButton->setText(QApplication::translate("Dialog", "1", 0));
        pushButton_2->setText(QApplication::translate("Dialog", "2", 0));
        pushButton_3->setText(QApplication::translate("Dialog", "3", 0));
        textBrowser->setHtml(QApplication::translate("Dialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\215\216\346\226\207\350\241\214\346\245\267'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\344\270\255\346\226\207\345\220\215\357\274\232\345\223\210\346\242\205\346\226\257\302\267\347\275\227\345\276\267\351\207\214\346\240\274\346\226\257 </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\345\244\226\346\226\207\345\220\215\357\274\232James David Rodr\303\255guez Rubi</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\345\233\275\347\261\215\357\274\232"
                        "\345\223\245\344\274\246\346\257\224\344\272\232 </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\345\207\272\347\224\237\346\227\245\346\234\237\357\274\2321991-07-12 </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\350\277\220\345\212\250\351\241\271\347\233\256\357\274\232\350\266\263\347\220\203 </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\346\211\200\345\261\236\350\277\220\345\212\250\351\230\237\357\274\232\347\232\207\345\256\266\351\251\254\345\276\267\351\207\214\350\266\263\347\220\203\344\277\261\344\271\220\351\203\250 </p></body></html>", 0));
        textBrowser_2->setHtml(QApplication::translate("Dialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\215\216\346\226\207\350\241\214\346\245\267'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">2013/2014\346\263\225\347\224\262\345\212\251\346\224\273\347\216\213 </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">2014\345\271\264\345\267\264\350\245\277\344\270\226\347\225\214\346\235\257\351\207\221\351\235\264\345\245\226 </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">2014\345\271\264\346\231\256\346\226\257\345\215\241\344\273\200\345\245\226 </p>\n"
""
                        "<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">2014\345\271\264\345\267\264\350\245\277\344\270\226\347\225\214\346\235\257\351\207\221\351\235\264\345\245\226 </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">2014\345\271\2648000\344\270\207\346\254\247\345\205\203\350\275\254\344\274\232\347\232\207\351\251\254 </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">14/15\350\265\233\345\255\243\350\245\277\347\224\262\345\256\230\346\226\271\346\234\200\344\275\263\344\270\255\345\234\272\347\220\203\345\221\230 </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">2015\345\271\264\345\205\245\345\233\264FIFA\351\207\221\347\220\203\345\245\22623\344\272\272\345\220\215\345\215\225 </p>\n"
"<p style=\"-qt-par"
                        "agraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
