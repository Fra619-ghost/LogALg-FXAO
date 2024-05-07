#include<iostream>

using namespace std;

void proceso();

int main(int argc, char const *argv[])
{
    proceso();

    return 0;
}

void proceso(){
    int numEstu;

    cout<< "\nSi la cantidad de estudiantes es mayor o igual a 100, digite 1";
    cout<< "\nSi la cantidad de estudiantes es de 50 a 99, digite 2";
    cout<< "\nSi la cantidad de estudiantes es de 30 a 49, digite 3";
    cout<< "\nSi la cantidad de estudiantes es menor a 30, digite 4";

    cout<< "\nDigitar el numero de estudiantes que asistirán:";
    cin>> numEstu;

    switch (numEstu) {

        case 1:
            cout << "La cantidad a pagar por cada estudiantes es de: $60.00"<<endl;
        break;

        case 2:
            cout<< "La cantidad a pagar por cada estudiantes es de: $70.00"<<endl;
        break;

        case 3:
            cout<< "La cantidad a pagar por cada estudiantes es de: $100.00"<<endl;
            break;

        case 4:
            cout<< "La cantidad a pagar por cada estudiantes es de: $150.00 (Esta es una cantidad general para cada alumno)"<<endl;
            break;

        default:
            cout << "Error";
            cout << "Vuelva a digitar una cantidad"<<endl;
            break;
    }

    return;
}