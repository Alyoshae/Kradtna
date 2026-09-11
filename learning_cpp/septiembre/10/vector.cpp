#include <iostream> 
#include <vector> 


class Vector{
    public:
        Vector(int); //constructor
        Vector(){delete[]elem;} //desctructor
        int size const {return sz;} //tamaño del vector
    private: 
        int sz; //tamaño
        double* elem; //puntero a los elementos
};
//constructor
Vector::Vector(int s) : sz{s}, elem{new double[s]} 
{for (int i=0;i<s;++i){
    elem[i]=0;
}}
//destructor
Vector::~Vector(){delete[]elem;} 


int main(){

    return 0;
}