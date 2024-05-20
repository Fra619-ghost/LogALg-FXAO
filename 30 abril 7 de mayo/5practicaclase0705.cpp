/*Leer un numero y leer la tabla de multiplicacion de dicho numero*/
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int numero;
    int cont=1;
    cout<<"Ingresar numero el cual se quiera tener su tabla de multiplicar";
    cin>>numero;

    while(cont<12){
        cont++;
        cout<<numero<<"X"<<cont<<"="<<numero*cont<<endl;



    }


    return 0;
}
