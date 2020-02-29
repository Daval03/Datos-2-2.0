#ifndef SERVER_H
#define SERVER_H
#include <QTcpServer>
#include <string>
#include <csvreader.h>
#include <QTcpSocket>
#include <QDebug>
#include <QString>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
using namespace std;
class QTcpSocket;
class Server : public QTcpServer{
    Q_OBJECT
public:
    explicit Server(QObject *parent = nullptr);
    void envia(const QString &mensaje);
private:
    CSVReader *reader=new CSVReader("/home/aldo/Escritorio/Datos-2/T01/T01-Server/Grafo.txt");
    QTcpSocket *mSocket;
    bool ExistenciaED(QString nombre);
};

#endif // SERVER_H
