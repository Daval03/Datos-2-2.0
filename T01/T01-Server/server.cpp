#include "server.h"
#include <QTcpSocket>
#include <QDebug>
#include <QString>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
Server::Server(QObject *parent) : QTcpServer(parent){
    mSocket=nullptr;
    connect(this, &Server::newConnection,[&](){
        mSocket= nextPendingConnection();
        connect(mSocket,&QTcpSocket::readyRead,[&](){});
    });
}
