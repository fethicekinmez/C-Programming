#include <stdio.h>
#include <stdlib.h>

int main(){

    int x = 10;
    // Assignment operators
    x += 2;
    printf("x: %d\n", x);
    x -= 2;
    printf("x: %d\n\n", x);

    x <<= 2;  // 0000 01010 --> 0010 1000
    printf("x: %d\n", x);

    x ^= 2; // XOR assignment
    printf("x: %d\n", x);
/*  
    0010 1000  (x = 40)
    0000 0010  (2)
    ---------
    0010 1010  (result = 42) 
*/
    x &= 0;
    printf("x: %d\n", x);

    return 0;
}

/*
    & -> and
    | -> or
    ^ -> xor
    ~ -> not
    << -> left shift
    >> -> right shift
*/