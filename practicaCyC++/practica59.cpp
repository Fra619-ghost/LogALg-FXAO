#include<iostream>




using namespace std;

int sumar(int num){

int result;

    if(num==0){
        return 0;
    }else{
        result=num+sumar(num-1);
    }


    return result;

}


void mostrarResultado(int num){

cout<<"La suma de los enteros del numero"<<num<<"es"<<sumar(num)<<endl;



}



void ejecutarSwitch(){

int opcion;
int num;
int result;

cout<<"Ingresar 2 para sumar o 1 para salir"<<endl;
cin>>opcion;



switch (opcion)
{
case 1:
    cout<<"salir del programa"<<endl;

    break;
case 2:
    cout<<"Ingresar numero"<<endl;
    cin>>num;
result=num+sumar(num-1);

cout<<"El resultado es:"<<result<<endl;

break;
    

default:
    break;
}

 ejecutarSwitch();


}






int main(int argc, char const *argv[])
{
    ejecutarSwitch();
    return 0;
}
