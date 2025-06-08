#include <stdio.h>
#include <stdlib.h>

int main(){

    char operator;
    double num1, num2, result;
    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter second number: ");
    scanf("%lf", &num2);
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    switch(operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if(num2 != 0) {
                result = num1 / num2;
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
    }
    printf("%.2lf %c %.2lf = %.2lf\n", num1, operator,  num2, result);
    return 0;
}