#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){

    int number;
    float squareRoot;
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    squareRoot = sqrt(number);
    if(number == squareRoot * squareRoot){
        printf("The square root of %d is %.2f\n", number, squareRoot);
    } else {
        printf("The number %d is not a perfect square.\n", number);
    }



}