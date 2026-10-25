#include <stdio.h>

int main() {
    int marks;

    printf("Enter marks: ");
    scanf("%d", &marks);

    if (90 <= marks && marks <= 100) {
        printf("Grade: A+\n");
    } else if (70 <= marks && marks < 90) {
        printf("Grade: A\n");
    } else if (30 <= marks && marks < 70) {
        printf("Grade: B\n");
    } else if (marks < 30) {
        printf("Grade: C\n");
    } else {
        printf("Invalid marks entered.\n");
    }

    return 0;
}