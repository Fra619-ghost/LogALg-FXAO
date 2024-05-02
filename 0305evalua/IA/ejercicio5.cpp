#include <iostream>

int main() {
    int calificaciones[8];
    int cantidad_aprobados = 0;
    int cantidad_reprobados = 0;
    float suma = 0;

    
    for (int i = 0; i < 8; i++) {
        std::cout << "Ingrese la calificación del estudiante " << i + 1 << ": ";
        std::cin >> calificaciones[i];
        suma += calificaciones[i];

        
        if (calificaciones[i] >= 70) {
            cantidad_aprobados++;
        } else {
            cantidad_reprobados++;
        }
    }

    
    float promedio = suma / 8;
    std::cout << "El promedio de calificaciones de la clase es: " << promedio << std::endl;

    
    std::cout << "Cantidad de estudiantes aprobados: " << cantidad_aprobados << std::endl;
    std::cout << "Cantidad de estudiantes reprobados: " << cantidad_reprobados << std::endl;

    return 0;
}
