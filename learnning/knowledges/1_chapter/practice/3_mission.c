//
// Created by NfryCreator on 2023/3/6.
//
#include <stdio.h>
#define PI 3.1415926

int main(void){
    float redious,volume;
    printf("Enter redious : ");
    scanf("%f",&redious);
    volume = 4.0f/3.0f*PI*redious*redious*redious;
    printf("the result is : %.2f\n",volume);
    return 1;
}