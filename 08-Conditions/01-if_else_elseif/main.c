#include <stdio.h>
#include <stdlib.h>

int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number > 0) {
        printf("The number is positive.\n");
    } 
    else if (number < 0) {
        printf("The number is negative.\n");
    } 
    else {
        printf("The number is zero.\n");
    }


    // Short version of if - else if - else
    int number2;
    printf("Enter another integer: ");
    scanf("%d", &number2);
    (number2 > 0) ? printf("The number is positive.\n") : (number2 < 0) ? printf("The number is negative.\n") : printf("The number is zero.\n");

    return 0;
}