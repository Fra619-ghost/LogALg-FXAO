/*Desarrolla un programa que solicite al usuario ingresar dos vectores 
de igual longitud y luego calcule la suma de ambos vectores. El 
resultado debe mostrarse en un tercer vector*/


#include<iostream>

using namespace std;



int vector1[100];
int vector2[100];
int sumae[100];
int numero=0;
int num=0;

void proceso1();
void proceso2();
void proceso3();



int main(int argc, char const *argv[])
{
    proceso1();
    proceso2();
    proceso3();










    
    return 0;
}



void proceso1(){
//int n=0;


cout<<"Ingresar la cantidad de elemtos del vector:\n "<<endl;
cin>>numero;




for(int i=0;i<numero;i++){

cout<<"Digite los numeros del vector:\n ";
cin>>vector1[i];

}






}


void proceso2(){

cout<<"ADVERTENCIA los valores de este vector TODO tiene que ser igual al vector anterior(elementos y numeros)\n";

cout<<"Ingresar los elementos del vector: \n";
cin>>num;


for(int i=0;i<num;i++){
    

    cout<<"Ingresar numeros del vector:\n ";
    cin>>vector2[i];


    

//cout<<"Los numeros ingresados fueron: "<<vector2[i]<<endl;



}



//cout<<"Los numeros ingresados fueron: "<<vector2[i]<<endl;


}


void proceso3(){

int suma=0;

for(int i=0;i<numero;i++){

suma+=vector1[i]+vector2[i];





}


cout<<"La suma es de: "<<suma<<endl;


}