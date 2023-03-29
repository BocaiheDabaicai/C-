//
// Created by NfryCreator on 2023/3/28.
//

#include <stdio.h>

int main(void) {
    int grade, digit_ten;
    printf("Enter numerical grade: ");
    scanf("%d", &grade);
    digit_ten = grade / 10;
    if (grade >= 0 && grade <= 100) {
        switch (digit_ten) {
            case 10:
                printf("Letter grade: A\n");
                break;
            case 9:
                printf("Letter grade: A\n");
                break;
            case 8:
                printf("Letter grade: B\n");
                break;
            case 7:
                printf("Letter grade: C\n");
                break;
            case 6:
                printf("Letter grade: D\n");
                break;
            default:
                printf("Letter grade: F\n");
                break;
        }
    } else {
        printf("Your grade maybe is wrong.\n");
    }

    return 0;
}