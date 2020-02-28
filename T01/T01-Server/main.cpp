#include "widget.h"
#include <algoritmo_dijkstra.h>
#include <QApplication>
#include <iostream>
#include <csvreader.h>
#include <graph.h>
using namespace std;
int main(int argc, char *argv[]){
    //QApplication a(argc, argv);
    //Widget w;
    //w.show();
    //return a.exec();
    CSVReader *ho=new CSVReader("/home/aldo/Escritorio/Datos-2/T01/T01-Server/Grafo.txt");
    ho->sacarDatos();
    ho->grafo->Dijkstra(0);

//    int graph2[4][4]={{0,3,2,10},
//                      {3,0,0,7},
//                      {2,0,0,1},
//                      {10,7,1,0}
//    };
    //ho->sacarDatos();

    //dijkstra(graph, 0);

}
