
/*Para un grupo de clase de 8 estudiantes, realice un programa que 
permita calcular y dar como salida lo siguiente:
✓ Cantidad de alumnos aprobados
✓ Cantidad de alumnos reprobados
✓ Promedio general del grupo
Nota mínima para aprobar: 70*/


#include<iostream>

using namespace std;



void proceso1();
void proceso2();

int alumnos[]={1,2,3,4,5,6,7,8};
int promedio[]={89,78,93,47,63,87,88,77};
int suma;
int result1;

int aprobados=0;
int desaprobados=0;
int main(int argc, char const *argv[])
{
    proceso2();
    proceso1();

    return 0;
}



void proceso1(){


for(int i=0;i<8;i++){

suma=suma+promedio[i];
result1=suma/8;

}

if(result1>=70){

    cout<<"Grupo aprobado\n";
}else{
    cout<<"Grupo desaprobado\n";
}

cout<<"El promedio general de la sección es de: "<<result1<<endl;








}

void proceso2(){


    int cantidad1;
    //int cantidad2;


for(int i=0;i<8;i++){


cantidad1=alumnos[i];


if(promedio[i]>=70){
    aprobados++;  //La instruccion aprobado++ incrementa en 1 el valor de la variable aprobados, osea q esta contando un estudiante mas q a aprobado



}else{

desaprobados++;

}




}



cout<<"Cantidad de alumnos en total: "<<cantidad1<<endl;
cout<<"La cantidad de alumnos aprobados es de: "<<aprobados<<endl;
cout<<"La cantidad de alumnos desaaprobados es de: "<<desaprobados<<endl;



    
}