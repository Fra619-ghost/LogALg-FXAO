#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    // si es mayor de 25 pasa, si el numero que ingreso al cuadrado es menor a 40, si adivina el numero en el que pienso gana 

    int edad;
    float num1;
    int num2;
    float resultado;

    printf("\nHola bienvenido a mi ejercisio de if");
    printf("\nIngresa su edad por favor");
    scanf("%i", &edad);
    printf("\nIngresar numero al cuadrado");
    scanf("%f", &num1);
    printf("\nIngresar numero al azar");
    scanf("%i", &num2);


    if(edad>=25){
        printf("\nPuede pasar");
    }else{
        printf("\nNo puede pasar");
    }
    if(num1<=40){
        resultado = pow(num1,2);
        printf("\nEs menor a 40");

    }else{
        printf("\nNo es menor a 40");
    }
    if(num2=7){
        printf("\nAdivinaste");
    }else{
        printf("\nNo adivinaste");
    }
    











    return 0;
}
