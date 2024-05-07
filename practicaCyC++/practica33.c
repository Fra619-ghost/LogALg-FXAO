#include <stdio.h>

int sumFunction() {
    int num1, num2;
    printf("Ingresa un numero: ");
    scanf("%d", &num1);
    printf("Ingresar el segundo valor:");
    scanf("%d", &num2);
    return num1 + num2;
}

int main() {
    int result;
    result = sumFunction();
    printf("La suma es: %d", result);
    return 0;
}