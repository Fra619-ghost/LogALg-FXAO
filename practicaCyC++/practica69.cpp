#include <iostream>
using namespace std;

const int MAX_ROWS = 10;
const int MAX_COLS = 10;

void transposeMatrix(int mat[MAX_ROWS][MAX_COLS], int transposed[MAX_COLS][MAX_ROWS], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            transposed[j][i] = mat[i][j];
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
    cout << "Matriz Transpuesta:" << endl;
    for (int i = 0; i < cols; ++i) {
        for (int j = 0; j < rows; ++j) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int mat[MAX_ROWS][MAX_COLS], transposed[MAX_COLS][MAX_ROWS];
    int rows, cols;

    // Ingresar dimensiones de la matriz
    cout << "Ingresa el número de filas de la matriz: ";
    cin >> rows;
    cout << "Ingresa el número de columnas de la matriz: ";
    cin >> cols;

    // Ingresar elementos de la matriz
    inputMatrix(mat, rows, cols);

    // Calcular la transposición de la matriz
    transposeMatrix(mat, transposed, rows, cols);

    // Mostrar la matriz transpuesta
    displayMatrix(transposed, cols, rows);

    return 0;
}
