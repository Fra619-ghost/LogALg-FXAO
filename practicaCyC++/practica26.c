#include<stdio.h>

int multpli(int variable1, int variable2){
    return variable1*variable2;
}

void proceso();

 int main(int argc, char const *argv[])
{
    
    proceso();


    return 0;
}


void proceso(){

    int num1;
    int num2;
    int product;


    printf("Ingresar primer valor:");
    scanf("%d", &num1);
    printf("Ingresar valor2:");
    scanf("%d", &num2);

    product = multpli(num1,num2);

    printf("El resultado de la ecuacion es de:%d", product);

    if(product>=5000){
        printf("Es un numero grande");
    }else{
        printf("Es un buen numero");
    }


}