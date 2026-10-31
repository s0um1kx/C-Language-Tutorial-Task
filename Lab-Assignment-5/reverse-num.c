
#include <stdio.h>

// Function to reverse a number
int reverseNumber(int n)
{
    int rev = 0, digit;

    while (n != 0)
    {
        digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }

    return rev;
}

int main()
{
    int num, rev;

    printf("Enter a number: ");
    scanf("%d", &num);

    rev = reverseNumber(num);

    printf("Reverse of given number: %d\n", rev);

    return 0;
}
