#include <iostream> 
#include <cmath> 

class Vector3{
    public: 
        Vector3(double,double,double); 
        double magnitud();
        void normalizar();
        double show(){return x;}
        double show2(){return y;}
        double show3(){return z;}
    private: 
        double x,y,z;  
};

int main(){
    Vector3 willy{10,20,30};
    std::cout << willy.show() << '\n';
    std::cout << willy.magnitud()<<'\n';
    std::cout << willy.show() << '\n';
    willy.normalizar();
    std::cout << willy.show2();
    return 0; 
}

//CONSTRUCTOR
Vector3::Vector3(double xx, double yy, double zz) : x{xx},y{yy},z{zz} 
{}
//MAGNITUD DEL VECTOR
double Vector3::magnitud(){
    return (sqrt(x*x+y*y+z*z));
}
//NORMALIZAR EL VECTOR 
void Vector3::normalizar(){
    double mag{magnitud()};
    x = x/mag;
    y = y/mag;
    z = z/mag;
};

