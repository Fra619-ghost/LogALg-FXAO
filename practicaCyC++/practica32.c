#include <stdio.h>

int sumFunction() {
    int num1 = 5;
    int num2 = 10;
    int sum;
    sum = num1 + num2;
    return sum;
}

int main() {
    int result;
    result = sumFunction();
    printf("The sum is: %d", result);
    return 0;
}