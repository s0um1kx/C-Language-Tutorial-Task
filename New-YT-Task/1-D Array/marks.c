#include <stdio.h>
void main() {
    int marks[5], i;
    float sum = 0, avg;

    printf("Enter the marks of 5 students: ");

    for(i = 0; i < 5; i++){
        scanf("%d", &marks[i]);
    }
    for(i = 0; i < 5; i++){
       sum = sum + marks[i];
    }
    avg = sum / 5;

    printf("avg = %f\n",avg);
    printf("sum = %f\n",sum);
}