#include <stdio.h>

int bonus(int b, int n) {
    if (n == 0)
        return b;              
    return 2 * bonus(b, n - 1); 
}

int main() {
    int b, n;
    printf("Enter initial bonus: ");
    scanf("%d", &b);
    printf("Enter number of levels: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Levels cannot be negative.\n");
        return 0;
    }
    printf("Bonus after %d levels = %d\n", n, bonus(b, n));
    return 0;
}