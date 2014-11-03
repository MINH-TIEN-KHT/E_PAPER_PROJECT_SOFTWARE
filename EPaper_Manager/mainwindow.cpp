#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <QDebug>
#include <QMessageBox>
#include <QThread>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    serial = new QSerialPort(this);
    foreach (const QSerialPortInfo &portInfo, QSerialPortInfo::availablePorts())
    {
        qDebug() << "Name        : " << portInfo.portName();
        qDebug() << "Description : " << portInfo.description();
        qDebug() << "Manufacturer: " << portInfo.manufacturer();
        ui->comportnameBox->addItem(portInfo.portName());
    }

    connect(ui->connectButton, SIGNAL(clicked()), this, SLOT(onConnectButtonClicked()));
    connect(serial, SIGNAL(readyRead()), this, SLOT(onReceiveData()));
    connect(this, SIGNAL(msgReceived(QByteArray)),this, SLOT(handleMavlinkMsg(QByteArray)));

    connect(ui->sendButton, SIGNAL(clicked()), this, SLOT(onSendButtonClicked()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onConnectButtonClicked()
{
    QMessageBox msgBox;
    if(!serial->isOpen())
    {
        serial->setPortName(ui->comportnameBox->currentText());
        if(serial->open(QIODevice::ReadWrite)) // successful
        {
            serial->setBaudRate(QSerialPort::Baud115200, QSerialPort::AllDirections);
            serial->setParity(QSerialPort::NoParity);
            serial->setDataBits(QSerialPort::Data8);
            serial->setFlowControl(QSerialPort::NoFlowControl);
            serial->setStopBits(QSerialPort::OneStop);

            ui->connectButton->setText("Hủy");
            ui->statusBar->showMessage("Đang kết nối.");

            serial->setRequestToSend(0);
            serial->setDataTerminalReady(1);
            serial->setDataTerminalReady(0);
        }
        else
        {
            msgBox.setText("Không thể kết nối với thiết bị. Vui lòng thử lại!");
            msgBox.setIcon(QMessageBox::Critical);
            msgBox.exec();
        }
    }
    else
    {
        serial->close();
        ui->connectButton->setText("Kết nối");
        ui->statusBar->showMessage("Ngắt kết nối.");
    }
}

void MainWindow::onReceiveData()
{
    QByteArray msgData;
    if (serial->bytesAvailable()){
//        qDebug("Received Serial Data");
        msgData = serial->readAll();
        serial->flush();
        emit msgReceived(msgData);
    }
}

void MainWindow::onSendButtonClicked()
{
    mavlink_message_t msg;
    uint8_t buf[MAVLINK_MAX_PACKET_LEN];
    uint16_t len=0;
    uint8_t lenStr;

    QString vendorStr = ui->vendorlineEdit->text();
    lenStr = vendorStr.length();
    mavlink_msg_display_string_pack(SYSTEM_ID, MAV_COMP_ID_1, &msg,\
                  0, 15, CENTER, lenStr, vendorStr.toLatin1());
    len = mavlink_msg_to_send_buffer(buf, &msg);
    qDebug("send display string request.");
    serial->write((const char*)buf, len);    
    QThread::msleep(50);

//    QString brandStr = ui->brandlineEdit->text();
//    lenStr = brandStr.length();
//    mavlink_msg_display_string_pack(SYSTEM_ID, MAV_COMP_ID_1, &msg,\
//                  0, 10, LEFT, lenStr, brandStr.toLatin1());
//    len = mavlink_msg_to_send_buffer(buf, &msg);
//    qDebug("send display string request.");
//    serial->write((const char*)buf, len);
//    QThread::msleep(50);

}

void MainWindow::handleMavlinkMsg(QByteArray buff)
{
    mavlink_message_t msg;
    mavlink_status_t status;
    unsigned int state;
    uint8_t byte;
    int index=0;

    for(index=0; index < buff.size(); index++)
    {
        byte = buff[index];
        state = mavlink_parse_char(MAVLINK_COMM_0,byte, &msg, &status);

        if(state)
        {
            switch (msg.msgid)
            {
            case MAVLINK_MSG_ID_HEARTBEAT:
            {
                mavlink_heartbeat_t heartbeat;
                heartbeat.mavlink_version = 0;
                mavlink_msg_heartbeat_decode(&msg,&heartbeat);
                qDebug("Heart beat");
                break;
            }
            default:
                break;
            } // end of switch
        }
    }
}
