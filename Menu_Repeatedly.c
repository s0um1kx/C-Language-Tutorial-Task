
#include <stdio.h>

int main() {
    int choice;

    do {
        printf("\n----- MENU -----\n");
        printf("1. Option 1\n");
        printf("2. Option 2\n");
        printf("3. Option 3\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("You selected Option 1.\n");
                break;

            case 2:
                printf("You selected Option 2.\n");
                break;

            case 3:
                printf("You selected Option 3.\n");
                break;

            case 4:
                printf("Exiting the program.\n");
                break;

            default:
                printf("Invalid choice. Please try again.\n");
        }

    } while (choice != 4);

    return 0;
}
