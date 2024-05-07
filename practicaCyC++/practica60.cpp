#include<iostream>

using namespace std;



int main(int argc, char const *argv[])
{
    int numeros[100];
    int n;
    int suma=0;


    cout<<"digita numero de elementos que va  a tener el arreglo"<<endl;
    cin>>n;


    for(int i=0;i<n;i++){//guardra elemntos

        cout<<"digita los numeros"<<endl;
        cin>>numeros[i];

    }


//mostrar los elementos con sus indices asociados


    for(int i=0;i<n;i++){

        cout<<"Los elemtos del arreglo son: "<<numeros[i]<<" Los indices de cada elemento son de: "<<i<<endl;





    }


    for(int i=0;i<n;i++){

        suma=suma+numeros[i];

        cout<<"La suma de los elementos es de: "<<suma<<endl;


    }



    return 0;
}
