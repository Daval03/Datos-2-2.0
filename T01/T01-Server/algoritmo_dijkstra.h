#ifndef ALGORITMO_DIJKSTRA_H
#define ALGORITMO_DIJKSTRA_H
#include <string>
#define INT_MAX 2147483647
using namespace std;
class Algoritmo_Dijkstra{
public:
    const int V=4;
    string rutas;
    int minDistance(int dist[], bool sptSet[]);
    void Algoritmo(int graph[4][4], int src);
    Algoritmo_Dijkstra();
    void printSolution(int dist[]);
};

#endif // ALGORITMO_DIJKSTRA_H
