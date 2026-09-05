#include <stdio.h>

int main() {
    
    int num1 ,num2;

    printf("Enter num1: ");
    scanf("%d", &num1);
    printf("Enter num2: ");
    scanf("%d", &num2);

    int max = (num1 > num2) ? num1 : num2;
    printf("The maximum number is: %d\n", max);

    return 0;
}