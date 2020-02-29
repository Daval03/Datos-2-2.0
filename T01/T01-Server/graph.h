#ifndef GRAPH_H
#define GRAPH_H
#include<bits/stdc++.h>
using namespace std;
# define INF 0x3f3f3f3f
class Graph{
private:
    list<pair<int,int>>*adj;
public:
    int V;
    string respuesta;
    void setDatos(int V);
    Graph();
    Graph(int V);
    void addEdge(int u,int v,int w);
    string Dijkstra(int s);
};

#endif // GRAPH_H
