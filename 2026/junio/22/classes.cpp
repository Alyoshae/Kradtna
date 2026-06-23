#include <iostream>
#include <vector>

int main() {
    std::vector<int> v; 
    
    for(int i = 0; i < 4; i++) {
        int x = 0; 
        std::cin >> x; 
        v.push_back(x); 
    }

    std::cout << v.size() << " elementos." << std::endl;

    std::cout << "{";
    for (int i = 0; i < v.size(); i++){ //linker? int and size type comparison?? 
        std::cout << v[i];
        if(i != v.size()-1){
            std::cout << ", ";
        }
    }
    std::cout << "}"; 

    return 0; 
}
