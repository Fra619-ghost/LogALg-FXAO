#include<stdio.h>

#include <stdio.h>

int main() {
    int mes;

    printf("Introduzca mes del año: ");
    scanf("%d", &mes);

    switch (mes) {
        case 1:
            printf("\nEnero");
            break;
        case 2:
            printf("\nFebrero");
            break;
        case 3:
            printf("\nMarzo");
            break;
        case 4:
            printf("\nAbril");
            break;
        case 5:
            printf("\nMayo");
            break;
        case 6:
            printf("\nJunio");
            break;
        case 7:
            printf("\nJulio");
            break;
        case 8:
            printf("\nAgosto");
            break;
        case 9:
            printf("\nSeptiembre");
            break;
        case 10:
            printf("\nOctubre");
            break;
        case 11:
            printf("\nNoviembre");
            break;
        case 12:
            printf("\nDiciembre");
            break;
        default:
            printf("\n Ingresar un numero valido por favor");
    }

    return 0;
}