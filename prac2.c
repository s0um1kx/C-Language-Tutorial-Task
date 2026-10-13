#include <stdio.h>
int main(){
    char c;

    printf("Enter a character: ");
    scanf("%c", &c);

    if( c >= 'A' && c <= 'Z'){
        printf("The character is an uppercase letter. \n");
    }
    else{
        printf("The character is not an uppercase letter. \n");
    }

    return 0;
}