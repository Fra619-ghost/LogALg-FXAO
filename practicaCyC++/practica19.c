#include<stdio.h>

int suma(int num1, int num2){
    return num1+num2;
}


int ecuacion();

void condi(int result);


int main(int argc, char const *argv[])
{
    printf("\nBienvenido");

    //suma();
    int r;
    r=ecuacion();
    condi(r);



    return 0;
}




int ecuacion(){
    int num1,num2,result;
    //int num2;
    //int result;

    printf("\nIngresar primer valor:");
    scanf("%d", &num1);
    printf("\nIngresar segundo valor:");
    scanf("%d", &num2);

    result = suma(num1,num2);
    printf("\nEl resultado de la ecuacion es: %d", suma(num1,num2));
    return result;

}

void condi(int result){

        if(result>=100){
            
         printf("Numero grande");
        }else{
            printf("Numero pequeño");
        }
    }

    