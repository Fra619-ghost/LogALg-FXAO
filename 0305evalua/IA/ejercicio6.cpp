#include <iostream>

int main() {
    int suma = 0;
    int numero = 100;

   
    while (numero <= 200) {
        if (numero % 2 == 0) {
            suma += numero;
        }
        numero++;
    }

    std::cout << "La suma de los números pares entre 100 y 200 es: " << suma << std::endl;

    return 0;
}
