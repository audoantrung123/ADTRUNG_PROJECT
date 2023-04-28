#include "thirdialog.h"
#include "ui_thirdialog.h"

ThirDialog::ThirDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ThirDialog)
{
    ui->setupUi(this);
    QWidget::setWindowTitle("SETUP CONNECTION");
    // Ports
    QList<QSerialPortInfo> ports = info.availablePorts();
    QList<QString> stringPorts;
    for(int i = 0 ; i < ports.size() ; i++){
        stringPorts.append(ports.at(i).portName());
    }
    ui->comboBox->addItems(stringPorts);

    // Baud Rate Ratios
    QList<qint32> baudRates = info.standardBaudRates();
    QList<QString> stringBaudRates;
    for(int i = 0 ; i < baudRates.size() ; i++){
        stringBaudRates.append(QString::number(baudRates.at(i)));
    }
    ui->comboBox_2->addItems(stringBaudRates);

    // Data Bits
    ui->comboBox_3->addItem("5");
    ui->comboBox_3->addItem("6");
    ui->comboBox_3->addItem("7");
    ui->comboBox_3->addItem("8");

    // Stop Bits
    ui->comboBox_4->addItem("1 Bit");
    ui->comboBox_4->addItem("1,5 Bits");
    ui->comboBox_4->addItem("2 Bits");

    // Parities
    ui->comboBox_5->addItem("No Parity");
    ui->comboBox_5->addItem("Even Parity");
    ui->comboBox_5->addItem("Odd Parity");
    ui->comboBox_5->addItem("Mark Parity");
    ui->comboBox_5->addItem("Space Parity");

    //Flow Controls
    ui->comboBox_6->addItem("No Flow Control");
    ui->comboBox_6->addItem("Hardware Flow Control");
    ui->comboBox_6->addItem("Software Flow Control");

}

ThirDialog::~ThirDialog()
{
    delete ui;
}



void ThirDialog::on_pushButton_clicked()
{  

    QString portName = ui->comboBox->currentText();
    serialPort.setPortName(portName);

    QString stringbaudRate = ui->comboBox_2->currentText();
    int intbaudRate = stringbaudRate.toInt();
    serialPort.setBaudRate(intbaudRate);

    QString dataBits = ui->comboBox_3->currentText();
    if(dataBits == "5") {
       serialPort.setDataBits(QSerialPort::Data5);
    }
    else if((dataBits == "6")) {
       serialPort.setDataBits(QSerialPort::Data6);
    }
    else if(dataBits == "7") {
       serialPort.setDataBits(QSerialPort::Data7);
    }
    else if(dataBits == "8"){
       serialPort.setDataBits(QSerialPort::Data8);
    }

    QString stopBits = ui->comboBox_4->currentText();
    if(stopBits == "1 Bit") {
     serialPort.setStopBits(QSerialPort::OneStop);
    }
    else if(stopBits == "1,5 Bits") {
     serialPort.setStopBits(QSerialPort::OneAndHalfStop);
    }
    else if(stopBits == "2 Bits") {
     serialPort.setStopBits(QSerialPort::TwoStop);
    }

    QString parity = ui->comboBox_5->currentText();
    if(parity == "No Parity"){
      serialPort.setParity(QSerialPort::NoParity);
    }
    else if(parity == "Even Parity"){
      serialPort.setParity(QSerialPort::EvenParity);
    }
    else if(parity == "Odd Parity"){
      serialPort.setParity(QSerialPort::OddParity);
    }
    else if(parity == "Mark Parity"){
      serialPort.setParity(QSerialPort::MarkParity);
    }
    else if(parity == "Space Parity") {
        serialPort.setParity(QSerialPort::SpaceParity);
    }

    QString flowControl = ui->comboBox_6->currentText();
    if(flowControl == "No Flow Control") {
      serialPort.setFlowControl(QSerialPort::NoFlowControl);
    }
    else if(flowControl == "Hardware Flow Control") {
      serialPort.setFlowControl(QSerialPort::HardwareControl);
    }
    else if(flowControl == "Software Flow Control") {
      serialPort.setFlowControl(QSerialPort::SoftwareControl);
    }
    //serialPort.open(QIODevice::ReadWrite);


    /*if (serialPort.open(QIODevice::ReadWrite))
    {
        qDebug() << "Serial port is open!";
        secDialog= new SecDialog(this);
        secDialog->show();

    }else
    {
        //QMessageBox::warning(this, "Error", "Cannot open the selected port.");
        qDebug() << "Cannot open the selected port.";
    }
    */

}


void ThirDialog::on_start_btn_clicked()
{
    secDialog= new SecDialog(this);
    secDialog->show();
    hide();
}

