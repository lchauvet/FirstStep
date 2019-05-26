/**
	CGraph.h
	Purpose: Graphe

	@author
	@version
*/
#ifndef INC_GRAPH
#define INC_GRAPH

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

#define INF 99999

typedef pair<int, int> iPair;

class CGraph
{
   int V;

   /* In the graph, we need to store node and weight pair for every edge */
   list< pair<int,int> > *adj;

public :
   /* constructor */
   CGraph(int nbNodes);

   /* segment */
   void addEdge(int debut,int fin,int longueur);
};

#endif
