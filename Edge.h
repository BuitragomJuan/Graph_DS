#ifndef _EDGE_H_
#define _EDGE_H_
#include <iostream>
#include <list>
using namespace std;


template<class T>
class Edge {

    private:
        T arrival;
        int weight;


    public:
        Edge();
        Edge(T arrival, int weight);
        ~Edge();
        T getArrival();
        void setArrival(T arrObj);
        int getWeight();
        void setWeight(int weight);

};


#endif