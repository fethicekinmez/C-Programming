#include <stdio.h>
#include <stdlib.h>

int main(){
    int bookPrice, orderQuantity;
    float discountRate, noDiscountPirce, discountAmount, totalPrice;
    bookPrice = 20; // Price of one book, dolars
    orderQuantity = 0;
    printf("How many books you want to order?: ");
    scanf("%d", &orderQuantity);

    if(orderQuantity > 60){
        discountRate = 0.25; // 25% discount
    } else if(orderQuantity >= 30 && orderQuantity <= 60) {
        discountRate = 0.15; // 15% discount
    } else if(orderQuantity >= 10 && orderQuantity < 30) {
        discountRate = 0.05; // 5% discount
    } else {
        discountRate = 0.1; // 1% discount
    }
    noDiscountPirce = bookPrice * orderQuantity; // Total price without discount
    discountAmount = noDiscountPirce * discountRate/100; // Discount amount
    totalPrice = noDiscountPirce - discountAmount; // Total price with discount
    printf("Total price without discount: $%.2f\n", noDiscountPirce);
    printf("Discount amount: $%.2f\n", discountAmount);
    printf("Total price with discount: $%.2f\n", totalPrice);
   

    return 0;
}