#include<stdio.h>
#include<math.h>


int main(int argc, char const *argv[])
{
   int num1;
   int result;

    printf("Ingresar el valor a calcular:");
    scanf("%i", &num1);

    result= pow(num1,2);

    printf("El resultado de la operacion es de:%d", result);
    



    return 0;
}