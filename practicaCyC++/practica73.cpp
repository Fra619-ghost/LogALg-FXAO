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



int main(int argc, char const *argv[])
{
     int num;
     int result;
    //factoriales(3);
    cout<<"Ingresar numero por el cual se quiere sacar su factorial: "<<endl;
    cin>> num;

    result=num*factoriales(num-1);
    cout<<"El resultado del primer factorial es de: "<<result<<endl;

    cout<<"El resultado de la ecuacion es de: "<<factoriales(3)<<endl;



    return 0;
}
