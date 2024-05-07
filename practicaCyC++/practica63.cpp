#include<iostream>

using namespace std;




int main(int argc, char const *argv[])
{
    
int numeros[100];
int num;


cout<<"Digite un numero de los elements que llevara el arreglo"<<endl;
cin>>num;

for(int i=0;i<num;i++){
    cout<<"Digite un numero:"<<endl;
    cin>>numeros[i];


}

//mostrar elemntos con sus indices asociados

for(int i=0;i<num;i++){

cout<<i<< "->"<<numeros[i]<<endl;




}





    return 0;
}
