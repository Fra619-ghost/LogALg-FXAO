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
        }/*En esta parte como ya se definio el numero de filas y columnas ahora solo falta agregar los 
        elemntos que van a ir detro y para eso se utiliza el numeros[i][j], para que ingrese los valores
        hasta que el bucle se lo permita (numeros de filas y columnas definidas)*/
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

    int result[100][100];//se declara un array result para almacenar el resultado

    int i = 0;
    while (i < filas) {
        int j = 0;
        while (j < columnas2) {
            result[i][j] = 0;//se define en 0 para asegurar que no tenga ningun valor residual o basura
            int k = 0;
            while (k < columnas) {
                result[i][j] += numeros[i][k] * numeros2[k][j];
                /*result al ser 0 y sumarlo con el producto de los dos numeros solo darias la 
            multiplicacion pq estraia multiplicando y sumando con 0, si dejamps el result normal
            se le sumaria el producto mas los valores del bucle*/
                k++;
            }
            j++;
        }/*se realiza otro ciclo k recorre las columnas de las matriz , para cada k se multiplica
    el elemento correspondiente de de la fila de la primera matriz y lo mismo pero con las columnas 
    de la segunda matriz*/
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
    }/*Este proceso se utiliza para imprimir el resultado final de la multiplicacion
emtre matrices*/

}
