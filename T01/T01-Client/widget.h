#ifndef WIDGET_H
#define WIDGET_H
#include <QWidget>
#include <QTcpSocket>
#include <QTextStream>
#include <QMessageBox>
#include <iostream>
#include <QDebug>
#include <QString>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <string>
#include <sstream>
using namespace std;

namespace Ui { class Widget; }
class QTcpSocket;
class Widget : public QWidget{
    Q_OBJECT
public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
private slots:
//    void on_Conectar_clicked();
    void on_Quitar_clicked();
    void on_Run_clicked();
private:
    int *vect;
    void mostrarDatos();
    void reset();
    int V,i;
    QString resp;
    string numRuta=" es ";
    string ruta="ruta 0 -> ";
    string vertice="La cantidad de vertices que posee el grafo son: ";
    Ui::Widget *ui;
    QTcpSocket *mSocket;
};
#endif // WIDGET_H
