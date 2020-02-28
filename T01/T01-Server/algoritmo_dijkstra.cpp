#include "algoritmo_dijkstra.h"
void Algoritmo_Dijkstra::Algoritmo(int graph[4][4], int src){
    int dist[V];
        // distance from src to i
        bool sptSet[V]; // sptSet[i] will be true if vertex i is included in shortest
        // path tree or shortest distance from src to i is finalized
        // Initialize all distances as INFINITE and stpSet[] as false
        for (int i = 0; i < V; i++)
            dist[i] = INT_MAX, sptSet[i] = false;
        // Distance of source vertex from itself is always 0
        dist[src] = 0;
        // Find shortest path for all vertices
        for (int count = 0; count < V - 1; count++) {
            // Pick the minimum distance vertex from the set of vertices not
            // yet processed. u is always equal to src in the first iteration.
            int u = minDistance(dist, sptSet);
            // Mark the picked vertex as processed
            sptSet[u] = true;
            // Update dist value of the adjacent vertices of the picked vertex.
            for (int v = 0; v < V; v++)
                // Update dist[v] only if is not in sptSet, there is an edge from
                // u to v, and total weight of path from src to v through u is
                // smaller than current value of dist[v]
                if (!sptSet[v] && graph[u][v] && dist[u] != INT_MAX
                    && dist[u] + graph[u][v] < dist[v])
                    dist[v] = dist[u] + graph[u][v];
        }
        printSolution(dist);
}
Algoritmo_Dijkstra::Algoritmo_Dijkstra(){}
int Algoritmo_Dijkstra::minDistance(int *dist, bool *sptSet){
    // Initialize min value
       int min = INT_MAX, min_index;
       for (int v = 0; v < V; v++)
           if (sptSet[v] == false && dist[v] <= min)
               min = dist[v], min_index = v;
       return min_index;
}
void Algoritmo_Dijkstra::printSolution(int *dist){
    printf("Vertex \t\t Distance from Source\n");
    for (int i = 0; i < V; i++)
        printf("%d \t\t %d\n", i, dist[i]);
}
