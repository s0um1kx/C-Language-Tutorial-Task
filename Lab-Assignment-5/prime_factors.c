
#include <stdio.h>

// Function to find prime factors
void primeFactors(int n)
{
    int i;

    printf("Prime factors of %d are: ", n);

    for (i = 2; i <= n; i++)
    {
        while (n % i == 0)
        {
            printf("%d ", i);
            n = n / i;
        }
    }
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1)
    {
        printf("Prime factors are not defined for this number.");
    }
    else
    {
        primeFactors(num);
    }

    return 0;
}
