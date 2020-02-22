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

namespace Ui { class Widget; }
class QTcpSocket;
class Widget : public QWidget{
    Q_OBJECT
public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
private slots:
    void on_Conectar_clicked();
    void on_Quitar_clicked();
    void on_Run_clicked();

private:
    bool connected;
    Ui::Widget *ui;
    QTcpSocket *mSocket;
};
#endif // WIDGET_H
