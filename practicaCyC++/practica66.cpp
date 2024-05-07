/*Escribe un programa que defina un vector de numeros(los que sean), y muestre la salida estandar del
vector en orden inverso, del ultimo al primer elemento*/

#include<iostream>

using namespace std;

int vector[]={1,2,3,4,5};

void proceso();

int main(int argc, char const *argv[])
{
    //int vector[]={1,2,3,4,5};
    //int mostrar;




    for(int i=4;i>=0;i--){

        //mostrar=vector[i];

        cout<<"Los vectores en orden inverso son:"<<vector[i]<<endl;


    }


    proceso();








    return 0;
}

//Esto es un ejercisio de multiplicacion, solo por probar

void proceso(){

    int multiplicacion=1;


    for(int i=0;i<5;i++){

        multiplicacion=multiplicacion*vector[i];


        //cout<<" El resultado de la multiplicacion de los elementos del vector es de: "<<multiplicacion<<endl;

        //se puede poner aqui y da lo mismo, solo que no da directo


    }

cout<<" El resultado de la multiplicacion de los elementos del vector es de: "<<multiplicacion<<endl;





}