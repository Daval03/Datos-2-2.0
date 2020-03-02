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
    /**
     * @brief on_Quitar_clicked, apagar el sistema
     */
    void on_Quitar_clicked();
    /**
     * @brief on_Run_clicked, mandar el json al server
     */
    void on_Run_clicked();
private:
    /**
     * @brief mostrarDatos, muestra las rutas mas cortas
     */
    void mostrarDatos();
    /**
     * @brief reset, resetea v,i y vertice
     */
    void reset();
    /**
     * @brief V, numero de vertices
     * @brief i, numero para imprimir las rutas
     */
    int V,i,compVertice;
    /**
     * @brief resp, la info del json y el vertice de origen que se usara para las comparaciones
     */
    QString resp;
    /**
     * @brief numRuta,ruta,vertice info de interfaz
     */
    string numRuta=" es ";
    string ruta;
    string vertice="La cantidad de vertices que posee el grafo son: ";
    /**
     * @brief ui, la clase de interfaz
     */
    Ui::Widget *ui;
    /**
     * @brief mSocket la clase del socket
     */
    QTcpSocket *mSocket;

};
#endif // WIDGET_H
