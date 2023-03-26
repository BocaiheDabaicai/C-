//
// Created by NfryCreator on 2023/3/26.
//
#include <stdio.h>

int main(void ){
    int data;
    printf("Enter a number: ");
    scanf("%d",&data);
    if(data>=0){
        if(data<10){
            printf("The number %d has 1 digits.\n",data);
        }
        else if(data<100){
            printf("The number %d has 2 digits.\n",data);
        }
        else if(data<1000){
            printf("The number %d has 3 digits.\n",data);
        }
        else {
            printf("The number %d has 4 digits at least.\n",data);
        }
    }
    else{
        printf("The number maybe needs to input correctly.");
    }


    return 1;
}
