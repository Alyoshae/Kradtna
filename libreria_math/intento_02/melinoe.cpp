#include<iostream> 
#include<cmath> 

class Vector3{
    public:
    //CONSTRUCTORES
    Vector3();
    Vector3(double, double, double);
    //SOLO LECTURA DE DIMENSION
    double x() const{return v[0];}
    double y() const{return v[1];}
    double z() const{return v[2];}
    //ARITMETICOS
    Vector3& operator+=(const Vector3&);
    Vector3& operator-=(const Vector3&);
    Vector3& operator*=(double); 
    Vector3& operator/=(double);
    //PRODUCTO PUNTO 
    double operator*(const Vector3&) const; 
    //MAGNITUD
    double mag() const;
    //NEGACION
    Vector3 operator-() const;


    private: 
    double v[3];
};

//CONSTRUCTORES
Vector3::Vector3() : v{0,0,0} {}
Vector3::Vector3(double x, double y, double z) : v{x,y,z} {}

//NEGACION (AREGLAR) 
Vector3 Vector3::operator-() const{
    return(-v[0],-v[1],-v[2]);
}

//SUMA DE VECTORES 
Vector3& Vector3::operator+=(const Vector3& w){
    v[0]+= w.v[0];
    v[1]+= w.v[1];
    v[2]+= w.v[2];
    return *this;
}

//RESTA DE VECTORES 
Vector3& Vector3::operator-=(const Vector3& w){
    v[0]-=w.v[0];
    v[1]-=w.v[1];
    v[2]-=w.v[2];
    return *this;
}

//PRODUCTO PUNTO 
double Vector3::operator*(const Vector3& w) const{
    return(v[0]*w.v[0]+v[1]*w.v[1]+v[2]*w.v[2]);
}

//MULTIPLICAR ESCALAR 
Vector3& Vector3::operator*=(double escalar){
    v[0]*= escalar; 
    v[1]*= escalar; 
    v[2]*= escalar;
    return *this; 
}

//DIVIDIR POR ESCALAR (MULTIPLICAR) 
Vector3& Vector3::operator/=(double escalar){
    v[0]/=escalar;
    v[1]/=escalar;
    v[2]/=escalar;
    return *this;
}

//MAGNITUD
double Vector3::mag() const{
    return(sqrt(v[0]*v[0]+v[1]*v[1]+v[2]*v[2]));
}

int main(){
    Vector3 willy{4,2,3}; 
    Vector3 diego{2,3,5}; 

    std::cout << willy.mag(); 
    std::cout << '\n' << willy.x(); 
    return 0; 

}