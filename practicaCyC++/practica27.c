#include<stdio.h>
#include<math.h>


int cuadrado(int variable){
    return pow(variable,2);
}

float raiz(float variable2){
    return sqrt(variable2);
}


void proceso();
void proceso2();

int main(int argc, char const *argv[])
{
   
    proceso();
    proceso2();
    return 0;
}



void proceso(){
int num;
int result;


    printf("\nIngresar valor: ");
    scanf("%d", &num);


    result = pow(num,2);

    printf("\nEl resultado es de: %d", result);


    if(result>=200){
        printf("Resultado grande");
    }else{
        printf("Resultado pequeño");
    }
}

void proceso2(){
    float num1;
    float result;

    printf("\nIngresar valor por el que se quiere obtener su raiz cuadrada:");
    scanf("%f", &num1);


    result= sqrt(num1);

    printf("\nEl resultado de la ecuacion es de:%f", result);

    if(result>=55.55){
        printf("Buah mi madre");
    }else{
        printf("Ay mi madre el bicho");
    }




}