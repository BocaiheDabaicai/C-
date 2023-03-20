//
// Created by NfryCreator on 2023/3/20.
//
#include <stdio.h>

// 869148426000
int main(void) {
    long long number, i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i12, first, second, sum;
    printf("Enter the first 12 digits of an EAN:");
    scanf("%lld", &number);
    printf("number : %lld\n", number);
    i1 = number / 100000000000;
    i2 = number / 10000000000 % 10;
    i3 = number / 1000000000 % 10 % 10;
    i4 = number / 100000000 % 10 % 10 % 10;
    i5 = number / 10000000 % 10 % 10 % 10 % 10;
    i6 = number / 1000000 % 10 % 10 % 10 % 10 % 10;
    i7 = number / 100000 % 10 % 10 % 10 % 10 % 10 % 10;
    i8 = number / 10000 % 10 % 10 % 10 % 10 % 10 % 10 % 10;
    i9 = number / 1000 % 10 % 10 % 10 % 10 % 10 % 10 % 10 % 10;
    i10 = number / 100 % 10 % 10 % 10 % 10 % 10 % 10 % 10 % 10 % 10;
    i11 = number / 10 % 10 % 10 % 10 % 10 % 10 % 10 % 10 % 10 % 10 % 10;
    i12 = number % 10 % 10 % 10 % 10 % 10 % 10 % 10 % 10 % 10 % 10 % 10;
//    printf("%lld %lld %lld %lld %lld %lld %lld %lld %lld %lld %lld %lld\n",i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i12);
    first = i2 + i4 + i6 + i8 + i10 + i12;
    second = i1 + i3 + i5 + i7 + i9 + i11;
    sum = 3 * first + second;
    printf("%lld %lld\n",first,second);
    printf("%lld\n ",sum);
    printf("Check digit: %lld\n",(9-(sum-1)%10));

    return 0;
}
