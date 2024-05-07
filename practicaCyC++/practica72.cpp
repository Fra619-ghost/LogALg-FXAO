#include<iostream>

using namespace std;
int numeros[100];
int longit;
int suma=0;

int main(int argc, char const *argv[])
{
    cout<<"Ingresar la longitud del vector: ";
    cin>> longit;

    for(int i=0;i<longit;i++){
        cout<<"Ingresar los elementos del vector: ";
        cin>>numeros[i];

        suma=suma+numeros[i];



    }

    for(int i=0;i<longit;i++){
        cout<<i<< "Los valores del vector son: "<<numeros[i]<<endl;
    }

    cout<<"La suma de los valores del vector es de: "<<suma<<endl;
    return 0;
}
