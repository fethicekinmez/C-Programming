#include <stdio.h>
#include <stdlib.h>

int main(){

    int arr[5] = {1, 2, 3, 4, 5};
    int sum = 0;
    int index;
    printf("Enter an index (0-4): ");
    scanf("%d", &index);

    switch (index) {
    case 4:
        sum += arr[4];
    case 3:
        sum += arr[3];
    case 2:
        sum += arr[2];
    case 1:
        sum += arr[1];
    case 0:
        sum += arr[0];
        break;
    default:
        printf("Invalid index! Please enter a value between 0 and 4.\n");
        break;
    }
    printf("Sum of elements from index 0 to %d is: %d\n", index, sum);

    return 0;
}