#include <stdio.h>

int main () {
    int NA;
    int res;
    int temp;
    printf("Enter a number: ");
    scanf("%d", &NA);
    int cop=NA;
    while (NA<0){
        temp=NA%10;
        res+=(temp*temp*temp);
        NA=NA/10;

    }
    if (res==cop){
        printf("True");
    }
    else {
        printf("false");
    }
    return 0;

}