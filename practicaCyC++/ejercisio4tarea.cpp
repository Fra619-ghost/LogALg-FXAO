#include<iostream>

using namespace std;



void proceso();



int main(int argc, char const *argv[])
{
    proceso();

return 0;
}




void proceso(){
    int digNum;
    int numEstu;
    int finalPay1;
    int finalPay2;
    int finalPay3;
    int finalPay4;


    cout<< "\nSi la cantidad de estudiantes es mayor o igual a 100, digite 1";
    cout<< "\nSi la cantidad de estudiantes es de 50 a 99, digite 2";
    cout<< "\nSi la cantidad de estudiantes es de 30 a 49, digite 3";
    cout<< "\nSi la cantidad de estudiantes es menor a 30, digite 4";


    cout<< "\nDigitar uno de los cuatro numeros:";
    cin>> digNum;
    cout<< "Digitar la cantidad exacta de estudiantes que asistiran:";
    cin>> numEstu;

    switch (digNum) {

        case 1:
            finalPay1=numEstu*60;
            cout << "La cantidad a pagar por cada estudiantes es de: $60.00"<<endl;
            cout << "\nEl total a pagar es de:"<< finalPay1;

        break;

        case 2:
                finalPay2=numEstu*70;
            cout<< "La cantidad a pagar por cada estudiantes es de: $70.00"<<endl;
            cout << "\nEl total a pagar es de:"<< finalPay2;
        break;
        
        case 3:
                finalPay3=numEstu*100;
            cout<< "La cantidad a pagar por cada estudiantes es de: $100.00"<<endl;
            cout << "\nEl total a pagar es de:"<< finalPay3;
        break;

        case 4:
                finalPay4=numEstu*150;
            cout<< "La cantidad a pagar por cada estudiantes es de: $150.00 (Esta es una cantidad general para cada alumno)"<<endl;
            cout << "\nEl total a pagar es de:"<< finalPay4;
        break;


        default:
            cout << "Error";
            cout << "Vuelva a digitar una cantidad"<<endl;
   

    } 

    return;
}




