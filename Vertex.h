#ifndef _VERTEX_H_
#define _VERTEX_H_
#include <iostream>
#include <list>
#include "Edge.h"
using namespace std;

template<class T>
class Vertex {

    private: 
        T data;
        list<Edge> edgeList;

    public:
        Vertex();
        Vertex(T data, list<Edge> edgeList);
        ~Vertex();
        T getData();
        void setData(T givenData);
        list<Edge> getEdgelist();

};


#endif