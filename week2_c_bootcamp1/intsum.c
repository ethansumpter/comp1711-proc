#include <stdio.h>

int main(){
    int num1, num2, result;

    printf("Enter number 1: ");
    scanf("%d", &num1);

    printf("Enter number 2: ");
    scanf("%d", &num2);

    result = num1 + num2;
    printf("The result is: %d\n", result);

    return 0;
}