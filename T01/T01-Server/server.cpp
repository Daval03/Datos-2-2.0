#include "server.h"
/*!
 * \brief Server::Server
 * \param un null_puntr, que se vuleve un QTcpServer
 * \return nada, solo carga el JSon, con el resultado del algoritmo
 */
Server::Server(QObject *parent) : QTcpServer(parent){
    mSocket=nullptr;
    connect(this, &Server::newConnection,[&](){
        mSocket= nextPendingConnection();
        connect(mSocket,&QTcpSocket::readyRead,[&](){
            QString str = mSocket->readAll();
            QJsonDocument jsonResponse = QJsonDocument::fromJson(str.toLatin1());
            QJsonArray jsonArray = jsonResponse.array();
            QJsonObject jsonObject = jsonArray.first().toObject();
            compVertice=jsonObject.value("CompVertice").toInt();
            reader->cargarGrafo();
            if(compVertice < reader->grafo->V){
                respuesta=QString::fromStdString(reader->grafo->Dijkstra(compVertice));
            }
            QJsonObject Lista{
                {"Resultados",respuesta},
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
