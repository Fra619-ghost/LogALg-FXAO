#include<iostream>

using namespace std;


int conteoRegresivo(int n){

    int conteo;
    if(n==1){
        conteo=1;
    }else{
            cout<<n<<endl;
        conteo=conteoRegresivo(n-1);
    }

    
}



int main(int argc, char const *argv[])
{
    int numero;
    int result;


    cout<<"Ingrese un numero: "<<endl;
    cin>>numero;


   result=conteoRegresivo(numero);

   cout<<result<<endl;

    





    return 0;
}
