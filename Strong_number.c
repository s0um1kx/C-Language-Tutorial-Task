#include <stdio.h>

int main() {
    int n, temp, remainder;
    long long sum = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);

    temp = n;

    while (temp > 0) {
        remainder = temp % 10;
        
        
        long long fact = 1;
        for (int i = 1; i <= remainder; i++) {
            fact *= i;
        }
        
        sum += fact;
        temp /= 10;
    }

    if (sum == n && n > 0) {
        printf("%d is a Strong number.\n", n);
    } else {
        printf("%d is not a Strong number.\n", n);
    }

    return 0;
}