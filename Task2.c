//cube of a number 
#include <stdio.h>

int main() {
    int num, cube;

    printf("Enter a number: ");
    scanf("%d", &num);

    cube = num * num * num;
    printf("Cube of %d is %d\n", num, cube);

    return 0;
}