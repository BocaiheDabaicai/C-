//
// Created by NfryCreator on 2023/3/20.
//
#include <stdio.h>

// 01380015173
int main() {
    int number;
    printf("Enter the first 11 digits of a UPC: ");
    scanf("%d", &number);
//    printf("%11.11d",number);
    int first, second, sum;
//    first = (((number / 10000) / 10000) / 10) / 10 + ((((((number / 10000) / 10) / 10) / 10) / 10) / 10) % 10 +
//            (((((number / 10000) / 10) / 10) / 10) / 10) % 10 + ((((number / 10000) / 10) / 10) / 10) % 10 +
//            (((number / 10000) / 10) / 10) % 10 + ((number / 10000) / 10) % 10;
//    second = ((((number / 10) / 10) / 10) / 10) % 10 + (((number / 10) / 10) / 10) % 10 + ((number / 10) / 10) % 10 +
//             (number / 10) % 10 + number % 10;
    first = (((number / 10000) / 10000) / 10) / 10 + (((((number / 10000) / 10) / 10) / 10) / 10) % 10 +
            (((number / 10000) / 10) / 10) % 10 + ((((number / 10) / 10) / 10) / 10) % 10 + ((number / 10) / 10) % 10 +
            number % 10;
    second = ((((((number / 10000) / 10) / 10) / 10) / 10) / 10) % 10 + ((((number / 10000) / 10) / 10) / 10) % 10 +
             ((number / 10000) / 10) % 10 + (((number / 10) / 10) / 10) % 10 + (number / 10) % 10;
    sum = 3 * first + second;
    printf("Check digit: %d\n", (9 - ((sum - 1) % 10)));

    return 0;
}
