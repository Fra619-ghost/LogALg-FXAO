#include<stdio.h>
#include<math.h>


int cuadrado(int variable1){
    return pow(variable1,2);
}

void proceso1();




int main(int argc, char const *argv[])
{
    
         proceso1();

    return 0;
}


void proceso1(){
    int variable1;
    int result;

    printf("Ingresar valor a calcular por el cuadrado");
    scanf("%d", &variable1);


    result = pow(variable1,2);

    printf("El resultado de la ecuacion es de: %d", result);



}