#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> // For sleep function

int main(){

    int condition = 1; // This is a placeholder for the actual condition

    while (condition <= 5)
    {
        printf("Condition is: %d\n", condition++);
        sleep(1);
    }

    int i = 99;
    do{
        printf("execute the code then check the condition: if i > %d\n", i);
    } while (i > 99);
    
    


    return 0;
}