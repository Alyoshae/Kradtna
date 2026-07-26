#include <iostream> 
#include <cmath> 

class Vector3{
    public: 
        Vector3(double,double,double); 
        double magnitud();
        void normalizar();
        void escalar(double); 
        double punto(Vector3);
        double sumavector(Vector3); 
        double show(){return x;}
        double show2(){return y;}
        double show3(){return z;}
    private: 
        double x,y,z;  
};

int main(){
    Vector3 willy{10,20,30};
    Vector3 diego{-10,-20,30};
    std::cout << willy.show() << '\n';
    willy.escalar(10);
    std::cout << willy.show() << '\n';
    std::cout << willy.punto(diego);
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
}
//VECTOR POR ESCALAR 
void Vector3::escalar(double esc){
    x = x*esc;
    y = y*esc;
    z = z*esc;
}
//PRODUCTO PUNTO 
double Vector3::punto(Vector3 dos){
    return(x*dos.x+y*dos.y+z*dos.z);
}

//SUMA VECTOR 
