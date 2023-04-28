/********************************************************************************
** Form generated from reading UI file 'secdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECDIALOG_H
#define UI_SECDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_SecDialog
{
public:
    QTextBrowser *textBrowser;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *KpLineEdit;
    QLineEdit *KiLineEdit;
    QLineEdit *KdLineEdit;
    QLineEdit *AngleLineEdit;
    QPushButton *send_btn;
    QCheckBox *checkBox;
    QTextBrowser *textBrowser_2;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *start_btn;
    QPushButton *stop_btn;
    QCustomPlot *plot_dapung;
    QCustomPlot *plot_saiso;
    QTextBrowser *textBrowser_3;
    QPushButton *reset_btn;
    QCustomPlot *plot_dieukhien;
    QLabel *label_slider;
    QLCDNumber *temp_lcdNumber;
    QLabel *Logo_RIC;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_5;

    void setupUi(QDialog *SecDialog)
    {
        if (SecDialog->objectName().isEmpty())
            SecDialog->setObjectName(QString::fromUtf8("SecDialog"));
        SecDialog->resize(1116, 970);
        SecDialog->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        textBrowser = new QTextBrowser(SecDialog);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(10, 170, 281, 301));
        textBrowser->setFrameShape(QFrame::Panel);
        verticalLayoutWidget = new QWidget(SecDialog);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(160, 210, 111, 251));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        KpLineEdit = new QLineEdit(verticalLayoutWidget);
        KpLineEdit->setObjectName(QString::fromUtf8("KpLineEdit"));

        verticalLayout->addWidget(KpLineEdit);

        KiLineEdit = new QLineEdit(verticalLayoutWidget);
        KiLineEdit->setObjectName(QString::fromUtf8("KiLineEdit"));

        verticalLayout->addWidget(KiLineEdit);

        KdLineEdit = new QLineEdit(verticalLayoutWidget);
        KdLineEdit->setObjectName(QString::fromUtf8("KdLineEdit"));

        verticalLayout->addWidget(KdLineEdit);

        AngleLineEdit = new QLineEdit(verticalLayoutWidget);
        AngleLineEdit->setObjectName(QString::fromUtf8("AngleLineEdit"));

        verticalLayout->addWidget(AngleLineEdit);

        send_btn = new QPushButton(verticalLayoutWidget);
        send_btn->setObjectName(QString::fromUtf8("send_btn"));
        QFont font;
        font.setPointSize(9);
        font.setBold(true);
        font.setWeight(75);
        send_btn->setFont(font);
        send_btn->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 0, 255);"));

        verticalLayout->addWidget(send_btn);

        checkBox = new QCheckBox(verticalLayoutWidget);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        verticalLayout->addWidget(checkBox);

        textBrowser_2 = new QTextBrowser(SecDialog);
        textBrowser_2->setObjectName(QString::fromUtf8("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(10, 490, 271, 111));
        textBrowser_2->setFrameShape(QFrame::Panel);
        horizontalLayoutWidget = new QWidget(SecDialog);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(20, 520, 251, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        start_btn = new QPushButton(horizontalLayoutWidget);
        start_btn->setObjectName(QString::fromUtf8("start_btn"));
        start_btn->setFont(font);
        start_btn->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 255, 0);"));

        horizontalLayout->addWidget(start_btn);

        stop_btn = new QPushButton(horizontalLayoutWidget);
        stop_btn->setObjectName(QString::fromUtf8("stop_btn"));
        stop_btn->setFont(font);
        stop_btn->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(255, 0, 0);"));

        horizontalLayout->addWidget(stop_btn);

        plot_dapung = new QCustomPlot(SecDialog);
        plot_dapung->setObjectName(QString::fromUtf8("plot_dapung"));
        plot_dapung->setGeometry(QRect(340, 30, 671, 291));
        plot_saiso = new QCustomPlot(SecDialog);
        plot_saiso->setObjectName(QString::fromUtf8("plot_saiso"));
        plot_saiso->setGeometry(QRect(340, 350, 671, 291));
        textBrowser_3 = new QTextBrowser(SecDialog);
        textBrowser_3->setObjectName(QString::fromUtf8("textBrowser_3"));
        textBrowser_3->setGeometry(QRect(10, 630, 271, 151));
        textBrowser_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        textBrowser_3->setFrameShape(QFrame::Box);
        textBrowser_3->setLineWidth(2);
        textBrowser_3->setMidLineWidth(0);
        reset_btn = new QPushButton(SecDialog);
        reset_btn->setObjectName(QString::fromUtf8("reset_btn"));
        reset_btn->setGeometry(QRect(70, 570, 131, 31));
        QFont font1;
        font1.setPointSize(10);
        reset_btn->setFont(font1);
        reset_btn->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 0, 0);"));
        plot_dieukhien = new QCustomPlot(SecDialog);
        plot_dieukhien->setObjectName(QString::fromUtf8("plot_dieukhien"));
        plot_dieukhien->setGeometry(QRect(340, 670, 671, 291));
        label_slider = new QLabel(SecDialog);
        label_slider->setObjectName(QString::fromUtf8("label_slider"));
        label_slider->setGeometry(QRect(200, 450, 55, 16));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        label_slider->setFont(font2);
        label_slider->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        temp_lcdNumber = new QLCDNumber(SecDialog);
        temp_lcdNumber->setObjectName(QString::fromUtf8("temp_lcdNumber"));
        temp_lcdNumber->setGeometry(QRect(20, 670, 241, 91));
        QPalette palette;
        QBrush brush(QColor(0, 0, 94, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(0, 0, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush);
        QBrush brush3(QColor(60, 60, 60, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush3);
        QBrush brush4(QColor(76, 76, 76, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush5(QColor(60, 60, 60, 128));
        brush5.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        QBrush brush6(QColor(60, 60, 60, 128));
        brush6.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush6);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        QBrush brush7(QColor(60, 60, 60, 128));
        brush7.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush7);
#endif
        temp_lcdNumber->setPalette(palette);
        QFont font3;
        font3.setPointSize(6);
        temp_lcdNumber->setFont(font3);
        temp_lcdNumber->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 0, 255);"));
        temp_lcdNumber->setFrameShape(QFrame::NoFrame);
        temp_lcdNumber->setDigitCount(14);
        Logo_RIC = new QLabel(SecDialog);
        Logo_RIC->setObjectName(QString::fromUtf8("Logo_RIC"));
        Logo_RIC->setGeometry(QRect(10, 10, 271, 131));
        label = new QLabel(SecDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(600, 10, 161, 21));
        label->setFont(font2);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 255);"));
        label_4 = new QLabel(SecDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(610, 320, 141, 21));
        label_4->setFont(font2);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 255);"));
        label_5 = new QLabel(SecDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(590, 640, 171, 21));
        label_5->setFont(font2);
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 255);"));
        textBrowser->raise();
        verticalLayoutWidget->raise();
        textBrowser_2->raise();
        horizontalLayoutWidget->raise();
        plot_dapung->raise();
        plot_saiso->raise();
        textBrowser_3->raise();
        reset_btn->raise();
        plot_dieukhien->raise();
        label_slider->raise();
        Logo_RIC->raise();
        temp_lcdNumber->raise();
        label->raise();
        label_4->raise();
        label_5->raise();

        retranslateUi(SecDialog);

        QMetaObject::connectSlotsByName(SecDialog);
    } // setupUi

    void retranslateUi(QDialog *SecDialog)
    {
        SecDialog->setWindowTitle(QApplication::translate("SecDialog", "Dialog", nullptr));
        textBrowser->setHtml(QApplication::translate("SecDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600; color:#ff0000;\">PID TUNE</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt; font-weight:600; color:#0000ff;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600; color:#0000ff;\">P (Proportional)</span></p>\n"
"<p style=\"-qt-paragraph-typ"
                        "e:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt; font-weight:600; color:#0000ff;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600; color:#0000ff;\">I (Integral)</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt; font-weight:600; color:#0000ff;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600; color:#0000ff;\">D (Derivative)</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt; font-weight:600; color:#0000ff;\"><br /></p>\n"
""
                        "<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600; color:#0000ff;\">Angle</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt; font-weight:600; color:#0000ff;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt; font-weight:600; color:#0000ff;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt; font-weight:600; color:#0000ff;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600; color:#0000ff;\">Load<"
                        "/span></p></body></html>", nullptr));
        KpLineEdit->setText(QApplication::translate("SecDialog", "14", nullptr));
        KiLineEdit->setText(QApplication::translate("SecDialog", "0.0143", nullptr));
        KdLineEdit->setText(QApplication::translate("SecDialog", "10", nullptr));
        AngleLineEdit->setText(QApplication::translate("SecDialog", "5000", nullptr));
        send_btn->setText(QApplication::translate("SecDialog", "SEND", nullptr));
        checkBox->setText(QString());
        textBrowser_2->setHtml(QApplication::translate("SecDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600; color:#ff0000;\">COMMUNICATION</span></p></body></html>", nullptr));
        start_btn->setText(QApplication::translate("SecDialog", "START", nullptr));
        stop_btn->setText(QApplication::translate("SecDialog", "STOP", nullptr));
        textBrowser_3->setHtml(QApplication::translate("SecDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600; color:#ff0000;\">    SYSTEM CLOCK</span></p></body></html>", nullptr));
        reset_btn->setText(QApplication::translate("SecDialog", "TimeReset", nullptr));
        label_slider->setText(QString());
        Logo_RIC->setText(QString());
        label->setText(QApplication::translate("SecDialog", "Output Response", nullptr));
        label_4->setText(QApplication::translate("SecDialog", "Error Signal", nullptr));
        label_5->setText(QApplication::translate("SecDialog", "Control Signal", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SecDialog: public Ui_SecDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECDIALOG_H
