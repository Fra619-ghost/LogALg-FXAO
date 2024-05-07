#include <stdio.h>
#include <math.h>


int main(int argc, char const *argv[])
{

    float num1;
    int num2;
    int num3[4];
    float raiz;
    int expo;
    int result;



    printf("\nSea bienvenido al coso para sacar raiz cuadrado y exponentes");
    printf("\nIngresar valor por el cual quiere sacar raiz cuadrada");
    scanf("%f", &num1);
    printf("\nIngresar valor por el cual se quiere sacar un exponente");
    scanf("%i", &num2);

            num3[0]=466;
            num3[1]=4;
            num3[2]=89;
            num3[3]=1000;


        





    result = num3[0] + num3[1] + num3[2] + num3[3];
    raiz = sqrt(num1);
    expo = pow(num2, 2);


    printf("\nEl resultado de la primera ecuacion es de: %f", raiz);
    printf("\nEl resultado de la segunda ecuacion es de: %i", expo);
    printf("\nEl primer valor fue: %d", num3[0]);
    printf("\nEl segundo valor fue:%d", num3[1]);
    printf("\nEl tercer valor fue: %d", num3[2]);
    printf("\nEl cuarto valor fue: %d", num3[3]);

printf("La suma de todos los numeros es de: %d", result);
    








    return 0;
}
