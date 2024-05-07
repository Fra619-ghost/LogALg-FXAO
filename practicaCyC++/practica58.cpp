#include <iostream>

int sumarEnteros(int n) {
    // Caso base: si n es 0, devolvemos 0
    if (n == 0) {
        return 0;
    } else {
        // Llamada recursiva: sumamos n y el resultado de sumar los enteros desde 1 hasta n-1
        return n + sumarEnteros(n - 1);
    }
}

void mostrarResultado(int numero) {
    std::cout << "La suma de los enteros desde 1 hasta " << numero << " es: " << sumarEnteros(numero) << std::endl;
}

void ejecutarSwitch() {
    int opcion;
    
    std::cout << "Ingrese un número entero positivo o '0' para salir: ";
    std::cin >> opcion;
    
    switch(opcion) {
        case 0:
            std::cout << "Saliendo del programa...\n";
            return;
        default:
            mostrarResultado(opcion);
            break;
    }
    
    // Llamada recursiva para permitir múltiples selecciones
    ejecutarSwitch();
}

int main() {
    ejecutarSwitch();
return 0;
}