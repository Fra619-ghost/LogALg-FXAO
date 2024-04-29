

#include<iostream>
                                                // la doble linea (||) significa O es como si dijeramos disyuncion
                                                // && no se que significa
using namespace std;


void evaluarTriangulo(int ladoA,int ladoB,int ladoC){

    if(ladoA==ladoB && ladoB==ladoC){
        cout << "Triangulo equilatero"<< endl;
    }else 
    if(ladoA == ladoB || ladoB == ladoC || ladoA == ladoC){
        cout << "Triangulo isoceles" << endl;
    }


}

int main(int argc, char const *argv[])
{

    int ladoA,ladoB,ladoC;

    cout << "Ingresar el lado A:";
    cin >> ladoA;
    cout << "Ingresar lado B";
    cin >> ladoB;
    cout << "Ingresar lado C";
    cin >> ladoC;


    evaluarTriangulo(ladoA,ladoB,ladoC);



    return 0;
}
