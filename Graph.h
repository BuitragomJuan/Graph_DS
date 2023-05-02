#ifndef _GRAPH_H_
#define _GRAPH_H_
#include <vector>
#include "Vertex.h"

using namespace std;

class Graph{

    private:
        vector<Vertex> vertices;

    public:
        Graph();
        ~Graph();

};


#endif