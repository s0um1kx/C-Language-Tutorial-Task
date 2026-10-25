#include <stdio.h>

/* call by value: distance, base fare and cost per km */
float calcFare(float distance, float baseFare, float perKm) {
    return baseFare + distance * perKm;
}

/* call by reference: adds this fare to the accumulated fare */
void addToTotal(float fare, float *totalFare) {
    *totalFare = *totalFare + fare;
}

void book(float baseFare, float perKm, float *totalFare) {
    float distance, fare;
    printf("Enter distance in km: ");
    scanf("%f", &distance);

    if (distance <= 0) {
        printf("Invalid distance. Booking rejected.\n");
        return;
    }
    fare = calcFare(distance, baseFare, perKm);
    addToTotal(fare, totalFare);
    printf("Booking confirmed. Fare = Rs.%.2f\n", fare);
}

int main() {
    int choice;
    float totalFare = 0;

    do {
        printf("\n===== Cab Booking Menu =====\n");
        printf("1. Book a Mini cab\n");
        printf("2. Book a Sedan\n");
        printf("3. Book an SUV\n");
        printf("4. Display total fare\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: book(50, 12, &totalFare); break;
            case 2: book(80, 15, &totalFare); break;
            case 3: book(120, 20, &totalFare); break;
            case 4: printf("Total fare = Rs.%.2f\n", totalFare); break;
            case 5: printf("Thank you!\n"); break;
            default: printf("Invalid choice.\n");
        }
    } while (choice != 5);

    return 0;
}