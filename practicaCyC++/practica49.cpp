//Realizar una suma de elemtos usando al recursividad


#include<iostream>

using namespace std;

int sumar(int elements){

    int suma=0;

if(elements==0){
    suma=0;
}else{
    suma=elements+sumar(elements-1);
}


return suma;


}





int main(int argc, char const *argv[])
{
    int num;
    do
    {
        cout<<"Ingresar numero de elemtos a sumar";
        cin>>num;

    } while (num<=0);
    

    cout<<"La suma es:"<<sumar(num)<<endl;


    

    return 0;
}
