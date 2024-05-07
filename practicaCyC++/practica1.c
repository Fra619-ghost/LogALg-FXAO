#include <stdio.h>
#include <math.h>

int num1;
int num2;
int resultadonumeroante;
int resultcubo;
char name[30];



int main(int argc, char const *argv[])
{
    printf("\nBienvenido pana");
    printf("\nCalcular valor al cubo");
    printf("\ningresar valor que se quiere llevar al cubo");
    scanf("%i", &num1);

    printf("\nIngresar el valor para calcula el cuadrado del antececor de dicho numero:");
    scanf("%i", &num2);

    printf("\nIngresar tu nombre para recirbir un saludo especial:");
    scanf("%s",name);


    resultcubo = (num1*num1*num1);
    resultadonumeroante = (num2-1)*(num2-1);

    printf("\nResultado del valor al cubo: %i",resultcubo);
    printf("\nEl valor agregado fue de: %i",num1);
    printf("\nEl valor al cuadrado del antecesor es de: %i",resultadonumeroante);
    printf("\nEl valor agregado fue:%i",num2);

    printf("\nHola %s",name);


    return 0;
}
