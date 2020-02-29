#include "widget.h"
#include "ui_widget.h"
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget){
    ui->setupUi(this);
    mServer=new Server(this);
    mServer->listen(QHostAddress::Any,12345);
    qDebug()<<"Server iniciado";
}
Widget::~Widget(){
    delete ui;
}
//void Widget::on_Iniciar_clicked(){//ui->Puerto->value()
//    if (!mServer->listen(QHostAddress::Any,12345)){//nombre del server que se el pone
//        QMessageBox::critical(this,"Error",mServer->errorString());
//    }else{
//        QMessageBox::information(this,"Server","Iniciando....");
//    }
//}

//void Widget::on_Detener_clicked(){
//    close();
//}
