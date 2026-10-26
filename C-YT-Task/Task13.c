#include <stdio.h>
int main() {
    int n;
    printf("enter a number: ");
    scanf("%d", &n);

    int sum = 0;
    for (int i = n; i >= 1; i--) {
        sum += i;
        printf("%d\n", i);
    }
    printf("sum is: %d\n", sum);
    return 0;
}