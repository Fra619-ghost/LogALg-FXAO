#include <iostream>

using namespace std;

int vector1[100];
int vector2[100];
int longit1;
int longit2;
int i=0;
int j=0;
int suma=0;
//int suma2=0;
//int suma3=0;

void proceso1();
void proceso2();
void proceso3();

int main(int argc, char const *argv[])
{
     proceso1();
     proceso2();
     proceso3();

    return 0;
}


//Primer vector
 void proceso1(){

cout<<"Ingresar longitud del primer vector: "<<endl;
cin>>longit1;


while(i<longit1){
   

    cout<<"Ingresar elemntos del primer vector: "<<endl;
    cin>>vector1[i];
     i++;
    //suma1=suma1+vector1[i];
    
}

//elementos del primer vector

/*cout<<i<<" "<<vector1[i];
cout<<suma1<<endl;*/
 }

 //Segundo vector


 void proceso2(){

cout <<"Ingresar la longitud del segundo vector: "<<endl;
cin >> longit2;

while(j<longit2){
   

    cout<<"Ingresar los elemntos del segundo vector: "<<endl;
    cin>>vector2[j];
     j++;
     //suma2=suma2+vector2[j];
     

}
//imprimir elementos del segundo vector
    /*cout<<j<<" "<<vector2[j];
    cout<<suma2<<endl;*/

 }

    //suma de vectores

void proceso3(){

//suma3 = suma3 + suma1 + suma2;
/*while(i<longit1){

    suma = suma+vector1[i];
    i++; 
}
while(i<longit1){

    suma = suma+vector2[j]; 
    j++;
}
cout<<"El resultado final es de: "<<suma3<<endl;*/
i=0;
while(i < longit1){
    suma=suma+vector1[i];
    i++;
}
j=0;
while(j < longit2){
    suma=suma+vector2[j];
    j++;
}

cout<<"El resultado final es de: "<<suma<<endl;

}