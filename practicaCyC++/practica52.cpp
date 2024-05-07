#include<iostream>


using namespace std;


int potencia(int base,int expo){

    int potrn;

    if(expo==1){

        potrn=base;

    }else{

        potrn=base*potencia(base,expo-1);
        

    }

    return potrn;
}

void proceso();

int main(int argc, char const *argv[])
{
    proceso();
    return 0;
}


void proceso(){
int result;
int base;
int expo;

cout<<"Agregar la base:"<<endl;
cin>>base;
cout<<"Agregar el expo:"<<endl;
cin>>expo;


result=base*potencia(base,expo-1);

cout<<"El resultado de la ecuación es de:"<<result<<endl;






}