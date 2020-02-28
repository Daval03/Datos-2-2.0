#include "widget.h"
#include "ui_widget.h"
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    ,ui(new Ui::Widget){
    ui->setupUi(this);
    mSocket=new QTcpSocket(this);
    connect(mSocket,&QTcpSocket::readyRead,[&](){//conectar el socket al server que esta listo
    });
}
Widget::~Widget(){
    delete ui;
}


void Widget::on_Conectar_clicked(){
    mSocket->connectToHost(ui->Nservidor->text(),ui->Puerto->value());
    if(mSocket->state()==QTcpSocket::ConnectedState){
        QMessageBox::information(this,"Server","Coneccion establecida");
    }else{
        QMessageBox::information(this,"Server","Coneccion no establecida");
    }
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