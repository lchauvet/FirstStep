#include "CGraph.h"

CGraph::CGraph(int nbNodes){
   this->V = nbNodes;
   adj = new list<iPair> [nbNodes];
}

void CGraph::addEdge(int debut, int fin, int longueur){
   //adj[u].push_back(make_pair(fin,longueur));
   //adj[v].push_back(make_pair(debut,longueur));
}

