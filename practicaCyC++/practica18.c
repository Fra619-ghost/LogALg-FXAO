#include <stdio.h>



int main(int argc, char const *argv[])
{
    int edad;
    

    printf("\nVamo a ver");
    printf("\nIngresar edad");
    scanf("%i", &edad);

    if(edad<12){
        
        printf("\nniño");
    }else{
        printf("\nNo es un niño");
    }
    if(edad>=11){
        printf("\nAdolescente");
    }else{
        printf("\nNo es un adolescente");
    }
    if(edad >=20){
        printf("\nAdulto");
    }else{
        printf("\nNo es adulto");
    }
    if(edad >=40){
        printf("\nAdulto mayor");
    }else{
        printf("\nNo es adulto mayor");
    }


/*if(edad<10, edad>=11 , edad >=25 , edad >= 40){
        scanf("%i", &edad);
        printf("\nniño");
        printf("\nadolescente");
        printf("\nadulto");
        printf("\nadulto mayor");
        
    }else{
        printf("\nNo es un niño");
        printf("\nNo es un adolescente");
         printf("\nNo es adulto");
        printf("\nNo es adulto mayor");
    }/*
    /*if(edad>=15){
        printf("Adolescente");
    }else{
        printf("No es un adolescente");
    }
    if(edad >=25){
        printf("Adulto");
    }else{
        printf("No es adulto");
    }
    if(edad >= 40){
        printf("Adulto mayor");
    }else{
        printf("No es adulto mayor");
    }*/





    return 0;
}
