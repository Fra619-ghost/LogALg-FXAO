#include<iostream>

using namespace std;

int numeros[100];
int longi;
int suma=0;

int main(int argc, char const *argv[])
{
    cout<<"Ingresar la longitud del vector: ";
    cin>>longi;

    for(int i=0;i<longi;i++){

        cout<<"Ingresar numero que van a ir en el vector: ";
        cin>>numeros[i];

        suma=suma+numeros[i];

        
    }
    for(int i=0;i<longi;i++){
        cout<<"Los numeros del vector son de: "<<i<<"->"<<numeros[i]<<endl;
    }

    
    cout<<"La suma de los elementos del vector es de: "<<suma<<endl;






    return 0;
}
