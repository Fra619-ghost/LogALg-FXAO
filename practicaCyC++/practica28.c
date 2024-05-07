#include<stdio.h>


int main(int argc, char const *argv[])
{
   int numbers[3];
    int suma;


   numbers[0]=5456;
   numbers[1]=45;
   numbers[2]=8;
   
    printf("\nEl valor #1 es:%d", numbers[0]);
    printf("\nEl valor #2 es:%d", numbers[1]);
    printf("\nEl valor #3 es:%d", numbers[2]);

    suma= numbers[0]+numbers[1]+numbers[2];
    printf("El resultado de la suma es de:%d", suma);



    return 0;
}