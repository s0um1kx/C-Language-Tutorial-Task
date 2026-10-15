
#include <stdio.h>

int main() {
    int num, original, digit;
    int sum = 0, digits = 0, temp;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Negative numbers are not Armstrong numbers.\n");
        return 0;
    }

    original = num;
    temp = num;

    // Count the number of digits
    do {
        digits++;
        temp = temp / 10;
    } while (temp != 0);

    temp = num;

    // Calculate the sum of digits raised to 'digits'
    do {
        digit = temp % 10;

        int power = 1;
        for (int i = 1; i <= digits; i++) {
            power = power * digit;
        }

        sum = sum + power;
        temp = temp / 10;

    } while (temp != 0);

    // Compare the sum with the original number
    if (sum == original) {
        printf("%d is an Armstrong number.\n", original);
    } else {
        printf("%d is not an Armstrong number.\n", original);
    }

    return 0;
}
