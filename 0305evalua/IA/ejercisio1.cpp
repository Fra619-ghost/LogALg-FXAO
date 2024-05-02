#include <iostream>

using namespace std;

int calcularSuma(int n) {
    int suma = 0;
    for (int i = 1; i <= n; ++i) {
        suma += i;
    }
    return suma;
}

int main() {
    int n;
    cout << "Ingrese un número natural n: ";
    cin >> n;

    if (n < 0) {
        cout << "Por favor ingrese un número natural positivo." << endl;
        return 1;
    }

    int suma = calcularSuma(n);
    cout << "La suma de los números naturales desde 1 hasta " << n << " es: " << suma << endl;

    return 0;
}
