#include <stdio.h>

int main() {
    int num, originalNum, temp, remainder;
    int digits = 0;
    int sum = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    // Step 1: Count total digits
    temp = num;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    // Step 2: Calculate sum of digits raised to the power of digit count
    temp = num;
    while (temp != 0) {
        remainder = temp % 10;

        // Custom power calculation: remainder^digits
        int power = 1;
        for (int i = 0; i < digits; i++) {
            power *= remainder;
        }

        sum += power;
        temp /= 10; // Remove the last digit
    }

    // Step 3: Verify Armstrong property
    if (sum == originalNum) {
        printf("%d is an Armstrong number.\n", originalNum);
    } else {
        printf("%d is NOT an Armstrong number.\n", originalNum);
    }

    return 0;
}