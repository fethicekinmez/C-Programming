#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){

    int number;
    bool isPrime = true;
    printf("Enter a number: ");
    scanf("%d", &number);

    for(int i=number/2; i>1; i--){
        if(number % i == 0){
            isPrime = false;
            break;
        }
    }

    if(isPrime){
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    return 0;

}