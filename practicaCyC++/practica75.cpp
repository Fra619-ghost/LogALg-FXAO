#include<iostream>


using namespace std;

int potencia(int x, int y){

int result;

if(y==1){
    result=x;
}else{
    result=x*potencia(x,y-1);

}
return result;

}

int main(int argc, char const *argv[])
{
    int base;
    int expo;
    int result;
    cout<<"Ingresar un numero positivo para poder sacar su potencia"<<endl;
    cin>>base;

    cout<<"Ingresar exponente: "<<endl;
    cin>>expo;


    result=base*potencia(base,expo-1);

    cout<<"El resultado final es de: "<<result<<endl;


    return 0;
}
