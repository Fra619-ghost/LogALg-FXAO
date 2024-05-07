#include<iostream>


using namespace std;


int exponente(int num,int expo){

int potencia;

    if(expo==1){
        potencia=num;
    }else{
        potencia=num*exponente(num,expo-1);


    }

return potencia;

}


void proceso();



int main(int argc, char const *argv[])
{
    
    proceso();


    return 0;
}


    void proceso(){

    int result;
    int n;
    int potencia;

    


    cout<<"Ingresar numero para sacar potencia:";
    cin>>n;
    cout<<"Ingresar potencia:";
    cin>>potencia;


    result=n*exponente(n,potencia-1);

    cout<<"El resultado final es:"<<result<<endl;



    

    }
   