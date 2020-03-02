#include "graph.h"
/**
 * @brief Graph::Graph, contructor de la clase
 * @param V, numero de vertices
 */
Graph::Graph(int V) {
    this->V=V;
    adj=new list<pair<int,int>>[V];
}
/**
 * @brief Graph::setDatos, inicializa la clase
 * @param V, numero de verices
 */
void Graph::setDatos(int V) {
    this->V=V;
    adj=new list<pair<int,int>>[V];
}
/**
 * @brief Graph::Graph, contructor de la clase
 */
Graph::Graph() {}
/**
 * @brief Graph::addEdge, crea la union de verices
 * @param u,vertice origen
 * @param v,vertice destino
 * @param w,peso arista
 */
void Graph::addEdge(int u, int v, int w) {
    adj[u].push_back(make_pair(v,w));
    adj[v].push_back(make_pair(u,w));
}
/**
 * @brief Graph::Dijkstra, calcula las rutas mas cortas
 * @param src, vertice
 * @return las rutas mas cortas
 */
string Graph::Dijkstra(int src) {
    set< pair<int, int> > setds;
    vector<int> dist(V, INF);
    setds.insert(make_pair(0, src));
    dist[src] = 0;
    while (!setds.empty()){
        pair<int, int> tmp = *(setds.begin());
        setds.erase(setds.begin());
        int u = tmp.second;
        list< pair<int, int> >::iterator i;
        for (i = adj[u].begin(); i != adj[u].end(); ++i){
            int v = (*i).first;
            int weight = (*i).second;
            if (dist[v] > dist[u] + weight){
                if (dist[v] != INF)
                    setds.erase(setds.find(make_pair(dist[v], v)));
                dist[v] = dist[u] + weight;
                setds.insert(make_pair(dist[v], v));
            }
        }
    }for(int i=0;i<V;i++){
        string valor=to_string(dist[i]);
        if((i+1)!=V){
            valor+=",";
        }respuesta+=valor;
    }return respuesta;
}
