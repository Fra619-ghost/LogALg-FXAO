#include <stdio.h>
#include <math.h>
 //sacar la raiz cuadrada
int main(int argc, char const *argv[])
{
   float num1;
   float raiz;
   
   
   
   
   system("cls");
    printf("Bienvenido");
    printf("Ingresar el valor por el cual se quiere sacar la raiz cuadrada");
    scanf("%f", &num1);

    raiz = sqrt(num1);


    printf("El resultado del numero %4.f es %4.f",num1, raiz);

    
    return 0;
}
