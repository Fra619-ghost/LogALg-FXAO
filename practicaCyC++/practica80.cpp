#include<iostream>



using namespace std;


void proceso1();


int main(int argc, char const *argv[])
{
    proceso1();
    return 0;
}


void proceso1(){

int num;

cout<<"Ingresar un numero del 1 al 100 "<<endl;
cin>>num;


if(num %2 ==0){

    cout<<"Es un numero par";
}else{
    cout<<"Es un numero impar";
}



}