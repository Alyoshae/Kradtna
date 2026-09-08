//dependencia lineal. 
#include <iostream> 

class vector2{
    public: 
        vector2(): xy{0,0} {}
        vector2(float a, float b): xy{a,b} {}
        float xy[2];
};

class Matrix2{
    public: 
        Matrix2(): mn{} {} 
        Matrix2(const vector2& a, const vector2& b): mn{{a.xy[0], b.xy[0]},{a.xy[1],b.xy[1]}} {} 
        float mn[2][2];

};
std::ostream& operator<<(std::ostream& out, const vector2& a){
    return out << "Vector:\n" <<  '|' << a.xy[0] << "|\n|" << a.xy[1] << "|\n"; 
}
std::ostream& operator<<(std::ostream& out, const Matrix2& a){
    return out << "Matrix:\n" << '|' << a.mn[0][0] << '|' << a.mn[0][1] << '|' << '\n' << '|' << a.mn[1][0] << '|' << a.mn[1][1] << "|\n"; 
}

/*Se dice que en el algebra lineal que n vectores en un espacio vectorial V. Entonces se dice que los vectores son linealmente dependientes si existen N escalares no todos cero
tales que c1v1 + c2v2 + ... + cnvn = 0*/

int main(){
    vector2 a = {3,4};
    vector2 b = {2,1};
    Matrix2 c = {a,b};
    std::cout << a;
    std::cout << c;    
    return 0; 
}