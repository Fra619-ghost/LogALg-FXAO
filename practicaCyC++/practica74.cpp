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
    int num;
    int result;

    cout<<"Ingresar el numero: "<<endl;
    cin>>num;

    result=num+sumar(num-1);

    cout<<"El resultado es : "<< result<< endl;
    
    return 0;
}
