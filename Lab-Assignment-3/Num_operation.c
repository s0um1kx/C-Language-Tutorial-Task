
#include <stdio.h>

int main() {
    int num, choice;
    int i, temp, digit;
    int sum, reverse, factorial;
    int isPrime, original;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Please enter a positive integer.\n");
        return 0;
    }

    do {
        printf("\n=== NUMBER OPERATIONS ===\n");
        printf("1. Check Even or Odd\n");
        printf("2. Check Prime\n");
        printf("3. Find Factorial\n");
        printf("4. Find Sum of Digits\n");
        printf("5. Reverse the Number\n");
        printf("6. Check Palindrome\n");
        printf("7. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                if (num % 2 == 0)
                    printf("%d is Even.\n", num);
                else
                    printf("%d is Odd.\n", num);
                break;

            case 2:
                isPrime = 1;

                if (num == 1)
                    isPrime = 0;
                else {
                    for (i = 2; i <= num / i; i++) {
                        if (num % i == 0) {
                            isPrime = 0;
                            break;
                        }
                    }
                }

                if (isPrime)
                    printf("%d is Prime.\n", num);
                else
                    printf("%d is not Prime.\n", num);
                break;

            case 3:
                factorial = 1;

                for (i = 1; i <= num; i++)
                    factorial = factorial * i;

                printf("Factorial of %d = %d\n", num, factorial);
                break;

            case 4:
                temp = num;
                sum = 0;

                while (temp > 0) {
                    digit = temp % 10;
                    sum = sum + digit;
                    temp = temp / 10;
                }

                printf("Sum of digits = %d\n", sum);
                break;

            case 5:
                temp = num;
                reverse = 0;

                while (temp > 0) {
                    digit = temp % 10;
                    reverse = reverse * 10 + digit;
                    temp = temp / 10;
                }

                printf("Reverse of %d = %d\n", num, reverse);
                break;

            case 6:
                temp = num;
                reverse = 0;

                while (temp > 0) {
                    digit = temp % 10;
                    reverse = reverse * 10 + digit;
                    temp = temp / 10;
                }

                if (num == reverse)
                    printf("%d is a Palindrome.\n", num);
                else
                    printf("%d is not a Palindrome.\n", num);
                break;

            case 7:
                printf("Exiting the program.\n");
                break;

            default:
                printf("Invalid choice. Please select 1 to 7.\n");
        }

    } while (choice != 7);

    return 0;
}
