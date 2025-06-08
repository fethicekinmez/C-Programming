#include <stdio.h>
#include <stdlib.h>

int main(){

    int month_number;
    printf("Enter the month number (1-12): ");
    scanf("%d", &month_number);
    int days;

    switch (month_number){
    case 4: // April
    case 6: // June
    case 9: // September
    case 11: // November
        days = 30;
        break;
    case 2: // February
        days = 28; // Assuming it's not a leap year
        break;
    case 1: // January
    case 3: // March
    case 5: // May
    case 7: // July
    case 8: // August
    case 10: // October
    case 12: // December
        days = 31;
        break;
    default:
        printf("Invalid month number. Please enter a number between 1 and 12.\n");
        break;
    }
    printf("Number of days in month %d: %d\n", month_number, days);
    return 0;
}