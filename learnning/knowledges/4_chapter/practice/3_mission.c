//
// Created by NfryCreator on 2023/3/20.
//
#include <stdio.h>

int main(void){
    int number_1,number_2,number_3;

    printf("Enter hundreds number: ");
    scanf("%d",&number_1);
    printf("Enter tens number: ");
    scanf("%d",&number_2);
    printf("Enter ones number: ");
    scanf("%d",&number_3);
    printf("The result is : %d%d%d \n",number_1,number_2,number_3);
    printf("The reversal is : %d%d%d\n",number_3,number_2,number_1);

    return 0  ;
}
