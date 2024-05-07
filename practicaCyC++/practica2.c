#include <stdio.h>
#include <math.h>


int main(int argc, char const *argv[])
{
    int num1;
    int num2;
    int cuartapotencia;
    int cuadrado;


    printf("\nHola cara de puto");
    printf("\nIngresa el valor que quieras calcular a las cuarta potencia:");
    scanf("%i", &num1);


    printf("\nIngresar valor del cual desea tenerlo al cuadrado:");
    scanf("%i", &num2);



    cuartapotencia = (num1*num1*num1*num1);
    cuadrado = (num2*num2);

    printf("\nEl valor agregado a la cuarta potencia es de: %i",cuartapotencia);
    printf("\nEl valor ingresado fue de: %i",num1);
    
    printf("\nEl valor agregado al cudrado es de: %i",cuadrado);
    printf("\nEl valor que agregaste cara de pija fue de: %i",num2);







    return 0;
}
