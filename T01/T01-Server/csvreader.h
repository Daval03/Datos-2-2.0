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
/**
 * @brief The CSVReader class
 * @title Clase del CSVReader
 */
class CSVReader{
public:
    /**
     * @brief clase del grafo
     * @param nada
     * @return las rutas mas cortas desde el vertice 0
     */
    Graph *grafo=new Graph;
    /**
     * @brief cargarGrafo, saca los valores del txt y los pone en el grafo establecido
     * @param nada, se ponen segun se crea
     * @return nada
     */
    void cargarGrafo();
    /**
     * @brief descarga los atributos del grafo
     * @param nada
     * @return nada
     */
    void descargarGrafo();
    /**
     * @brief Es el constructor de la clase
     * @param filename, la ruta del txt
     * @return nada
     */
    CSVReader(string filename);
private:
    /**
     * @brief fileName, ruta del txt
     */
    string fileName;
};

#endif // CSVREADER_H
