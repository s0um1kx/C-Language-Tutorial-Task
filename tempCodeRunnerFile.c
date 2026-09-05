#include <stdio.h>

int main() {
    char c;

    printf("Enter a charcter: ");
    scanf("%c", &c);

    printf("%d \n", c>='0'&& c<='9') ;
    return 0;


}