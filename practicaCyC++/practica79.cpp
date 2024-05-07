#include<iostream>


using namespace std;

int suma(int num){
int result;
if(num==1){
    result=1;
}else{
    result=num+suma(num-1);
}

return result;

}

int main(int argc, char const *argv[])
{

    int num;
    int result;
        cout<<"Ingresar la cantidad de numero a sumar: "<<endl;
        cin>>num;
    result=num+suma(num-1);

    cout<<"El resultado final de la operacion es de: "<<result<<endl;




    return 0;
}
