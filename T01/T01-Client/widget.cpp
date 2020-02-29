#include "widget.h"
#include "ui_widget.h"
Widget::Widget(QWidget *parent)
    : QWidget(parent),ui(new Ui::Widget){
    ui->setupUi(this);
    mSocket=new QTcpSocket(this);
    mSocket->connectToHost("localhost",12345);
    connect(mSocket,&QTcpSocket::readyRead,[&](){//conectar el socket al server que esta listo
        QString str = mSocket->readAll();
        QJsonDocument jsonResponse = QJsonDocument::fromJson(str.toLatin1());
        QJsonArray jsonArray = jsonResponse.array();
        QJsonObject jsonObject = jsonArray.first().toObject();
        resp=jsonObject.value("Resultados").toString();
        V=jsonObject.value("Vertices").toInt();
        vertice.append(to_string(V));
        mostrarDatos();
        reset();
    });
}
Widget::~Widget(){
    delete ui;
}
void Widget::on_Quitar_clicked(){
    close();
}
void Widget::on_Run_clicked(){
    QJsonObject Lista{
        {"Started-Flag","True"}};
    QJsonArray jsarray {Lista};
    QJsonDocument jsDoc(jsarray);
    QString jsString = QString::fromLatin1(jsDoc.toJson());
    qDebug()<<jsDoc;
    mSocket->write(jsString.toLatin1());
}
void Widget::reset(){
    this->vertice="La cantidad de vertices que posee el grafo son: ";
    this->V=0;
    this->i=0;
}
void Widget::mostrarDatos(){
    ui->cuadro->addItem(QString::fromStdString(vertice));
    stringstream ss(resp.toStdString());
    this->i=0;
    while(ss.good()){
        string substr;
        getline( ss, substr, ',' );
        ruta.append(to_string(i));
        numRuta.append(substr);
        ruta.append(numRuta);
        ui->cuadro->addItem(QString::fromStdString(ruta));
        this->numRuta=" es ";
        this->ruta="ruta 0 -> ";
        i++;
    }
}
