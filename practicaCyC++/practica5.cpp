#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int num1;
    int num2;
    int edad;


    cout << "Bienvenido";
    cout << "Ingresar primer valor:";
    cin >> num1;
    cout << "Ingresar segundo valor";
    cin >> num2;



    edad = num1*num2;

    if(edad>=18){
    cout << "Es mayor de edad";

    }else {
        cout << "No sea desbloqueado";
    }












    return 0;
}

