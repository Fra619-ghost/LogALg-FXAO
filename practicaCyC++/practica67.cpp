#include<iostream>

using namespace std;

int vector1[100];
int vector2[100];
int numero = 0;
int num = 0;

void proceso1();
void proceso2();
void proceso3();

int main(int argc, char const *argv[])
{
    proceso1();
    proceso2();
    proceso3();

    return 0;
}

void proceso1()
{
    cout << "Ingresar la cantidad de elementos del vector: ";
    cin >> numero;

    for(int i = 0; i < numero; i++)
    {
        cout << "Digite los numeros del vector: ";
        cin >> vector1[i];
    }
}

void proceso2()
{
    cout << "ADVERTENCIA: los valores de este vector TODO tienen que ser igual al vector anterior\n";
    cout << "Ingresar la cantidad de elementos del vector: ";
    cin >> num;

    for(int i = 0; i < num; i++)
    {
        cout << "Ingresar numeros del vector: ";
        cin >> vector2[i];
    }
}

void proceso3()
{
    int suma = 0;

    for(int i = 0; i < numero; i++)
    {
        suma += vector1[i] + vector2[i];
    }

    cout << "La suma es de: " << suma << endl;
}
