#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){

    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("Prime numbers up to %d are:\n", number);

    bool isPrime;;

    for(int i=number; i>1; i--){
        isPrime = true; // Reset isPrime for each number
        for(int j=2; j<i/2; j++){
            if(i % j == 0){
                isPrime = false;
                break; // No need to check further if a divisor is found
            }
        }
        if(isPrime){
            printf("%d ", i);
        }
    }
}