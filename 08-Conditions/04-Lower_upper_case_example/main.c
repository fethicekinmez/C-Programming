#include <stdlib.h>
#include <stdio.h>

int main(){

    char c;
    printf("Enter a character: ");
    scanf(" %c", &c);

    // Check if the character is in lower case or upper case
    (c >= 'a' && c <= 'z') ? printf("The character '%c' is in lower case.\n", c) : (c >= 'A' && c <= 'Z') ? printf("The character '%c' is in upper case.\n", c) : printf("The character '%c' is neither in lower case nor in upper case.\n", c);

    
    return 0;
}