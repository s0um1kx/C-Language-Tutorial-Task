#include <stdio.h>

int main() {
    int num, originalNum, remainder, n = 0;
    int result = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    
    for (int temp = num; temp != 0; ++n) {
        temp /= 10;
    }

    
    for (int temp = num; temp != 0; temp /= 10) {
        remainder = temp % 10;
        
        
        int power = 1;
        for (int i = 0; i < n; ++i) {
            power *= remainder;
        }
        result += power;
    }

    
    if (result == originalNum)
        printf("%d is an Armstrong number.\n", originalNum);
    else
        printf("%d is not an Armstrong number.\n", originalNum);

    return 0;
}