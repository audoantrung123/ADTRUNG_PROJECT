#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QTimer>
#include<QDateTime>
#include<QPixmap>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QWidget::setWindowTitle("PROJECT INTRODUCTION");
    QPixmap pix("D:/KY 2 - NAM 3/QT CREATOR/QT_PIC/a1.jpg");
    int w=ui->label_pic->width();
    int h=ui->label_pic->height();
    ui->label_pic->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));

    QPixmap pix2("D:/KY 2 - NAM 3/QT CREATOR/QT_PIC/a2.jpg");
    int w2=ui->label_pic_ute->width();
    int h2=ui->label_pic_ute->height();
    ui->label_pic_ute->setPixmap(pix2.scaled(w2,h2,Qt::KeepAspectRatio));

    QPixmap pix3("D:/KY 2 - NAM 3/QT CREATOR/QT_PIC/a4.jpg");
    int w3=ui->label_pic2->width();
    int h3=ui->label_pic2->height();
    ui->label_pic2->setPixmap(pix3.scaled(w3,h3,Qt::KeepAspectRatio));

    QPixmap pix4("D:/KY 2 - NAM 3/QT CREATOR/QT_PIC/a5.jpg");
    int w4=ui->label_pic3->width();
    int h4=ui->label_pic3->height();
    ui->label_pic3->setPixmap(pix4.scaled(w4,h4,Qt::KeepAspectRatio));



}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    hide();
    thirDialog= new ThirDialog(this);
    thirDialog->show();
}



