#include <stdio.h>
#include <stdlib.h>

int main(){

    int a = 10, b = 20, c = 30;
    int result;

    // Arithmetic Operators
    result = a + b; // Addition
    printf("Addition: %d\n", result);
    
    result = b - a; // Subtraction
    printf("Subtraction: %d\n", result);
    
    result = a * b; // Multiplication
    printf("Multiplication: %d\n", result);
    
    result = c / a; // Division
    printf("Division: %d\n", result);
    
    result = c % b; // Modulus
    printf("Modulus: %d\n", result);

    return 0;
}