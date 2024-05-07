#include<iostream>


using namespace std;

int sumar(int num){

int result;

    if(num==1){
        result=1;
    }else{
        result=num+sumar(num-1);
    }


    return result;

}



int main(int argc, char const *argv[])
{
    int numero;
    int result1;

    cout<<"Ingresar numero positivo";
    cin>>numero;

    result1=numero+sumar(numero-1);

    cout<<"El resultado es:"<<result1<<endl;








    return 0;
}
