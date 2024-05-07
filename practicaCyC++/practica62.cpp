#include<iostream>


using namespace std;



int main(int argc, char const *argv[])
{


    int numeros[]={1,4,5,6,7};
    int multiplicacio = numeros[0];

    for(int i = 0;i<5;i++){

        multiplicacio=multiplicacio*numeros[i];

    }

    
cout<<"El resultado es de:"<<multiplicacio<<endl;




    return 0;
}
