#include <stdlib.h>
#include <stdio.h>

int main(){

    int expression = 1;

    switch (expression){
    case 0:
        printf("The expression is 0.\n");
        break;
    case 1:
        printf("The expression is 1.\n");
        break;
    default:
        printf("The expression is neither 0 nor 1.\n");
        break;
    }

    int number = 20;

    switch (number % 10){
    case 0:
        printf("The number is a multiple of 10.\n");
    default:
        switch (number % 3) {
            case 0:
                printf("The number is a multiple of 3.\n");
                break;
            default:
                break;
        }
        break;
        }

}