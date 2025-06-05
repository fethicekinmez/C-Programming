#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159

int main(){

    int myInt;
    printf("Enter an integer: ");
    scanf("%d", &myInt);
    printf("You entered: %d\n", myInt);

    int myInt2;
    printf("Enter two integer: ");
    scanf("%d %d", &myInt, &myInt2);
    printf("You entered: %d and %d\n", myInt, myInt2);

    // Calculate the area of a circle
    int radius;
    printf("Enter the radius of the circle: ");
    scanf("%d", &radius);
    float areaCircle = PI * radius * radius;
    printf("The area of the circle is: %f\n", areaCircle);

    // Calculate square and cube of integers
    int num1, num2, num3;
    printf("Enter three integer to calculate their cube and square: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("The number\tSquare\tCube\n");
    printf("------------------------------------\n");
    printf("%d\t\t%d\t%d\n", num1, (num1 * num1), (num1 * num1 * num1));
    printf("%d\t\t%d\t%d\n", num2, (num2 * num2), (num2 * num2 * num2));
    printf("%d\t\t%d\t%d\n", num3, (num3 * num3), (num3 * num3 * num3));
    printf("------------------------------------\n");

    return 0;
}