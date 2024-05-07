#include<stdio.h>



int main(int argc, char const *argv[])
{
    int num1;
    int num2;

    printf("Bienvenido");
    printf("Ingresa un numero");
    scanf("%i", &num1);
    printf("Escribe un segundo numero:");
    scanf("%i", &num2);


    if(num1>num2){
        printf("El primer valor es mayor que el segundo valor");
    }else{
        printf("El segundo valor es mayor que el primer valor");
    }

    




    return 0;
}
