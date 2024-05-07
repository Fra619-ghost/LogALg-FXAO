#include<stdio.h>


int mult(int variable1,int variable2){
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
    int result;



    printf("ingresar primer valor:");
    scanf("%d", &num1);
    printf("Ingresar segundo valor:");
    scanf("%d", &num2);

    result=mult(num1,num2);

    printf("El resultado final es de:%d", result);


    if(result>=1000){
        printf("Valor con mas de 4 cifras");
    }else{
        printf("Valor con menos de 4 cifras");
    }

}