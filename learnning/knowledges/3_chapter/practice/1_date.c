//
// Created by NfryCreator on 2023/3/9.
//
#include <stdio.h>

int main(void){
    int year,month,day;
    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d",&month,&day,&year);
    printf("you entered the date %d%.2d%.2d",year,month,day);
    return 1;
}
