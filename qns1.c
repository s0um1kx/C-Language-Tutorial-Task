#include <stdio.h>

// Function to display available recharge plans
void displayPlans() {
    printf("\n--- Available Recharge Plans ---\n");
    printf("1. Plan ₹199: 1.5GB/day - 28 Days\n");
    printf("2. Plan ₹299: 2.0GB/day - 28 Days\n");
    printf("3. Plan ₹499: 3.0GB/day - 56 Days\n");
    printf("--------------------------------\n");
}

// Function 
void addMoney(float *balance) {
    float amount;
    printf("Enter amount to add to wallet: ₹");
    scanf("%f", &amount);
    
    if (amount > 0) {
        *balance += amount;
        printf("Successfully added ₹%.2f. New Balance: ₹%.2f\n", amount, *balance);
    } else {
        printf("Invalid amount entered!\n");
    }
}

// Function 
void performRecharge(float amount, float *balance) {
    if (*balance >= amount) {
        *balance -= amount;
        printf("Recharge of ₹%.2f successful!\n", amount);
        printf("Remaining Wallet Balance: ₹%.2f\n", *balance);
    } else {
        printf("Insufficient balance! You need ₹%.2f more.\n", amount - *balance);
    }
}

int main() {
    float walletBalance = 0.0; // Initial wallet balance
    int choice;

    while (1) {
        // Display Menu
        printf("\n========== Mobile Recharge Menu ==========\n");
        printf("1. View recharge plans\n");
        printf("2. Recharge for ₹199\n");
        printf("3. Recharge for ₹299\n");
        printf("4. Recharge for ₹499\n");
        printf("5. Add money to wallet\n");
        printf("6. Display wallet balance\n");
        printf("7. Exit\n");
        printf("==========================================\n");
        printf("Enter your choice (1-7): ");
        scanf("%d", &choice);

        // Switch 
        switch (choice) {
            case 1:
                displayPlans();
                break;
            case 2:
                
                performRecharge(199.0, &walletBalance);
                break;
            case 3:
                performRecharge(299.0, &walletBalance);
                break;
            case 4:
                performRecharge(499.0, &walletBalance);
                break;
            case 5:
                addMoney(&walletBalance);
                break;
            case 6:
                printf("Current Wallet Balance: ₹%.2f\n", walletBalance);
                break;
            case 7:
                printf("Thank you for using the mobile recharge application. Goodbye!\n");
                return 0; 
            default:
                printf("Invalid choice! Please select an option between 1 and 7.\n");
        }
    }

    return 0;
}