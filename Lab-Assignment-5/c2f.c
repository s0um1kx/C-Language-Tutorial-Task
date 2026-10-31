
#include <stdio.h>

// Function to convert Celsius to Fahrenheit
float celsiusToFahrenheit(float c)
{
    return (c * 9.0 / 5.0) + 32;
}

// Function to convert Fahrenheit to Celsius
float fahrenheitToCelsius(float f)
{
    return (f - 32) * 5.0 / 9.0;
}

int main()
{
    int choice;
    float temp, result;

    do
    {
        printf("\n===== MENU =====\n");
        printf("1. Celsius to Fahrenheit\n");
        printf("2. Fahrenheit to Celsius\n");
        printf("3. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter temperature in Celsius: ");
                scanf("%f", &temp);

                result = celsiusToFahrenheit(temp);

                printf("Temperature in Fahrenheit: %.2f\n", result);
                break;

            case 2:
                printf("Enter temperature in Fahrenheit: ");
                scanf("%f", &temp);

                result = fahrenheitToCelsius(temp);

                printf("Temperature in Celsius: %.2f\n", result);
                break;

            case 3:
                printf("Exiting the program...\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }

    } while (choice != 3);

    return 0;
}
