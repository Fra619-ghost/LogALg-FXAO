#include <iostream>
using namespace std;

int factorial(int n);

int main() {
    int numero;
    cout << "ingresa un numero: ";
    cin >> numero;
    cout << "Factorial de " << numero << " es: " << factorial(numero) << endl;
    return 0;
}

int factorial(int n) {
    if(n < 0) return 0;
    else if(n > 1) return n*factorial(n-1);
    else return 1;
}