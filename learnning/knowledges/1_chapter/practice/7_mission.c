//
// Created by NfryCreator on 2023/3/6.
//
#include <stdio.h>

int main(void ){
    int dollar,cash_20,cash_10,cash_5,cash_1;
    printf("Enter a dollar mount: ");
    scanf("%d",&dollar);
    printf("$20 bills: %d\n",dollar/20);
    cash_20=dollar%20;
    printf("$10 bills: %d\n",cash_20/10);
    cash_10=cash_20%10;
    printf("$5 bills: %d\n",cash_10/5);
    cash_5=cash_10%5;
    printf("$1 bills: %d\n",cash_5/1);
    return 1;
}
