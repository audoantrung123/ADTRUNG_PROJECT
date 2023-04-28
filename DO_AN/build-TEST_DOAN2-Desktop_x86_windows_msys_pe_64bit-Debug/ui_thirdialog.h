/********************************************************************************
** Form generated from reading UI file 'thirdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THIRDIALOG_H
#define UI_THIRDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ThirDialog
{
public:
    QTextBrowser *textBrowser_3;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QComboBox *comboBox;
    QComboBox *comboBox_2;
    QComboBox *comboBox_3;
    QComboBox *comboBox_4;
    QComboBox *comboBox_5;
    QComboBox *comboBox_6;
    QPushButton *pushButton;
    QPushButton *start_btn;

    void setupUi(QDialog *ThirDialog)
    {
        if (ThirDialog->objectName().isEmpty())
            ThirDialog->setObjectName(QString::fromUtf8("ThirDialog"));
        ThirDialog->resize(711, 560);
        textBrowser_3 = new QTextBrowser(ThirDialog);
        textBrowser_3->setObjectName(QString::fromUtf8("textBrowser_3"));
        textBrowser_3->setGeometry(QRect(10, 20, 551, 411));
        textBrowser_3->setFrameShape(QFrame::Panel);
        verticalLayoutWidget_2 = new QWidget(ThirDialog);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(170, 80, 281, 251));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        comboBox = new QComboBox(verticalLayoutWidget_2);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(10);
        font.setBold(false);
        font.setWeight(50);
        comboBox->setFont(font);
        comboBox->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        verticalLayout_2->addWidget(comboBox);

        comboBox_2 = new QComboBox(verticalLayoutWidget_2);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setFont(font);
        comboBox_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        verticalLayout_2->addWidget(comboBox_2);

        comboBox_3 = new QComboBox(verticalLayoutWidget_2);
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));
        comboBox_3->setFont(font);
        comboBox_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        verticalLayout_2->addWidget(comboBox_3);

        comboBox_4 = new QComboBox(verticalLayoutWidget_2);
        comboBox_4->setObjectName(QString::fromUtf8("comboBox_4"));
        comboBox_4->setFont(font);
        comboBox_4->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        verticalLayout_2->addWidget(comboBox_4);

        comboBox_5 = new QComboBox(verticalLayoutWidget_2);
        comboBox_5->setObjectName(QString::fromUtf8("comboBox_5"));
        comboBox_5->setFont(font);
        comboBox_5->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        verticalLayout_2->addWidget(comboBox_5);

        comboBox_6 = new QComboBox(verticalLayoutWidget_2);
        comboBox_6->setObjectName(QString::fromUtf8("comboBox_6"));
        comboBox_6->setFont(font);
        comboBox_6->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        verticalLayout_2->addWidget(comboBox_6);

        pushButton = new QPushButton(ThirDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(360, 350, 93, 28));
        QFont font1;
        font1.setPointSize(9);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(255, 85, 0);"));
        start_btn = new QPushButton(ThirDialog);
        start_btn->setObjectName(QString::fromUtf8("start_btn"));
        start_btn->setGeometry(QRect(260, 350, 93, 28));
        start_btn->setFont(font1);
        start_btn->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(255, 85, 0);"));

        retranslateUi(ThirDialog);

        QMetaObject::connectSlotsByName(ThirDialog);
    } // setupUi

    void retranslateUi(QDialog *ThirDialog)
    {
        ThirDialog->setWindowTitle(QApplication::translate("ThirDialog", "Dialog", nullptr));
        textBrowser_3->setHtml(QApplication::translate("ThirDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600; color:#ff0000;\">CONNECTION</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt; font-weight:600; color:#ff0000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600; color:#000000;\">           </span></p>\n"
"<p style=\" margin-top:0px; mar"
                        "gin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600; color:#000000;\">	 COM:</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt; font-weight:600; color:#000000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600; color:#000000;\">       BAUDRATE:</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt; font-weight:600; color:#000000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600; color:#000000;\">       DATA BITS:</span></"
                        "p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt; font-weight:600; color:#000000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600; color:#000000;\">        STOP BITS:</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt; font-weight:600; color:#000000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600; color:#000000;\">              PARITY:</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10p"
                        "t; font-weight:600; color:#000000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600; color:#000000;\">FLOW CONTROL:</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt; font-weight:600; color:#000000;\"><br /></p></body></html>", nullptr));
        pushButton->setText(QApplication::translate("ThirDialog", "Connect", nullptr));
        start_btn->setText(QApplication::translate("ThirDialog", "Start", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ThirDialog: public Ui_ThirDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THIRDIALOG_H
