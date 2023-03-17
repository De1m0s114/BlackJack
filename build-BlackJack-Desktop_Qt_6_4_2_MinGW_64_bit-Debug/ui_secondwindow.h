/********************************************************************************
** Form generated from reading UI file 'secondwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECONDWINDOW_H
#define UI_SECONDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_SecondWindow
{
public:
    QLabel *label;
    QTextBrowser *score;
    QTextBrowser *textBrowser_2;
    QLabel *label_2;
    QLabel *p_1;
    QLabel *p_2;
    QLabel *p_3;
    QTextBrowser *points_p;
    QLabel *d_1;
    QLabel *d_2;
    QLabel *d_3;
    QTextBrowser *points_d;
    QPushButton *pushButton_4;
    QLabel *p_4;
    QLabel *d_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QSpinBox *spinBox;
    QPushButton *pushButton;
    QLineEdit *lineEdit_2;
    QLabel *p_5;

    void setupUi(QDialog *SecondWindow)
    {
        if (SecondWindow->objectName().isEmpty())
            SecondWindow->setObjectName("SecondWindow");
        SecondWindow->resize(670, 610);
        label = new QLabel(SecondWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 891, 611));
        label->setPixmap(QPixmap(QString::fromUtf8("Picture/table.jpg")));
        score = new QTextBrowser(SecondWindow);
        score->setObjectName("score");
        score->setGeometry(QRect(10, 521, 81, 81));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(26);
        score->setFont(font);
        textBrowser_2 = new QTextBrowser(SecondWindow);
        textBrowser_2->setObjectName("textBrowser_2");
        textBrowser_2->setGeometry(QRect(10, 490, 121, 31));
        label_2 = new QLabel(SecondWindow);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 10, 201, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial Black")});
        font1.setPointSize(18);
        font1.setBold(true);
        label_2->setFont(font1);
        p_1 = new QLabel(SecondWindow);
        p_1->setObjectName("p_1");
        p_1->setGeometry(QRect(130, 370, 141, 171));
        p_1->setPixmap(QPixmap(QString::fromUtf8("Picture/dama_bub.JPG")));
        p_2 = new QLabel(SecondWindow);
        p_2->setObjectName("p_2");
        p_2->setGeometry(QRect(210, 370, 101, 171));
        p_2->setFrameShadow(QFrame::Plain);
        p_2->setPixmap(QPixmap(QString::fromUtf8("Picture/eight_kr.JPG")));
        p_3 = new QLabel(SecondWindow);
        p_3->setObjectName("p_3");
        p_3->setGeometry(QRect(270, 370, 121, 171));
        p_3->setPixmap(QPixmap(QString::fromUtf8("Picture/dama_kr.JPG")));
        points_p = new QTextBrowser(SecondWindow);
        points_p->setObjectName("points_p");
        points_p->setGeometry(QRect(270, 550, 71, 51));
        d_1 = new QLabel(SecondWindow);
        d_1->setObjectName("d_1");
        d_1->setGeometry(QRect(140, 70, 141, 171));
        d_1->setPixmap(QPixmap(QString::fromUtf8("Picture/dama_bub.JPG")));
        d_2 = new QLabel(SecondWindow);
        d_2->setObjectName("d_2");
        d_2->setGeometry(QRect(210, 70, 141, 171));
        d_2->setPixmap(QPixmap(QString::fromUtf8("Picture/dama_bub.JPG")));
        d_3 = new QLabel(SecondWindow);
        d_3->setObjectName("d_3");
        d_3->setGeometry(QRect(260, 70, 141, 171));
        d_3->setPixmap(QPixmap(QString::fromUtf8("Picture/dama_bub.JPG")));
        points_d = new QTextBrowser(SecondWindow);
        points_d->setObjectName("points_d");
        points_d->setGeometry(QRect(260, 10, 71, 51));
        pushButton_4 = new QPushButton(SecondWindow);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(480, 490, 161, 29));
        p_4 = new QLabel(SecondWindow);
        p_4->setObjectName("p_4");
        p_4->setGeometry(QRect(340, 370, 141, 171));
        p_4->setPixmap(QPixmap(QString::fromUtf8("Picture/dama_bub.JPG")));
        d_4 = new QLabel(SecondWindow);
        d_4->setObjectName("d_4");
        d_4->setGeometry(QRect(320, 70, 141, 171));
        d_4->setPixmap(QPixmap(QString::fromUtf8("Picture/dama_bub.JPG")));
        pushButton_5 = new QPushButton(SecondWindow);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(210, 290, 191, 51));
        pushButton_3 = new QPushButton(SecondWindow);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(480, 450, 161, 29));
        pushButton_2 = new QPushButton(SecondWindow);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(479, 525, 161, 29));
        spinBox = new QSpinBox(SecondWindow);
        spinBox->setObjectName("spinBox");
        spinBox->setGeometry(QRect(301, 293, 121, 25));
        pushButton = new QPushButton(SecondWindow);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(201, 293, 93, 29));
        lineEdit_2 = new QLineEdit(SecondWindow);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(201, 261, 221, 25));
        p_5 = new QLabel(SecondWindow);
        p_5->setObjectName("p_5");
        p_5->setGeometry(QRect(500, 180, 141, 171));
        p_5->setPixmap(QPixmap(QString::fromUtf8("Picture/back.JPG")));

        retranslateUi(SecondWindow);
        QObject::connect(pushButton_5, &QPushButton::clicked, SecondWindow, qOverload<>(&QDialog::close));

        QMetaObject::connectSlotsByName(SecondWindow);
    } // setupUi

    void retranslateUi(QDialog *SecondWindow)
    {
        SecondWindow->setWindowTitle(QCoreApplication::translate("SecondWindow", "Dialog", nullptr));
        label->setText(QString());
        score->setHtml(QCoreApplication::translate("SecondWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Arial'; font-size:26pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI';\">50</span></p></body></html>", nullptr));
        textBrowser_2->setHtml(QCoreApplication::translate("SecondWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\222\320\260\321\210 \320\261\320\260\320\273\320\260\320\275\321\201:</p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("SecondWindow", "BlackJack", nullptr));
        p_1->setText(QString());
        p_2->setText(QString());
        p_3->setText(QString());
        d_1->setText(QString());
        d_2->setText(QString());
        d_3->setText(QString());
        pushButton_4->setText(QCoreApplication::translate("SecondWindow", "\320\222\320\267\321\217\321\202\320\270 4", nullptr));
        p_4->setText(QString());
        d_4->setText(QString());
        pushButton_5->setText(QCoreApplication::translate("SecondWindow", "\320\227\320\260\320\262\320\265\321\200\321\210\320\270\321\202\320\270", nullptr));
        pushButton_3->setText(QCoreApplication::translate("SecondWindow", "\320\222\320\267\321\217\321\202\320\270 3", nullptr));
        pushButton_2->setText(QCoreApplication::translate("SecondWindow", "\320\237\320\265\321\200\320\265\320\264\320\260\321\202\320\270 \321\205\321\226\320\264", nullptr));
        pushButton->setText(QCoreApplication::translate("SecondWindow", "\320\237\320\276\321\207\320\260\321\202\320\270 \320\263\321\200\321\203", nullptr));
        lineEdit_2->setText(QCoreApplication::translate("SecondWindow", "\320\222\320\262\320\265\320\264\321\226\321\202\321\214 \321\201\321\202\320\260\320\262\320\272\321\203 \321\202\320\260 \320\277\320\276\321\207\320\275\321\226\321\202\321\214 \320\263\321\200\321\203", nullptr));
        p_5->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SecondWindow: public Ui_SecondWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECONDWINDOW_H
