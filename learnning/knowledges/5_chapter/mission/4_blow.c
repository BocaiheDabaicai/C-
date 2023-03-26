//
// Created by NfryCreator on 2023/3/26.
//
#include <stdio.h>

int main(void ){
    int speed;

    printf("Please Enter a wind speed: ");
    scanf("%d",&speed);

    if(speed<1){
        printf("The moment is Calm.\n");
    }
    else if(speed<4){
        printf("The moment is Light air.\n");
    }
    else if(speed<28){
        printf("The moment is Breeze.\n");
    }
    else if(speed<48){
        printf("The moment is Gale.\n");
    }
    else if(speed<64){
        printf("The moment is Storm.\n");
    }
    else{
        printf("The moment is Hurricane.\n");
    }

    return 0;
}
