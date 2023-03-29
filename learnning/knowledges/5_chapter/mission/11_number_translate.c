//
// Created by NfryCreator on 2023/3/28.
//
#include <stdio.h>

int main(void) {
    int number, digit_ten, digit_one;
    printf("Enter a two-digit number: ");
    scanf("%d", &number);
    digit_ten = number / 10;
    digit_one = number % 10;
    if (number > 19 && number < 100) {
        switch (digit_ten) {
            case 9:
                printf("You entered the number ninety-");
                break;
            case 8:
                printf("You entered the number eighty-");
                break;
            case 7:
                printf("You entered the number seventy-");
                break;
            case 6:
                printf("You entered the number sixty-");
                break;
            case 5:
                printf("You entered the number fifty-");
                break;
            case 4:
                printf("You entered the number fourty-");
                break;
            case 3:
                printf("You entered the number thirty-");
                break;
            case 2:
                printf("You entered the number twenty-");
                break;
            default:
                printf("The number is wrong.\n");
                break;
        }
        switch (digit_one) {
            case 9:
                printf("nine\n");
                break;
            case 8:
                printf("eight\n");
                break;
            case 7:
                printf("seven\n");
                break;
            case 6:
                printf("six\n");
                break;
            case 5:
                printf("five\n");
                break;
            case 4:
                printf("four\n");
                break;
            case 3:
                printf("three\n");
                break;
            case 2:
                printf("two\n");
                break;
            case 1:
                printf("one\n");
                break;
            default:
                printf("zero\n");
                break;
        }
    } else if (number == 19) {
        printf("You entered the number nineteen\n");
    } else if (number == 18) {
        printf("You entered the number eighteen\n");
    } else if (number == 17) {
        printf("You entered the number seventeen\n");
    } else if (number == 16) {
        printf("You entered the number sixteen\n");
    } else if (number == 15) {
        printf("You entered the number fifteen\n");
    } else if (number == 14) {
        printf("You entered the number fourteen\n");
    } else if (number == 13) {
        printf("You entered the number thirteen\n");
    } else if (number == 12) {
        printf("You entered the number twelve\n");
    } else if (number == 11) {
        printf("You entered the number eleven\n");
    }
    else{
        printf("You entered the number is wrong,Please enter a correct number.\n");
    }

    return 0;
}