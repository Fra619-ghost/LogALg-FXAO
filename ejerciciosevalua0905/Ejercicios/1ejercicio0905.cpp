#include<iostream>


using namespace std;



int main(int argc, char const *argv[])
{
    int numeros[]={1,2,3,4,5};
    int suma=0;


    /*for(int i=0;i<5;i++){



        suma=suma+numeros[i];

        
    }*/
    int i=0;
    while(i < 5){
       

        suma=suma+numeros[i];
         i++;
    }


    cout<<"numeros: "<<suma<<endl;






    return 0;
}
