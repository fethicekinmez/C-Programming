#include <stdio.h>
#include <stdlib.h>

int main(){

    char char1 = 84; // ASCII value for 'T'
    printf("As number: %d\n", char1);
    printf("As character: %c\n", char1);

    char str1[30] = "Istanbul";
    printf("0th index of the string: %c\n", str1[0]);
    printf("String: %s\n", str1); // %s is used for strings

    printf("Please enter a city name: ");
    char str2[30];
    scanf("%s", str2); // %s reads a string until whitespace, 29 to prevent overflow
    printf("You entered: %s\n", str2);

    return 0;
}