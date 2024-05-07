#include<iostream>


using namespace std;




int main(int argc, char const *argv[])
{
    int numeros[]={7,9,7};
    int multiplica=numeros[0];


    for(int i=1;i<3;i++){
        multiplica=multiplica*numeros[i];

    }


cout<<"El resultado final de la ecuacion es de:"<<multiplica<<endl;



    return 0;
}
