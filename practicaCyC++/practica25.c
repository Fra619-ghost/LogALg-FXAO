#include <stdio.h>


int suma(int variable1, int variable2){
    return variable1+variable2;
}


void ecuacion1();


//void condicion(); //solo es prueba


int main(int argc, char const *argv[])
{
    //int r
    ecuacion1();
    //condicion();


    return 0;
}



void ecuacion1(){

int num1;
int num2;
int result;


printf("Ingresar primer valor el cual se quiere sumar:");
scanf("%d", &num1);
printf("Ingresar segundo valor a sumar:");
scanf("%d", &num2);

result= suma(num1,num2);

printf("El valot final de la ecuacion es de: %d", result);

if(result>=10){
    printf("Es mayor a 10");
}else{
    printf("Es menor a 10");
}



}


/*void condicion(int result){

if(result>=10){
    printf("Es mayor a 10");
}else{
    printf("Es menor a 10");
}

}*/

