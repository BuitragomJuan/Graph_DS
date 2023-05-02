#define _EDGE_CXX_
#include "Edge.h"

using namespace std;



template<class T>
Edge<T>::Edge(){

    this->weight = 0;
    this->arrival = NULL;

}

template<class T>
Edge<T>::~Edge(){


}

template<class T>
Edge<T>::Edge(T arrival, int weight){

    this->weight = weight;
    this->arrival = arrival;

}

template<class T>
void Edge<T>::setArrival(T arrObj){

    this->arrival = arrObj;

}

template<class T>
T Edge<T>::getArrival(){

    return this->arrival;
}

template<class T>
void Edge<T>::setWeight(int weg){

    this->weight = weg;

}

template<class T>
int Edge<T>::getWeight(){

    return this->weight;
}