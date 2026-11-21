#include <stdio.h>
void main() {
    int a[4], b[4], c[4],i;

    printf("Enter the first array: ");
    for(i = 0; i < 4; i++){
        scanf("%d", &a[i]);
    }
    printf("Enter the second array: ");
    for(i = 0; i < 4; i++){
        scanf("%d", &b[i]);
    }
    for(i = 0; i < 4; i++){
        c[i] = a[i]+b[i];
        printf("\n third array elemnt %d is : %d", i,c[i]);
    }

}