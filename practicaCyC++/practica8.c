#include <stdio.h>
#include <math.h>

//saber si un numero ingresado al cuadrado es par o no
int main(int argc, char const *argv[])
{
    int num1;
    int cuadrado;

    printf("Bienvenido");
    printf("Dame un numero:");
    scanf("%i", &num1);

    if(num1%2 == 0){

        cuadrado = pow(num1, 2);
        printf("El numero ingresado al cuadrado es par %i",cuadrado);
    }else{
        printf(" El resultado al cuadrado de %i no es un numero par ",num1);
    }











    return 0;
}
