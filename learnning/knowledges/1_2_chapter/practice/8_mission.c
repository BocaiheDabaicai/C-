//
// Created by NfryCreator on 2023/3/6.
//
#include <stdio.h>

int main(void ){
    float loan,rate,monthlyPayment,result;
    printf("Enter amount of loan : ");
    scanf("%f",&loan);
    printf("Enter interest rate : ");
    scanf("%f",&rate);
    printf("Enter monthly payment : ");
    scanf("%f",&monthlyPayment);
    printf("Balance remaining after first payment : $ %.2f\n",loan-monthlyPayment+loan*(rate/1200.00f));
    loan = loan-monthlyPayment+loan*(rate/1200.00f);
    printf("Balance remaining after first payment : $ %.2f\n",loan-monthlyPayment+loan*(rate/1200.00f));
    loan = loan-monthlyPayment+loan*(rate/1200.00f);
    printf("Balance remaining after first payment : $ %.2f\n",loan-monthlyPayment+loan*(rate/1200.00f));

    return 1;
}