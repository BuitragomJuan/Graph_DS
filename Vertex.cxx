#include <iostream>
#include "Vertex.h"
#include <list>
#include "Edge.h"
using namespace std;

template<class T>
Vertex<T>::Vertex(){

    this->data = NULL;
    this->edgeList = NULL;

}

template<class T>
Vertex<T>::Vertex(T data, list<Edge> list){

    this->data = data;
    this->edgeList = list;

}

template<class T>
Vertex<T>::~Vertex(){



}


template<class T>
void Vertex<T>::setData(T data){

    this->data = data; 

}

template<class T>
T Vertex<T>::getData(){

    return this->data;
}

template<class T>
list<Edge> Vertex<T>::getEdgelist(){

    return this->edgeList;

}
