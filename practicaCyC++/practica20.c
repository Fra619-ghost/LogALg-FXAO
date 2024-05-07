#include<stdio.h>

int resta(int variable1, int variable2){
    return variable1-variable2;
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


    printf("Hola bienvenido puto");
    printf("Ingresar primer valor");
    scanf("%d", &variable1);
    printf("Ingresar segundo numero");
    scanf("%d", &variable2);

    result= resta(variable1,variable2);

    printf("El resultado final es de: %d", result);






}