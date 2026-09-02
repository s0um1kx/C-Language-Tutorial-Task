//perimeter of rectangle

#include <stdio.h>

int main() {
    int side_a, side_b;

    printf("Enter side a: ");
    scanf("%d", &side_a);

    printf("Enter side b: ");
    scanf("%d", &side_b);

    printf("Perimeter of rectangle: %d\n", 2 * (side_a + side_b)); 

    return 0;
}