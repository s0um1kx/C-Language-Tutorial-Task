
#include <stdio.h>

// Function to convert uppercase to lowercase
char upperToLower(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
    {
        return ch + 32;
    }
    else
    {
        return ch;
    }
}

// Function to convert lowercase to uppercase
char lowerToUpper(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        return ch - 32;
    }
    else
    {
        return ch;
    }
}

int main()
{
    int choice;
    char ch;

    do
    {
        printf("\n===== MENU =====\n");
        printf("1. Uppercase to Lowercase\n");
        printf("2. Lowercase to Uppercase\n");
        printf("3. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter an uppercase character: ");
                scanf(" %c", &ch);

                printf("Lowercase character: %c\n",
                       upperToLower(ch));
                break;

            case 2:
                printf("Enter a lowercase character: ");
                scanf(" %c", &ch);

                printf("Uppercase character: %c\n",
                       lowerToUpper(ch));
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
