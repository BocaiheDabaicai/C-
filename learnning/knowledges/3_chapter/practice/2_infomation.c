//
// Created by NfryCreator on 2023/3/9.
//
#include <stdio.h>

int main(void){
    int number,year,month,day;
    float price;
    printf("Enter item number: ");
    scanf("%d",&number);
    printf("Enter unit price: ");
    scanf("%f",&price);
    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d",&month,&day,&year);
    printf("Item\t\tUnit\t\tPurchase\n");
    printf("\t\tPrice\t\tDate\n");
    printf("%d\t\t$%7.2f\t%.2d/%.2d/%d",number,price,month,day,year);
    return 1;
}
