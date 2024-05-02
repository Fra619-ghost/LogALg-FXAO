#include <iostream>
#include <vector>

int main() {
    
    std::vector<int> vec1;
    int n;
    std::cout << "Ingrese los elementos del primer vector (separados por espacios): ";
    for (int i = 0; i < 5; i++) {
        std::cin >> n;
        vec1.push_back(n);
    }

    
    std::vector<int> vec2;
    std::cout << "Ingrese los elementos del segundo vector (separados por espacios): ";
    for (int i = 0; i < 5; i++) {
        std::cin >> n;
        vec2.push_back(n);
    }

    std::vector<int> vec3;
    for (int i = 0; i < 5; i++) {
        vec3.push_back(vec1[i] + vec2[i]);
    }

    
    std::cout << "La suma de los dos vectores es: ";
    for (int i = 0; i < 5; i++) {
        std::cout << vec3[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
