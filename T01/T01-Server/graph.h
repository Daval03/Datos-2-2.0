#ifndef GRAPH_H
#define GRAPH_H
#include<bits/stdc++.h>
using namespace std;
# define INF 0x3f3f3f3f
class Graph{
private:
    int V;
    list<pair<int,int>>*adj;
public:
    void setDatos(int v);
    Graph();
    Graph(int V);
    void addEdge(int u,int v,int w);
    void Dijkstra(int s);
};

#endif // GRAPH_H
