#include <stdio.h>
#include <string.h>


int main(int argc, char const *argv[])
{
    char frase[60];
    char names[30];
    char lastnames[30];
    int cont1;
    int cont2;

    printf("\nIngresar primeros nombres");
    scanf(" %[^\n]", &names);
    printf("\nIngresar apellidos");
    scanf(" %[^\n]", &lastnames);  
    printf("\nIngresar frase");
    scanf(" %[^\n]", &frase);


    cont1 = strlen(frase);
    cont2 = strlen(names) + strlen(lastnames);
    


    printf("\nTu nombre completo es: %s %s", names , lastnames);
    printf("\nTu frase es: %s", frase);
    printf("\nEL numero de letras es de la frase es de: %i", cont1);
    printf("\nEL numero de letras es de tu nombre completo es de: %i", cont2);
    







    return 0;
}
