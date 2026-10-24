#include <stdio.h>


void makePayment(float payment, float *amountPaid,
                 float *remainingFee);

void applyScholarship(float scholarship, float *totalFee,
                      float *remainingFee);

float calculateBalance(float totalFee, float amountPaid);

int main(void)
{
    int choice;
    float totalFee = 75000;
    float amountPaid = 0;
    float remainingFee = 75000;
    float amount;

    do
    {
        printf("\n--- STUDENT FEE MANAGEMENT ---\n");
        printf("1. Display total fees\n");
        printf("2. Make fee payment\n");
        printf("3. Calculate remaining fees\n");
        printf("4. Apply scholarship\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Total semester fee: Rs.%.2f\n",
                       totalFee);
                printf("Amount paid: Rs.%.2f\n",
                       amountPaid);
                printf("Remaining fee: Rs.%.2f\n",
                       remainingFee);
                break;

            case 2:
                printf("Enter payment amount: Rs.");
                scanf("%f", &amount);

                makePayment(amount, &amountPaid,
                            &remainingFee);
                break;

            case 3:
                remainingFee = calculateBalance(
                    totalFee, amountPaid);

                printf("Remaining fee: Rs.%.2f\n",
                       remainingFee);
                break;

            case 4:
                printf("Enter scholarship amount: Rs.");
                scanf("%f", &amount);

                applyScholarship(amount, &totalFee,
                                 &remainingFee);
                break;

            case 5:
                printf("Exiting the application.\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }

    } while (choice != 5);

    return 0;
}


void makePayment(float payment, float *amountPaid,
                 float *remainingFee)
{
    if (payment <= 0)
    {
        printf("Payment must be greater than zero.\n");
    }
    else if (payment > *remainingFee)
    {
        printf("Payment exceeds the remaining fee.\n");
    }
    else
    {
        *amountPaid = *amountPaid + payment;
        *remainingFee = *remainingFee - payment;

        printf("Payment successful!\n");
        printf("Total amount paid: Rs.%.2f\n",
               *amountPaid);
        printf("Remaining fee: Rs.%.2f\n",
               *remainingFee);
    }
}


void applyScholarship(float scholarship, float *totalFee,
                     float *remainingFee)
{
    if (scholarship <= 0)
    {
        printf("Scholarship must be greater than zero.\n");
    }
    else if (scholarship > *remainingFee)
    {
        printf("Scholarship exceeds the remaining fee.\n");
    }
    else
    {
        *totalFee = *totalFee - scholarship;
        *remainingFee = *remainingFee - scholarship;

        printf("Scholarship applied successfully!\n");
        printf("Updated total fee: Rs.%.2f\n",
               *totalFee);
        printf("Remaining fee: Rs.%.2f\n",
               *remainingFee);
    }
}


float calculateBalance(float totalFee, float amountPaid)
{
    return totalFee - amountPaid;
}