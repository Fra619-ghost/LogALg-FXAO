#include <iostream>
using namespace std;

void multiplicarMatrices(int primeraMatriz[][10], int segundaMatriz[][10], int mult[][10], int filaPrimera, int columnaPrimera, int filaSegunda, int columnaSegunda)
{
	int i, j, k;

	// Inicializando los elementos de la matriz mult a 0.
	for(i = 0; i < filaPrimera; ++i)
	{
		for(j = 0; j < columnaSegunda; ++j)
		{
			mult[i][j] = 0;
		}
	}

	// Multiplicando la matriz primeraMatriz y segundaMatriz y almacenándola en el array mult.
	for(i = 0; i < filaPrimera; ++i)
	{
		for(j = 0; j < columnaSegunda; ++j)
		{
			for(k=0; k<columnaPrimera; ++k)
			{
				mult[i][j] += primeraMatriz[i][k] * segundaMatriz[k][j];
			}
		}
	}
}

void mostrar(int mult[][10], int filaPrimera, int columnaSegunda)
{
	int i, j;

	cout << "Matriz de salida:" << endl;
	for(i = 0; i < filaPrimera; ++i)
	{
		for(j = 0; j < columnaSegunda; ++j)
		{
			cout << mult[i][j] << " ";
			if(j == columnaSegunda - 1)
				cout << endl << endl;
		}
	}
}

int main()
{
	int primeraMatriz[10][10], segundaMatriz[10][10], mult[10][10];
	int filaPrimera, columnaPrimera, filaSegunda, columnaSegunda;

	cout << "Ingrese filas y columnas para la primera matriz: ";
	cin >> filaPrimera >> columnaPrimera;

	cout << "Ingrese filas y columnas para la segunda matriz: ";
	cin >> filaSegunda >> columnaSegunda;

	if (columnaPrimera != filaSegunda) {
		cout << "¡Error! La columna de la primera matriz no es igual a la fila de la segunda." << endl;
	}
	else {
		cout << "Ingrese elementos de la matriz 1: " << endl;
		for(int i = 0; i < filaPrimera; ++i)
			for(int j = 0; j < columnaPrimera; ++j)
				cin >> primeraMatriz[i][j];

		cout << "Ingrese elementos de la matriz 2: " << endl;
		for(int i = 0; i < filaSegunda; ++i)
			for(int j = 0; j < columnaSegunda; ++j)
				cin >> segundaMatriz[i][j];

		multiplicarMatrices(primeraMatriz, segundaMatriz, mult, filaPrimera, columnaPrimera, filaSegunda, columnaSegunda);

		mostrar(mult, filaPrimera, columnaSegunda);
	}

	return 0;
}
