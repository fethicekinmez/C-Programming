#include <stdio.h>
#include <stdlib.h>

int main(){

    printf("Enter a letter: ");
    char letter;
    scanf(" %c", &letter);

    switch(letter){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("The letter '%c' is a vowel.\n", letter);
            break;
        default:
            if((letter >= 'a' && letter <= 'z') || (letter >='A' && letter <= 'Z')){
                printf("The letter '%c' is a consonant.\n", letter);
            } else {
                printf("The character '%c' is not a valid letter.\n", letter);
            }
    }
}