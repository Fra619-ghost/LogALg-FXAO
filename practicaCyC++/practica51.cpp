#include<iostream>

using namespace std;


int factoriales(int num){
    int facto;

    if(num==0){
        facto=1;

    }else{

        facto=num*factoriales(num-1);


    }



return facto;

}

void proceso();


int main(int argc, char const *argv[])
{
    proceso();
    return 0;
}



void proceso(){

    int num;
    int result;

cout<<"Ingresar el numero por el cual se quiera obtener su factorial:";
cin>>num;

result=num*factoriales(num-1);

cout<<"El resultado es de:"<<result<<endl;




}
