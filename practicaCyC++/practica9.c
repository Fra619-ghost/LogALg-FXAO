#include <stdio.h>
#include <string.h>

//nombres seguidos
int main(int argc, char const *argv[])
{
    char names[60];
    char apellidos[60];

    printf("Ingresar dos nombres");
    scanf(" %[^\n]",names);
    printf("Ingresar apellidos:");
    scanf(" %[^\n]",apellidos);

    printf("Tu nombre completo es: %s %s",names,apellidos);



    return 0;
}
