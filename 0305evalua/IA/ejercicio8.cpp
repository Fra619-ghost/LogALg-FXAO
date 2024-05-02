#include <iostream>
#include <vector>

int main() {
    int longitud;
    std::cout << "Ingrese la longitud de los vectores: ";
    std::cin >> longitud;

    
    std::vector<int> vec1(longitud);
    std::vector<int> vec2(longitud);

    
    std::cout << "Ingrese los elementos del primer vector (separados por espacios): ";
    for (int i = 0; i < longitud; i++) {
        std::cin >> vec1[i];
    }

   
    std::cout << "Ingrese los elementos del segundo vector (separados por espacios): ";
    for (int i = 0; i < longitud; i++) {
        std::cin >> vec2[i];
    }

   
    int producto_punto = 0;
    for (int i = 0; i < longitud; i++) {
        producto_punto += vec1[i] * vec2[i];
    }

    // Mostrar el resultado
    std::cout << "El producto punto de los dos vectores es: " << producto_punto << std::endl;

    return 0;
}
