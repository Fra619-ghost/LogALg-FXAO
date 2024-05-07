#include <stdio.h>
#include <math.h>


int main(int argc, char const *argv[])
{
    
    float num1;
    int num2;
    float result1;
    int result2;
    
    
    
    
    printf("\nQue es la versh");
    printf("\nIngresar primer valor por el cual se quiere sacar su raiz");
    scanf("%f", &num1);
    printf("\nIngresar segundo valor por el cual se quiere sacar su raiz");
    scanf("%i", &num2);


    result1 = sqrt(num1);
    result2 = sqrt(num2);


    printf("\nEl resultado de la primera ecuacion es de: %f", result1);
    printf("\nEl resultado de la segunda ecuacion es de: %i", result2);

    printf("\nLos valores ingresados fueron de: %f %i", num1, num2);











    return 0;
}
