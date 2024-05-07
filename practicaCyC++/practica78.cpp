#include<iostream>


using namespace std;

int vector1[100];
int vector2[100];
int suma=0;
int longi=0;




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


void proceso1(){
//int longi;
int result;
int num;


cout<<"Ingresar la longitud del vector: "<<endl;
cin>>longi;

for(int i=0;i<longi;i++){

    cout<<"Ingresar los valores del vector: "<<endl;
    cin>> vector1[i];


}

for(int i=0; i<longi;i++){
    cout<<vector1[i];
}



}

void proceso2(){
//int longit2;
cout<<"Ingresar la longitud del segundo vector: "<<endl;
cin>>longi;

for(int i=0; i<longi;i++){
    cout<<"Ingresar valores del vector: "<<endl;
    cin>> vector2[i];
}

for(int i=0; i<longi;i++){

    cout<<vector2[i];
}

}



void proceso3(){

    int suma=0;

    for(int i=0;i<longi;i++){


        cout<<"Se realizara la suma de los dos vectores"<<endl;

        suma=suma+vector1[i]+vector2[i];

        cout<<"El resultado de la operacion es de: "<<suma<<endl;

    }






}