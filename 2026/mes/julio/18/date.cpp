#include<iostream> 

class Date{
    public: //interface, la vista publica al usuario publico, lo que puedo hacer. 
        Date(int y, int m, int d); 
        void add_day(int n); 
        int month(){return m;}
        int day(){return d;}
        int year(){return y;}
    private: //implementacion 
        int y,m,d; 
};
Date::Date(int yy, int mm, int dd) : y{yy}, m{mm}, d{dd} //constructor 
{}

int main(){



    return 0; 
}; 