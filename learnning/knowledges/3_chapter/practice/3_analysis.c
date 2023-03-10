//
// Created by NfryCreator on 2023/3/9.
//
#include <stdio.h>

int main(void) {
    int GS1_prefix, Group_identifier, Publisher_code, Item_number, Check_digit;
    printf("Enter ISBN (xxx-x-xxx-xxxxx-x): ");
    scanf("%d-%d-%d-%d-%d", &GS1_prefix, &Group_identifier, &Publisher_code, &Item_number, &Check_digit);
    printf("GS1_prefix: %d\n", GS1_prefix);
    printf("Group_identifier: %d\n", Group_identifier);
    printf("Publisher_code: %d\n", Publisher_code);
    printf("Item_number: %d\n", Item_number);
    printf("Check_digit: %d\n", Check_digit);
    return 1;
}
