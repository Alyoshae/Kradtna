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
    double mag_squared() const;
    double mag() const;
    //NEGACION
    Vector3 operator-() const;
    //LECTURA
    double operator[](int i) const{return v[i];}
    double& operator[](int i){return v[i];}
    //NORMALIZACION 

    private: 
    double v[3];
};

//CONSTRUCTORES
Vector3::Vector3() : v{0,0,0} {}
Vector3::Vector3(double x, double y, double z) : v{x,y,z} {}

//NEGACION 
Vector3 Vector3::operator-() const{
    return(Vector3(-v[0],-v[1],-v[2]));
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
    return *this *= 1/escalar;
}

//MAGNITUD AL CUADRADO
double Vector3::mag_squared() const{
    return(sqrt(v[0]*v[0]+v[1]*v[1]+v[2]*v[2]));
}

//MAGNITUD 
double Vector3::mag() const{
    return(sqrt(mag_squared()));
}

std::ostream& operator<<(std::ostream& out, const Vector3& v){
    return out << v.x() << ' ' << v.y() << ' ' << v.z();
}

//NORMALIZAR 


int main(){

    return 0; 
}

