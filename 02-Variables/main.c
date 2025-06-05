#include <stdio.h>
#include <stdlib.h>

int main() {
    // Declare and initialize variables
    int age = 25; // Integer variable
    float height = 5.9; // Float variable, 4 bytes in size
    double weight = 70.5654; // Double variable, 8 bytes in size
    char initial = 'A'; // Character variable

    // Print the values of the variables
    printf("Age: %d \n", age); // Print integer
    printf("Height: %.1f \n", height); // Print float with one decimal place
    printf("Weight: %.2lf \n", weight); // Print double with two decimal places
    printf("Initial: %c \n", initial); // Print character

    return EXIT_SUCCESS; // Return success status
}