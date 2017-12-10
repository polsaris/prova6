#ifndef OPIWATCH_H
#define OPIWATCH_H

#include <QWidget>
#include <QtNetwork>
#include <QPushButton>
#include <QKeyEvent>
#include <QFileSystemWatcher>
#include <QLabel>
#include <QTime>
#include <QDate>

class AnalogClock;
class MessageInfo;
class CallInfo;
class calaix;
class tb_calaix;

class OpiWatch : public QWidget
{
    Q_OBJECT
    
public:
    OpiWatch(QWidget *parent = 0);
    QLabel *lSMS;
    QLabel *lCall;
    QLabel *lBattery;
    QLabel *lBlueTooth;
    QLabel *lnBlueTooth;
    QFileSystemWatcher *fw;



protected:
    void keyPressEvent(QKeyEvent *);


    private:
    QTcpServer *tcpServer;
    QTcpSocket *tcpSocket;
    QTime *time;
    QDate *date;

    AnalogClock *analogClock;
    MessageInfo *messageInfo;
    CallInfo *callInfo;
    calaix *calaixx;
    tb_calaix *tb_calaixx;



public slots:
    void acceptConnection();
    void readTcpData();
    void updateFile();
};

#endif // OPIWATCH_H
