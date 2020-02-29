#include "server.h"

Server::Server(QObject *parent) : QTcpServer(parent){
    mSocket=nullptr;
    connect(this, &Server::newConnection,[&](){
        mSocket= nextPendingConnection();
        connect(mSocket,&QTcpSocket::readyRead,[&](){
            QString str = mSocket->readAll();
            QJsonDocument jsonResponse = QJsonDocument::fromJson(str.toLatin1());
            QJsonArray jsonArray = jsonResponse.array();
            QJsonObject jsonObject = jsonArray.first().toObject();

            reader->cargarGrafo();
            QString resultados=QString::fromStdString(reader->grafo->Dijkstra(0));

            QJsonObject Lista{
                {"Resultados",resultados},
                {"Vertices",reader->grafo->V}
            };
            reader->descargarGrafo();
            QJsonArray jsarray {Lista};
            QJsonDocument jsDoc(jsarray);
            QString jsString = QString::fromLatin1(jsDoc.toJson());
            qDebug()<<jsDoc;
            mSocket->write(jsString.toLatin1());
        });

    });
}
