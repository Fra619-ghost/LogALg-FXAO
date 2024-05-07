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

int main(int argc, char const *argv[])
{
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

    // Almacenar elementos de la matriz
    for(int i = 0; i < filas; i++) {
        for(int j = 0; j < columnas; j++) {
            cout << "Digite un numero: [" << i << "][" << j << "]: ";
            cin >> numeros[i][j];
        }/*En esta parte como ya se definio el numero de filas y columnas ahora solo falta agregar los 
        elemntos que van a ir detro y para eso se utiliza el numeros[i][j], para que ingrese los valores
        hasta que el bucle se lo permita (numeros de filas y columnas definidas)*/
    }

    // Mostrar matriz
    cout << "Matriz ingresada:\n";
    for(int i = 0; i < filas; i++) {
        for(int j = 0; j < columnas; j++) {
            cout << numeros[i][j] << " ";
        }
        cout << "\n";
    }
}

void proceso2() {
    cout << "Segunda matriz\n";
    cout << "Digite el numero de filas de la matriz: ";
    cin >> filas2;
    cout << "Digite el numero de columnas: ";
    cin >> columnas2;

    for(int i = 0; i < filas2; i++) {
        for(int j = 0; j < columnas2; j++) {
            cout << "Digite un numero [" << i << "][" << j << "]: ";
            cin >> numeros2[i][j];
        }
    }
}

void multiplicar() {
    if (columnas != filas2) {
        cout << "No se pueden multiplicar las matrices debido a dimensiones incompatibles.\n";
        return;

        /*Se realiza un if para saber si las matrizds son compatibles para multiplicar entre ellas
        esto se hace de manera en que si el numero de columnas de la primera matriz no es igual al 
        numero de filas de la segunda matriz, no son comptatibles*/
    }

    int result[100][100];//se declara un array result para almacenar el resultado

    for(int i = 0; i < filas; i++) {
        for(int j = 0; j < columnas2; j++) {
            result[i][j] = 0;//se define en 0 para asegurar que no tenga ningun valor residual o basura
            for(int k = 0; k < columnas; k++) {/*se usa columnas como se pudo utilizar filas pq en teoria deben ser compatibles*/
                result[i][j] += numeros[i][k] * numeros2[k][j];
            }/*result al ser 0 y sumarlo con el producto de los dos numeros solo darias la 
            multiplicacion pq estraia multiplicando y sumando con 0, si dejamps el result normal
            se le sumaria el producto mas los valores del bucle*/
        }
    }/*se realiza otro ciclo k recorre las columnas de las matriz , para cada k se multiplica
    el elemento correspondiente de de la fila de la primera matriz y lo mismo pero con las columnas 
    de la segunda matriz*/

    // Mostrar matriz resultante
    cout << "Matriz resultante:\n";
    for(int i = 0; i < filas; i++) {
        for(int j = 0; j < columnas2; j++) {
            cout << result[i][j] << " ";
        }
        cout << "\n";
    }
}/*Este proceso se utiliza para imprimir el resultado final de la multiplicacion
emtre matrices*/
