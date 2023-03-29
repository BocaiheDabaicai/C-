//
// Created by NfryCreator on 2023/3/27.
//
#include <stdio.h>

int main(void) {
    float fare, comment;
    printf("Enter a fee for tax : ");
    scanf("%f", &fare);

    if (fare > 0) {
        if (fare < 750) {
            comment = fare * 0.01f;
        } else if (fare < 2250) {
            comment = 7.5f + (fare - 750) * 0.02f;
        } else if (fare < 3750) {
            comment = 37.5f + (fare - 2250) * 0.03f;
        } else if (fare < 5250) {
            comment = 82.5f + (fare - 3750) * 0.04f;
        } else if (fare < 7000) {
            comment = 142.5f + (fare - 5250) * 0.05f;
        } else {
            comment = 230.0f + (fare - 7000) * 0.06f;
        }
        printf("you need to pay %.2f\n", comment);
    } else {
        printf("your fare is wrong, Please check out\n");
    }

    return 0;
}
