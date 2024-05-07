#include<iostream>


using namespace std;


int main(int argc, char const *argv[])
{
    int numeros[]={10,4,8,7};
    int resta=numeros[0];//Inicializar la  resta en  el primer elemento del arreglo(seria resta=10)


    for(int i=1;i<4;i++){

        resta=resta-numeros[i];

    }

cout<<"El resultado es de:"<<resta<<endl;

    return 0;
}
