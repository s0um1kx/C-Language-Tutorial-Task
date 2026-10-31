
#include <stdio.h>
#include <math.h>

// Function to calculate 2D distance
float distance2D(float x1, float y1, float x2, float y2)
{
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

// Function to calculate 3D distance
float distance3D(float x1, float y1, float z1,
                 float x2, float y2, float z2)
{
    return sqrt(pow(x2 - x1, 2) +
                pow(y2 - y1, 2) +
                pow(z2 - z1, 2));
}

int main()
{
    int choice;
    float x1, y1, z1, x2, y2, z2, result;

    do
    {
        printf("\n===== MENU =====\n");
        printf("1. 2D Plane\n");
        printf("2. 3D Plane\n");
        printf("3. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter coordinates of first point (x1 y1): ");
                scanf("%f %f", &x1, &y1);

                printf("Enter coordinates of second point (x2 y2): ");
                scanf("%f %f", &x2, &y2);

                result = distance2D(x1, y1, x2, y2);

                printf("Distance in 2D plane: %.2f\n", result);
                break;

            case 2:
                printf("Enter coordinates of first point (x1 y1 z1): ");
                scanf("%f %f %f", &x1, &y1, &z1);

                printf("Enter coordinates of second point (x2 y2 z2): ");
                scanf("%f %f %f", &x2, &y2, &z2);

                result = distance3D(x1, y1, z1, x2, y2, z2);

                printf("Distance in 3D plane: %.2f\n", result);
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
