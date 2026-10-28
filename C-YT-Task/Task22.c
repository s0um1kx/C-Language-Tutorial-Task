#include <stdio.h>
#include <math.h>

void squareArea();
void rectangleArea();
void circleArea();

int main() {
    squareArea();
    rectangleArea();
    circleArea();
}

void squareArea() {
    int n = 4;
    printf("%f\n", pow(n,2));
}
void rectangleArea() {
    int a=4, b=5;
    int area = a * b;
    printf("%d\n", area);
}
void circleArea() {
    int r = 4;
    float area2 = 3.14 *r *r;
    printf("%f\n", area2);
}