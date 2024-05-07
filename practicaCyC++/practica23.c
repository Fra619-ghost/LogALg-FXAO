#include<stdio.h>
//#include<math.h>


int multiplicacion(int variable1,int variable2){
    return variable1*variable2;
}


void proceso1();


int main(int argc, char const *argv[])//1
{
    
    proceso1();


    return 0;
}


    void proceso1(){
        int variable1;
        int variable2;
        int result;

        printf("Ingresar primer valor a calcular");
        scanf("%d", &variable1);
        printf("Ingresar segundo valor");
        scanf("%d", &variable2);

        result= multiplicacion(variable1,variable2);

        printf("El resultado de la operacion es de: %d", result);

    }