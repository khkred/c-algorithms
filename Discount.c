#include<stdio.h>

int main(){
    float finalPrice , discount, salePrice , totalDiscount;

    printf("Enter the sale price: ");
    scanf("%f",&salePrice);
    printf("Enter the Discount:");
    scanf("%f",&discount);
    totalDiscount  = (salePrice*discount)/100;
    finalPrice = salePrice - totalDiscount;
    printf("the final price: %f\n ",finalPrice);




}
