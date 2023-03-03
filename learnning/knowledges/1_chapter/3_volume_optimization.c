//
// Created by NfryCreator on 2023/3/2.
//
#include <stdio.h>

int main(void) {
    float volume, length, width, height;
    int weight;
    printf("Enter length of box: ");
    scanf("%f", &length);
    printf("Enter width of box: ");
    scanf("%f", &width);
    printf("Enter height of box: ");
    scanf("%f", &height);
    volume = length * width * height;
    weight = volume / 166;
    weight++;
    printf("Dimensions: %.1f x %.1f x %.1f\n", length, width, height);
    printf("Volume (cubes inches): %.1f\n", volume);
    printf("the calculate result is : %.2f\n", volume / 166);
    printf("Dimensional weight (pounds): %d\n", weight);

    return 1;
}