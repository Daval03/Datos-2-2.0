#ifndef SERVER_H
#define SERVER_H
#include <QTcpServer>
#include <string>
using namespace std;
class QTcpSocket;
class Server : public QTcpServer{
    Q_OBJECT
public:
    explicit Server(QObject *parent = nullptr);
    void envia(const QString &mensaje);
    QTcpSocket *mSocket;
    bool ExistenciaED(QString nombre);
signals:

public slots:
};

#endif // SERVER_H
