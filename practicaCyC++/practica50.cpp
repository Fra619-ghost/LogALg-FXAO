#include<iostream>


using namespace std;



int sumar(int num){

int suma=0;
    if(num==1){
        suma=1;
    }else{
        suma=num+sumar(num-1);


    }

 return suma;



}

/*void agregarNum(int num){
    cout<<"Agregar numero:";
    cin>>num;
}*/



void proceso();



int main(int argc, char const *argv[])
{

    proceso();
    
    return 0;
}





void proceso(){
//int digNum;
int operador;
int num;
int suma;

//int result;

/*cout<<"Ingresar limite de numeros los cuales va a sumar:";
cin>>num;

result=num+sumar(num-1);

cout<<"El resultado es:"<<result<<endl;*/

cout<<"1. Digitar Numero\n";
cout<<"2. sumar\n";
cout<<"3. salir\n";
cout<<"Digitar uno de los 3 numeros\n";
cin>>operador;


/*cout<<"Ingresar cantidad:";
cin>>num;*/




/*cout<<"Ingresar un numero:";
cin>>digNum;*/


switch (operador){
case 1:
    cout<<"Ingresar numero:";
    cin>>num;

    

    break;
case 2:
    suma=num+sumar(num);
    cout<<"suma:"<<suma;
   
    break;

case 3:
break;

default:
    cout<<"Error"<<endl;
    break;
}

return;


}