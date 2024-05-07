#include<iostream>

using namespace std;


int factorial(int num);

void proceso();

int main(int argc, char const *argv[])
{
    //cout<<factorial(3);

    proceso();
    return 0;
}




int factorial(int num){
    if(num==0){
        num=1;
    }else{
        num=num*factorial(num-1);

    }

return num;

}

//Todo arriba esta bien
void proceso(){
int num1;
int resutl;



cout<<"Agregar un numero al cual sacarle el factorial:";
cin>>num1;

resutl=factorial(num1);

cout<<"El resultado es:"<<resutl<<endl;



//factorial(num1);


}