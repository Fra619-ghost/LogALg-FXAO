#include <stdio.h>
#include <string.h>

//leer cantidad de frase
int main(int argc, char const *argv[])
{
    char frase[100];
    int cantidad;



    printf("Bienvenido");
    printf("Ingresar frase");
    scanf(" %[^\n]", frase);

    cantidad = strlen(frase);

    printf("La frase %s tiene %i letras",frase,cantidad);



    return 0;
}