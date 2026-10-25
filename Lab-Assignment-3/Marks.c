
#include <stdio.h>

int main() {
    int marks[5];
    int choice, i;
    int total = 0;
    float average;
    int marksEntered = 0;

    do {
        printf("\n===== STUDENT MARKS MENU =====\n");
        printf("1. Read marks of five subjects\n");
        printf("2. Calculate total marks\n");
        printf("3. Calculate average marks\n");
        printf("4. Display grade\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                total = 0;

                printf("Enter marks for five subjects (0-100):\n");

                for (i = 0; i < 5; i++) {
                    printf("Subject %d: ", i + 1);
                    scanf("%d", &marks[i]);

                    if (marks[i] < 0 || marks[i] > 100) {
                        printf("Invalid marks. Enter values from 0 to 100.\n");
                        break;
                    }

                    total = total + marks[i];
                }

                if (i == 5) {
                    marksEntered = 1;
                    printf("Marks recorded successfully.\n");
                } else {
                    marksEntered = 0;
                    total = 0;
                }
                break;

            case 2:
                if (marksEntered) {
                    printf("Total marks = %d out of 500\n", total);
                } else {
                    printf("Please enter valid marks first.\n");
                }
                break;

            case 3:
                if (marksEntered) {
                    average = total / 5.0f;
                    printf("Average marks = %.2f\n", average);
                } else {
                    printf("Please enter valid marks first.\n");
                }
                break;

            case 4:
                if (marksEntered) {
                    average = total / 5.0f;

                    if (average >= 90)
                        printf("Grade: A\n");
                    else if (average >= 80)
                        printf("Grade: B\n");
                    else if (average >= 70)
                        printf("Grade: C\n");
                    else if (average >= 60)
                        printf("Grade: D\n");
                    else
                        printf("Grade: F\n");
                } else {
                    printf("Please enter valid marks first.\n");
                }
                break;

            case 5:
                printf("Exiting the program.\n");
                break;

            default:
                printf("Invalid choice. Please select 1 to 5.\n");
        }

    } while (choice != 5);

    return 0;
}
