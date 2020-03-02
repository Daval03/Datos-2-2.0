#include "widget.h"
#include "ui_widget.h"
/**
 * @brief Widget::Widget lee el socket, y muestra la info
 * @param parent, un null_prt
 */
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
        if(V<compVertice){
            ui->cuadro->addItem("Error: El numero de vertice que se ingreso es mayor al del grafo");
            //QMessageBox::information(this,"Error","El numero de vertice que se ingreso es mayor al del grafo");
        }else{
            vertice.append(to_string(V));
            mostrarDatos();
            reset();
        }
    });
}
/**
 * @brief Widget::~Widget destruye la ui
 */
Widget::~Widget(){
    delete ui;
}
/**
 * @brief Widget::on_Quitar_clicked boton para cerrar el cliente
 */
void Widget::on_Quitar_clicked(){
    close();
}
/**
 * @brief Widget::on_Run_clicked boton para cargar el json y cargarlo en el socket
 */
void Widget::on_Run_clicked(){
    compVertice=ui->NVertice->value();
    QJsonObject Lista{
        {"Started-Flag","True"},
        {"CompVertice",compVertice}
    };
    QJsonArray jsarray {Lista};
    QJsonDocument jsDoc(jsarray);
    QString jsString = QString::fromLatin1(jsDoc.toJson());
    qDebug()<<jsDoc;
    mSocket->write(jsString.toLatin1());
}
/**
 * @brief Widget::reset resetea los valores de vertice,V y i
 */
void Widget::reset(){
    this->vertice="La cantidad de vertices que posee el grafo son: ";
    this->V=0;
    this->i=0;
}
/**
 * @brief Widget::mostrarDatos muestra las rutas mas cortas en la ui
 */
void Widget::mostrarDatos(){
    ruta="ruta "+to_string(compVertice)+" -> ";
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
        this->ruta="ruta "+to_string(compVertice)+" -> ";
        i++;
    }ui->cuadro->addItem("\n");
}
