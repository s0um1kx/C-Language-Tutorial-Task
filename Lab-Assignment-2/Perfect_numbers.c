#include <stdio.h>

int main() {
    int n, i, j, sum;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Perfect numbers between 1 and %d are:\n", n);

    for (i = 1; i <= n; i++) {
        sum = 0;
        for (j = 1; j <= i / 2; j++) {
            if (i % j == 0) {
                sum += j;
            }
        }
        if (sum == i && i > 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}