#include <stdlib.h>
#include <stdio.h>

int main(){

    for(int i=0; i<10; i++){
        if(i == 5){
            printf("Breaking the loop at i = %d\n", i);
            break; // Exit the loop when i equals 5
        }
        printf("Current value of i: %d\n", i);
    }

    printf("\n");

    for(int j=10; j>0; j--){
        if(j == 3){
            printf("Continuing the loop at j = %d\n", j);
            continue; // Skip the rest of the loop when j equals 3
        }
        printf("Current value of j: %d\n", j);
    }

}