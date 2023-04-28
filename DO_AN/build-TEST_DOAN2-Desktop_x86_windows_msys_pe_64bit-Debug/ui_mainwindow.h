/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label_pic;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QFrame *line;
    QLabel *label_pic_ute;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *pushButton;
    QLabel *label_6;
    QLabel *label_pic2;
    QLabel *label_pic3;
    QLabel *label_7;
    QTextBrowser *textBrowser;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1132, 636);
        MainWindow->setContextMenuPolicy(Qt::PreventContextMenu);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        MainWindow->setToolButtonStyle(Qt::ToolButtonIconOnly);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_pic = new QLabel(centralwidget);
        label_pic->setObjectName(QString::fromUtf8("label_pic"));
        label_pic->setGeometry(QRect(950, 0, 141, 151));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(170, 0, 771, 61));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(20);
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(380, 50, 321, 51));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(18);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setWeight(75);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(230, 130, 621, 51));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Arial"));
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setItalic(true);
        font2.setWeight(75);
        label_3->setFont(font2);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(85, 0, 255);"));
        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(170, 100, 771, 31));
        line->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);\n"
"color: rgb(255, 0, 0);"));
        line->setFrameShadow(QFrame::Plain);
        line->setLineWidth(4);
        line->setMidLineWidth(1);
        line->setFrameShape(QFrame::HLine);
        label_pic_ute = new QLabel(centralwidget);
        label_pic_ute->setObjectName(QString::fromUtf8("label_pic_ute"));
        label_pic_ute->setGeometry(QRect(10, 0, 141, 151));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(410, 190, 261, 51));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Bahnschrift SemiBold"));
        font3.setPointSize(18);
        font3.setBold(true);
        font3.setItalic(false);
        font3.setWeight(75);
        label_4->setFont(font3);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(0, 170, 0);"));
        label_4->setFrameShape(QFrame::NoFrame);
        label_4->setFrameShadow(QFrame::Plain);
        label_4->setLineWidth(0);
        label_4->setMidLineWidth(0);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(300, 250, 501, 51));
        label_5->setFont(font3);
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_5->setFrameShape(QFrame::NoFrame);
        label_5->setFrameShadow(QFrame::Plain);
        label_5->setLineWidth(0);
        label_5->setMidLineWidth(0);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(480, 390, 121, 41));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Arial"));
        font4.setPointSize(10);
        font4.setBold(true);
        font4.setWeight(75);
        pushButton->setFont(font4);
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(0, 255, 0);\n"
"background-color: rgb(0, 0, 0);\n"
"boder-radius:50px;"));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(160, 320, 831, 51));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Arial"));
        font5.setPointSize(24);
        font5.setBold(false);
        font5.setItalic(false);
        font5.setWeight(50);
        label_6->setFont(font5);
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        label_6->setFrameShape(QFrame::NoFrame);
        label_6->setFrameShadow(QFrame::Plain);
        label_6->setLineWidth(0);
        label_6->setMidLineWidth(0);
        label_pic2 = new QLabel(centralwidget);
        label_pic2->setObjectName(QString::fromUtf8("label_pic2"));
        label_pic2->setGeometry(QRect(90, 490, 51, 51));
        label_pic3 = new QLabel(centralwidget);
        label_pic3->setObjectName(QString::fromUtf8("label_pic3"));
        label_pic3->setGeometry(QRect(670, 470, 71, 71));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(160, 490, 261, 51));
        QFont font6;
        font6.setFamily(QString::fromUtf8("Bahnschrift SemiBold"));
        font6.setPointSize(12);
        font6.setBold(true);
        font6.setItalic(false);
        font6.setWeight(75);
        label_7->setFont(font6);
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(255, 85, 0);"));
        label_7->setFrameShape(QFrame::NoFrame);
        label_7->setFrameShadow(QFrame::Plain);
        label_7->setLineWidth(0);
        label_7->setMidLineWidth(0);
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(720, 470, 351, 81));
        textBrowser->setFrameShape(QFrame::NoFrame);
        textBrowser->setFrameShadow(QFrame::Raised);
        textBrowser->setLineWidth(1);
        textBrowser->setMidLineWidth(0);
        textBrowser->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1132, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label_pic->setText(QString());
        label->setText(QApplication::translate("MainWindow", "TR\306\257\341\273\234NG \304\220\341\272\240I H\341\273\214C S\306\257 PH\341\272\240M K\341\273\270 THU\341\272\254T TPHCM KHOA \304\220I\341\273\206N - \304\220I\341\273\206N T\341\273\254", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "KHOA \304\220I\341\273\206N - \304\220I\341\273\206N T\341\273\254", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "NG\303\200NH: C\303\224NG NGH\341\273\206 K\341\273\270 THU\341\272\254T \304\220I\341\273\200U KHI\341\273\202N V\303\200 T\341\273\260 \304\220\341\273\230NG H\303\223A", nullptr));
        label_pic_ute->setText(QString());
        label_4->setText(QApplication::translate("MainWindow", "B\303\201O C\303\201O CU\341\273\220I K\341\273\262", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "M\303\264n h\341\273\215c: \304\220\341\273\223 \303\241n 2 \304\220i\341\273\201u khi\341\273\203n T\341\273\261 \304\220\341\273\231ng", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "START", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "\304\220\341\273\201 t\303\240i : \304\220i\341\273\201u khi\341\273\203n \304\221\341\273\231ng c\306\241 DC c\303\263 t\341\272\243i thay \304\221\341\273\225i", nullptr));
        label_pic2->setText(QString());
        label_pic3->setText(QString());
        label_7->setText(QApplication::translate("MainWindow", "GVHD: TS. TR\341\272\246N \304\220\341\273\250C THI\341\273\206N", nullptr));
        textBrowser->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:600; color:#55007f;\">Nh\303\263m th\341\273\261c hi\341\273\207n: 04</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:600; color:#55007f;\">\303\202u \304\220o\303\240n Trung - 20151201</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\""
                        " font-size:11pt; font-weight:600; color:#55007f;\">Ph\341\272\241m Phi Long - 20151507</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:11pt; font-weight:600; color:#55007f;\"><br /></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
