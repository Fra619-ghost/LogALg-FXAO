#include <stdio.h>
#include <math.h>


int main(int argc, char const *argv[])
{
    int num1;
    int num2;
    int resultado1;
    int resultado2;
    int resultado3;

    printf("\nBuenas perro");
    printf("\nIngresar numero el cual quieres obtener su resultado a cuadrado");
    scanf("%i", &num1);
    printf("\nIngresar segundo valor el cual lo quieres obtener su cubo");
    scanf("%i", &num2);
    printf("\nEl primer valor se le sacara su 45 potencia");

    resultado1= pow(num1,2);
    resultado2= pow(num2,3);
    resultado3= pow(num1,45);

    printf("\nEl resultado del primer valor es de: %i", resultado1);
    printf("\nEl resultado del segundo valor es de: %i", resultado2);
    printf("\nEl resultado del tercer valor es de: %i", resultado3);














    return 0;
}
