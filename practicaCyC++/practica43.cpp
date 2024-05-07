#include<iostream>

//int multiplicacion=0;

using namespace std;

int factorial(int num);

    //cout<<"Ingresar un numero al cual sacarle el factorial";
    //cin>>num;
    



//void proceso();



int main(int argc, char const *argv[])
{
    /*int numero;
    cout<< "Ingresar un numero al cual sacarle el factorial";
    cin>>numero*/

    //proceso();
    cout<<factorial(5);



    return 0;
}




    int factorial(int num){
        if(num==0){
        num=1;
    }else{
        num = num*factorial(num-1);
        
    }
     return num;
    }

/*void proceso(){
int operador;
int num;

switch(operador)
{
case 1:
    cout<< "La multiplicación es:"<< factorial(multiplicacion,num);
    break;
case 2:
    cout<<"Algo salio mal";

default:
    break;
}



proceso();



}*/