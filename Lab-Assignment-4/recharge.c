#include <stdio.h>

void displayPlans();
void recharge(int amount, int *walletBalance);
void addMoney(int amount, int *walletBalance);

int main()
{
    int choice, amount;
    int walletBalance = 0;

    do
    {
        printf("\n--- MOBILE RECHARGE APPLICATION ---\n");
        printf("1. View recharge plans\n");
        printf("2. Recharge for Rs.199\n");
        printf("3. Recharge for Rs.299\n");
        printf("4. Recharge for Rs.499\n");
        printf("5. Add money to wallet\n");
        printf("6. Display wallet balance\n");
        printf("7. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                displayPlans();
                break;

            case 2:
                recharge(199, &walletBalance);
                break;

            case 3:
                recharge(299, &walletBalance);
                break;

            case 4:
                recharge(499, &walletBalance);
                break;

            case 5:
                printf("Enter amount to add: ");
                scanf("%d", &amount);
                addMoney(amount, &walletBalance);
                break;

            case 6:
                printf("Wallet balance: Rs.%d\n", walletBalance);
                break;

            case 7:
                printf("Thank you!\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while (choice != 7);

    return 0;
}

void displayPlans()
{
    printf("\nAvailable Recharge Plans:\n");
    printf("Rs.199\n");
    printf("Rs.299\n");
    printf("Rs.499\n");
}

void recharge(int amount, int *walletBalance)
{
    if (*walletBalance >= amount)
    {
        *walletBalance = *walletBalance - amount;
        printf("Recharge successful!\n");
        printf("Remaining balance: Rs.%d\n", *walletBalance);
    }
    else
    {
        printf("Insufficient wallet balance!\n");
    }
}

void addMoney(int amount, int *walletBalance)
{
    if (amount > 0)
    {
        *walletBalance = *walletBalance + amount;
        printf("Money added successfully!\n");
        printf("Wallet balance: Rs.%d\n", *walletBalance);
    }
    else
    {
        printf("Enter a valid amount!\n");
    }
}