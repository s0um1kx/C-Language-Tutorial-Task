#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");

    if (scanf("%d", &num) != 1) {
        printf("Invalid input! Please enter a valid integer.\n");
        return 1;
    }

    if (num > 0) {
        printf("%d is a Natural Number.\n", num);
    } else {
        printf("%d is NOT a Natural Number.\n", num);
    }

    return 0;
}