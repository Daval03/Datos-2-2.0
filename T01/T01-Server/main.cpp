#include "widget.h"
#include <QApplication>
#include <iostream>
#include <csvreader.h>
#include <graph.h>
using namespace std;
int main(int argc, char *argv[]){
    QApplication a(argc, argv);
    Widget w;
    return a.exec();
}
