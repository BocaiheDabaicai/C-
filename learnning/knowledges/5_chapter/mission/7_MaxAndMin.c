//
// Created by NfryCreator on 2023/3/27.
//
#include <stdio.h>

int main(void) {
    int a1, a2, a3, a4, temp1, temp2, min1, min2;

    printf("Enter four integers: ");
    scanf("%d %d %d %d", &a1, &a2, &a3, &a4);

    if (a1 > a2) {
        temp1 = a1;
        min1 = a2;
    } else {
        temp1 = a2;
        min1 = a1;
    }
    if (a3 > a4) {
        temp2 = a3;
        min2 = a4;
    } else {
        temp2 = a4;
        min2 = a3;
    }
    printf("Largest: %d\n", temp1 > temp2 ? temp1 : temp2);
    printf("Smallest: %d\n", min1 < min2 ? min1 : min2);

    return 1;
}