#include <stdio.h>
#include <string.h>


int main(int argc, char const *argv[])
{
    char frase[60];
    char names[30];
    char lastnames[30];
    int count;
    int count2;
    int count3;
    int suma;

    


    printf("\nSkibidi gigma ponmi digital fornite chambafreegigachad rizz omaigadfloo xxxtentationhotmail lionelronaldojunior mewingtercerochiquibaixikasetesechgoldentoipopetohio ruben tuestayouubeinsano globo de texto51 decadencia777");
    printf("\nBienvenido a registro");
    printf("\nIngresar dos nombres (en caso de que los tenga):");
    scanf(" %[^\n]", &names);
    printf("\nIngresar apellidos:");
    scanf(" %[^\n]", &lastnames);
    printf("\nIngresar frase:");
    scanf(" %[^\n]", frase);


    count= strlen(frase);
    count2=strlen(names);
    count3= strlen(lastnames);
    suma= strlen(names) + strlen(lastnames);


printf("\nBienvenido %s %s", names,lastnames);
printf("\nEl numeros de letras de la frase: %s es de: %i", frase,count);
//printf("\nEl numero de letras de su nombres y apellidos es de: %i %i", count2,count3);
printf("\nEl numero de letras de su nombres y apellidos es de: %i ", suma);
    







    return 0;
}
