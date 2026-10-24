#include <stdio.h>

// Function declarations
float calculateGross(float basicSalary);
float calculateDeductions(float grossSalary);
float calculateNet(float grossSalary, float deductions);
void applyIncrement(float *basicSalary);
void displaySalaryDetails(float basicSalary);

int main()
{
    int choice;
    float basicSalary;
    float grossSalary, deductions, netSalary;

    printf("Enter basic salary: Rs.");
    scanf("%f", &basicSalary);

    if (basicSalary <= 0)
    {
        printf("Invalid basic salary!\n");
        return 0;
    }

    do
    {
        printf("\n--- EMPLOYEE SALARY MANAGEMENT ---\n");
        printf("1. Calculate gross salary\n");
        printf("2. Calculate deductions\n");
        printf("3. Calculate net salary\n");
        printf("4. Apply salary increment\n");
        printf("5. Display salary details\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                grossSalary = calculateGross(basicSalary);
                printf("Gross salary: Rs.%.2f\n", grossSalary);
                break;

            case 2:
                grossSalary = calculateGross(basicSalary);
                deductions = calculateDeductions(grossSalary);
                printf("Deductions: Rs.%.2f\n", deductions);
                break;

            case 3:
                grossSalary = calculateGross(basicSalary);
                deductions = calculateDeductions(grossSalary);
                netSalary = calculateNet(grossSalary, deductions);
                printf("Net salary: Rs.%.2f\n", netSalary);
                break;

            case 4:
                applyIncrement(&basicSalary);
                break;

            case 5:
                displaySalaryDetails(basicSalary);
                break;

            case 6:
                printf("Exiting salary management system.\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }

    } while (choice != 6);

    return 0;
}

// Calculate gross salary
float calculateGross(float basicSalary)
{
    float hra = basicSalary * 0.20;
    float da = basicSalary * 0.10;

    return basicSalary + hra + da;
}

// Calculate deductions as 5% of gross salary
float calculateDeductions(float grossSalary)
{
    return grossSalary * 0.05;
}

// Calculate net salary
float calculateNet(float grossSalary, float deductions)
{
    return grossSalary - deductions;
}

// Apply increment using a pointer
void applyIncrement(float *basicSalary)
{
    float percentage;
    float increment;

    printf("Enter increment percentage: ");
    scanf("%f", &percentage);

    if (percentage > 0)
    {
        increment = (*basicSalary * percentage) / 100;
        *basicSalary = *basicSalary + increment;

        printf("Increment applied: Rs.%.2f\n", increment);
        printf("Updated basic salary: Rs.%.2f\n", *basicSalary);
    }
    else
    {
        printf("Invalid increment percentage!\n");
    }
}

// Display all salary details
void displaySalaryDetails(float basicSalary)
{
    float hra = basicSalary * 0.20;
    float da = basicSalary * 0.10;
    float grossSalary = calculateGross(basicSalary);
    float deductions = calculateDeductions(grossSalary);
    float netSalary = calculateNet(grossSalary, deductions);

    printf("\n--- SALARY DETAILS ---\n");
    printf("Basic salary : Rs.%.2f\n", basicSalary);
    printf("HRA (20%%)    : Rs.%.2f\n", hra);
    printf("DA (10%%)     : Rs.%.2f\n", da);
    printf("Gross salary : Rs.%.2f\n", grossSalary);
    printf("Deductions   : Rs.%.2f\n", deductions);
    printf("Net salary   : Rs.%.2f\n", netSalary);
}