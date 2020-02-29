#include "widget.h"
#include <algoritmo_dijkstra.h>
#include <QApplication>
#include <iostream>
#include <csvreader.h>
#include <graph.h>
using namespace std;
int main(int argc, char *argv[]){
    QApplication a(argc, argv);
    Widget w;
    //w.show();
    return a.exec();
}
