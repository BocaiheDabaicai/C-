//
// Created by NfryCreator on 2023/3/6.
//
#include <stdio.h>

int main(void){
    float amount,amountTax;
    printf("Enter an amount : ");
    scanf("%f",&amount);
    amountTax = amount*1.05;
    printf("With tax added : $ %.2f\n",amountTax);
    return 1;
}
