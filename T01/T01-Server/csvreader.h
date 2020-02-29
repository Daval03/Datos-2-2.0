#ifndef CSVREADER_H
#define CSVREADER_H
#include <iostream>
#include <fstream>
#include "graph.h"
#include <string>
#include <vector>
#include <sstream>
#define INT_MAX		2147483647
using namespace std;
class CSVReader{
public:
    Graph *grafo=new Graph;
    void cargarGrafo();
    void descargarGrafo();
    CSVReader(string filename);
private:
    string fileName;
};

#endif // CSVREADER_H
