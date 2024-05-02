#include <iostream>

int main() {
    float calificaciones[10];
    float suma = 0;

    for (int i = 0; i < 10; i++) {
        std::cout << "Ingrese la calificación del estudiante " << i + 1 << ": ";
        std::cin >> calificaciones[i];
        suma += calificaciones[i];
    }

    
    float promedio = suma / 10;
    std::cout << "El promedio de calificaciones del grupo es: " << promedio << std::endl;

    return 0;
}
