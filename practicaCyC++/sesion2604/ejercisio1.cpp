//Recursividad=que una funcion se llame a si misma
//switch=condicionales multiples

#include<iostream>
                                                        //Que es un arreglo?
using namespace std;
/*Constante(no llevan punto y coma y van en mayusuculas)*/
#define MAX 8
/*variables globales*/
/*Arreglo de numeros enteros que almacene 8*/
int nums[MAX];
int posicio=0; //posicion del elemento del arreglo
int suma=0;

void agregarNum(int num){
    if(posicio<MAX){
        nums[posicio] = num;
        posicio++; //va a ir avanzando de dos en dos

    }else{
        cout<<"No se puede agregar el numero\n";
    }
}


int sumar(int suma ,int ultElemen){
    if(ultElemen == -1){
        return suma;
    }
    suma = suma + nums[ultElemen];
    sumar(suma , ultElemen -1);
    

}

void menu(){
    int op;
    int num;
    cout << "1. Agregar elemento\n";
    cout << "2. sumar\n";
    cout << "3. mostrar \n";
    cout << "4. salir\n";
    cin>> op;

    switch (op)
    {
    case 1: 
        cout<< "Dime un numero";
        cin>> num;
        agregarNum(num);
        break;
    
    case 2:
        cout << "La suma es:" << sumar(suma, posicio -1)<< endl;
        break;
    case 4:
        break;
    default:
        cout << "No existe la opcion\n";
        break;
    
    
    }

    menu();  //Se vuelve a llamar para que te salga ora vez sino solo se pondria una vez y no se podria agregar numeros, sumar,etc

}



int main(int argc, char const *argv[])
{
    
menu();
    return 0;
}
