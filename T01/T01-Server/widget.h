#ifndef WIDGET_H
#define WIDGET_H
#include <QWidget>
#include <QMessageBox>
#include <QTcpSocket>
#include "server.h"
namespace Ui { class Widget; }
class QTcpSocket;
class Server;
class Widget : public QWidget{
    Q_OBJECT
public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
//    void on_Iniciar_clicked();
//    void on_Detener_clicked();
private:
    Server *mServer;
    QTcpSocket *mSocket;
    Ui::Widget *ui;
};
#endif // WIDGET_H
