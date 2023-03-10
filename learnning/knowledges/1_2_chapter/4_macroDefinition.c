//
// Created by NfryCreator on 2023/3/3.
//
#include <stdio.h>

#define INCHES_PER_POUND 166

int main(void) {
    float volume, weight;
    volume = 134.2;
    weight = (volume + INCHES_PER_POUND - 1) / 166;
    printf("the result is: %.2f", weight);

    return 0;
}
