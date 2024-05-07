#include<stdio.h>
#include <math.h>


float raiz(float variable1){
    return sqrt(variable1);
}

void ecuacion();

int main(int argc, char const *argv[]) //1
{
    
    ecuacion();


    return 0;
}


void ecuacion(){ //2

    float variable1;
    float result;

    printf("Ingresar valor unico el cual se quiera sacar la raiz cuadrada");
    scanf("%f", &variable1);

    result = sqrt(variable1);


    printf("El resultado es: %.2f", result);






}