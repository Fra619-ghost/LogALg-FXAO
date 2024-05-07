#include<iostream>


using namespace std;



void ejecSwit();




int main(int argc, char const *argv[])
{
    
    ejecSwit();

    return 0;
}



void ejecSwit(){

char opcion;

while (true)
{
    cout<<"Eliga una opcion entre A,B,C o Q";
    cin>>opcion;

    switch (opcion)
    {
    case 'A':

        cout<<"Opcion A seleccionada";
        break;

    case 'B':

        cout<<"Opcion B seleccionada";

    break;

    case 'C':

        cout<<"Opcion C seleccionada";

    break;

    case 'Q':

        cout<<"Opcion Q seleccionada";

    break;
    
    default:

    cout<<"Valor ingresado incorrecto";
        break;
    }





}






}