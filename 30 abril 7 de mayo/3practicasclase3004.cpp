/*Almacenar x cantidad de numeros y mostrar dichos numeros*/

#include<iostream>

using namespace std;

#define MAX 100

int vector[MAX];// arreglo o vector
int posicion=0;//posicion o ubicacion del elemento del arreglo



void agregar(int num);
void mostrar();

int main(int argc, char const *argv[])
{
    




    int cantidad;//almacenar cantidad de elemetos
    int num;
    cout<<"Cuantos numeros desea almacenar?";
    cin>> cantidad;

    for(int i=0;i< cantidad;i++){
        cout << "dime un #:";
        cin>>num;
        agregar(num);
    }

    mostrar();


    
    return 0;
}


void agregar(int num){
    vector[posicion]= num;
    posicion++;

}

void mostrar(){
    for(int i = 0; i<posicion;i++ ){

    

        cout << vector[i] << endl;


    }

}