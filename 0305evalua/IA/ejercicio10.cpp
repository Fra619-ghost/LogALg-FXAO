#include <iostream>
using namespace std;

void transponer(int matriz[][10], int filas, int columnas)
{
	int transpuesta[10][10];

	
	for(int i = 0; i < filas; ++i)
	{
		for(int j = 0; j < columnas; ++j)
		{
			transpuesta[i][j] = 0;
		}
	}

	
	for(int i = 0; i < filas; ++i)
	{
		for(int j = 0; j < columnas; ++j)
		{
			transpuesta[j][i] = matriz[i][j];
		}
	}

	
	cout << "Transpuesta de la matriz:" << endl;
	for(int i = 0; i < columnas; ++i)
	{
		for(int j = 0; j < filas; ++j)
		{
			cout << transpuesta[i][j] << " ";
			if(j == filas - 1)
				cout << endl << endl;
		}
	}
}

int main()
{
	int matriz[10][10];
	int filas, columnas;

	cout << "Ingrese el número de filas y columnas de la matriz: ";
	cin >> filas >> columnas;

	cout << "Ingrese los elementos de la matriz: " << endl;
	for(int i = 0; i < filas; ++i)
		for(int j = 0; j < columnas; ++j)
			cin >> matriz[i][j];

	transponer(matriz, filas, columnas);

	return 0;
}
