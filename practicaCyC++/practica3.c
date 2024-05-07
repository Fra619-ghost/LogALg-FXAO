#include <stdio.h>


int main(int argc, char const *argv[])
{

    int edad;


    printf("Bienvenido al sistema");
    printf("Ingresa el primer valor");
    scanf("%i", &edad);
    
    if (edad>=18){
        printf("Es mayor de edad");


    }else{
        printf("Es menor de edad");
    }

    return 0;
}
