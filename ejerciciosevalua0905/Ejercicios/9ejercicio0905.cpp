#include<iostream>

using namespace std;

int numeros[100][100];
int filas;
int columnas;

int numeros2[100][100];
int filas2;
int columnas2;

void proceso1();
void proceso2();
void multiplicar();

int main(int argc, char const *argv[]) {
    proceso1();
    proceso2();
    multiplicar();

    return 0;
}

void proceso1() {
    cout << "Digita el numero de filas de la primera matriz: ";
    cin >> filas;
    cout << "Digita el numero de columnas de la primera fila: ";
    cin >> columnas;

    int i = 0;
    while (i < filas) {
        int j = 0;
        while (j < columnas) {
            cout << "Digite un numero: [" << i << "][" << j << "]: ";
            cin >> numeros[i][j];
            j++;
        }
        i++;
    }

    cout << "Matriz ingresada:\n";
    int i1 = 0;
    while (i1 < filas) {
        int j1 = 0;
        while (j1 < columnas) {
            cout << numeros[i1][j1] << " ";
            j1++;
        }
        cout << "\n";
        i1++;
    }
}

void proceso2() {
    cout << "Segunda matriz\n";
    cout << "Digite el numero de filas de la matriz: ";
    cin >> filas2;
    cout << "Digite el numero de columnas: ";
    cin >> columnas2;

    int i = 0;
    while (i < filas2) {
        int j = 0;
        while (j < columnas2) {
            cout << "Digite un numero [" << i << "][" << j << "]: ";
            cin >> numeros2[i][j];
            j++;
        }
        i++;
    }
}

void multiplicar() {
    if (columnas != filas2) {
        cout << "No se pueden multiplicar las matrices debido a dimensiones incompatibles.\n";
        return;
    }

    int result[100][100];

    int i = 0;
    while (i < filas) {
        int j = 0;
        while (j < columnas2) {
            result[i][j] = 0;
            int k = 0;
            while (k < columnas) {
                result[i][j] += numeros[i][k] * numeros2[k][j];
                k++;
            }
            j++;
        }
        i++;
    }

    cout << "Matriz resultante:\n";
    int i1 = 0;
    while (i1 < filas) {
        int j1 = 0;
        while (j1 < columnas2) {
            cout << result[i1][j1] << " ";
            j1++;
        }
        cout << "\n";
        i1++;
    }
}
