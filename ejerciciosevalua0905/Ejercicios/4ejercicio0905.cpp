#include<iostream>

using namespace std;

//int estudiantes[]={1,2,3,4,5,6,7,8,9,10};



    int estudiantes[10]={45,89,74,23,100,98,68,78,99,100};


int main(int argc, char const *argv[])
{

int result;
int promedio;

int suma=0;
int i = 0;
while(i < 10){

//manera manual
result=(estudiantes[0]+estudiantes[1]+estudiantes[2]+estudiantes[3]+estudiantes[4]+estudiantes[5]+estudiantes[6]+estudiantes[7]+estudiantes[8]+estudiantes[9])/10;
//manera "automatica"
suma=suma+estudiantes[i];
promedio=suma/10;

i++;

}

cout<<"El promedio general de la sección es de: "<<result<<endl;
cout<<"El promedio general de la sección es de: "<<suma<<endl;
cout<<"El promedio general de la sección es de: "<<promedio<<endl;


    
    return 0;
}
