//
// Created by NfryCreator on 2023/3/2.
//
#include <stdio.h>

int main(void) {
    float volume, length, width, height;
    int weight;
    length = 12.0f;
    width = 10.0f;
    height = 8.0f;
    volume = length * width * height;
    weight = volume / 166;
    weight++;
    printf("Dimensions: %.1fx%.1fx%.1f\n", length, width, height);
    printf("Volume (cubes inches): %.1f\n", volume);
    printf("the calculate result is : %.2f\n", volume / 166);
    printf("Dimensional weight (pounds): %d\n", weight);

    return 1;
}