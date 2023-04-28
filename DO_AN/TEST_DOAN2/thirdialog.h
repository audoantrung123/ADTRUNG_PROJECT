#ifndef THIRDIALOG_H
#define THIRDIALOG_H

#include <QDialog>
#include"secdialog.h"
#include <QWidget>
#include <QSerialPort>
#include <QSerialPortInfo>

namespace Ui {
class ThirDialog;
}

class ThirDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ThirDialog(QWidget *parent = nullptr);
    ~ThirDialog();


private slots:
    void on_pushButton_clicked();

    void on_start_btn_clicked();

private:
    Ui::ThirDialog *ui;
    SecDialog *secDialog;
    QSerialPort serialPort;
    QSerialPortInfo info;

};

#endif // THIRDIALOG_H
