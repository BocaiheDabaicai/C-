//
// Created by NfryCreator on 2023/3/6.
//
#include <stdio.h>

int main(void){
    int x,xFunction;
    printf("Enter an integer : ");
    scanf("%d",&x);
    xFunction = ((((3*x+2)*x-5)*x+7)*x)-6;    //f(x) = 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6
    printf("The result is : %d\n",xFunction);
    return 1;
}
