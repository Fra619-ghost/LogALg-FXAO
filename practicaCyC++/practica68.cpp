#include <iostream>
using namespace std;

const int MAX_ROWS = 10;
const int MAX_COLS = 10;

void multiplyMatrices(int mat1[MAX_ROWS][MAX_COLS], int mat2[MAX_ROWS][MAX_COLS], int result[MAX_ROWS][MAX_COLS], int rows1, int cols1, int rows2, int cols2) {
    // Verificar si las dimensiones son compatibles para la multiplicación
    if (cols1 != rows2) {
        cout << "No se pueden multiplicar las matrices debido a dimensiones incompatibles." << endl;
        return;
    }

    // Inicializar la matriz resultante con ceros
    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < cols2; ++j) {
            result[i][j] = 0;
        }
    }

    // Multiplicar matrices
    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < cols2; ++j) {
            for (int k = 0; k < cols1; ++k) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

void inputMatrix(int mat[MAX_ROWS][MAX_COLS], int rows, int cols) {
    cout << "Ingresa los elementos de la matriz (" << rows << "x" << cols << "):" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Elemento [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> mat[i][j];
        }
    }
}

void displayMatrix(int mat[MAX_ROWS][MAX_COLS], int rows, int cols) {
    cout << "Matriz Resultante:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int mat1[MAX_ROWS][MAX_COLS], mat2[MAX_ROWS][MAX_COLS], result[MAX_ROWS][MAX_COLS];
    int rows1, cols1, rows2, cols2;

    // Ingresar dimensiones de la primera matriz
    cout << "Ingresa el número de filas de la primera matriz: ";
    cin >> rows1;
    cout << "Ingresa el número de columnas de la primera matriz: ";
    cin >> cols1;

    // Ingresar elementos de la primera matriz
    inputMatrix(mat1, rows1, cols1);

    // Ingresar dimensiones de la segunda matriz
    cout << "Ingresa el número de filas de la segunda matriz: ";
    cin >> rows2;
    cout << "Ingresa el número de columnas de la segunda matriz: ";
    cin >> cols2;

    // Ingresar elementos de la segunda matriz
    inputMatrix(mat2, rows2, cols2);

    // Multiplicar las matrices
    multiplyMatrices(mat1, mat2, result, rows1, cols1, rows2, cols2);

    // Mostrar la matriz resultante
    displayMatrix(result, rows1, cols2);

    return 0;
}
