#include<stdio.h>


float division(int variable1, int variable2){
    return variable1/variable2;
}


void proceso();

int main(int argc, char const *argv[])
{
    
    proceso();


    return 0;
}





void proceso(){

    int variable1;
    int variable2;
    int result;

    printf("Ingresar primer valor");
    scanf("%i", &variable1);
    printf("Ingresar segundo valor:");
    scanf("%i", &variable2);


    result= division(variable1,variable2);

    printf("El resulado de la ecuacion es de: %i", result);










}