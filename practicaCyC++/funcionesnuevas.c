//sumar dos numeros      NUEVA FUNCION

#include <stdio.h>

int suma(int num1, int num2);    //prototipo de funcion



int suma(int num1 , int num2){
    return num1+num2;
}

int main(int argc, char const *argv[])
{
    int num1;
    int num2;

    printf("Dime el primer valor");
    scanf("%d", &num1);
    printf("Digite el segundo valor");
    scanf("%d", &num2);

    //printf("La suma de los dos valores %d %d es", num1, num2);
    //printf("%d", suma(num1,num2));
    printf("El resultado de la ecuacion es: %d", suma(num1,num2));


    //LA FUNCION QUE SE HACE OTRA VEZ (donde esta la ecuacion de +) SE PUEDE PONER ARRIBA O ABAJO, NO IMPORTA y eso va para cualquier funcion

    return 0;
}
