#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include "mavlink_epaper/include/mavlink_epaper/mavlink.h"

#define SYSTEM_ID 1  // PC address

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

signals:
    void msgReceived(QByteArray msg);

private slots:
    void onConnectButtonClicked();
    void onSendButtonClicked();
    void onReceiveData();
    void handleMavlinkMsg(QByteArray buff);

private:
    Ui::MainWindow *ui;
    QSerialPort *serial;

};

#endif // MAINWINDOW_H
