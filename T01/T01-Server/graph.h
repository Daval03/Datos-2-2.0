#ifndef GRAPH_H
#define GRAPH_H
#include<bits/stdc++.h>
using namespace std;
# define INF 0x3f3f3f3f
class Graph{
private:
    /**
     * @brief adj,son los vertices del grafo
     */
    list<pair<int,int>>*adj;
public:
    /**
     * @brief V, el numero de vertices
     */
    int V;
    /**
     * @brief respuesta,las rutas mas cortas
     */
    string respuesta;
    /**
     * @brief setDatos, inicializa los atributos de la clase
     * @param V, numero de vertices
     */
    void setDatos(int V);
    /**
     * @brief Graph,constructor de la clase
     */
    Graph();
    /**
     * @brief Graph, contructor de la clase
     * @param V, numero de vertices
     */
    Graph(int V);
    /**
     * @brief addEdge, crea una union de dos vertices con sus pesos
     * @param u, vertice origen
     * @param v, vertice destino
     * @param w, peso de la arista
     */
    void addEdge(int u,int v,int w);
    /**
     * @brief Dijkstra, me calcula la ruta mas corta de un vertice con respecto a los otros
     * @param s, desde donde se calcularan las rutas mas cortas
     * @return las rutas mas cortas
     */
    string Dijkstra(int s);
};

#endif // GRAPH_H
