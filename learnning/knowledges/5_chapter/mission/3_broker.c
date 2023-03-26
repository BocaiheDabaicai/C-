//
// Created by NfryCreator on 2023/3/26.
//
#include <stdio.h>

int main(void) {
    float commission, value, mount, price, stock;

//    printf("Enter value of trade: ");
//    scanf("%f", &value);
    printf("Enter value of mount and price: ");
    scanf("%f %f", &mount, &price);
    printf("Enter mount of your competitor: ");
    scanf("%f", &stock);
    value = mount * price;

    if (value < 2500.00f)
        commission = 30.00f + .017f * value;
    else if (value < 6250.00f)
        commission = 56.00f + .0066f * value;
    else if (value < 20000.00f)
        commission = 76.00f + .0034f * value;
    else if (value < 50000.00f)
        commission = 100.00f + .0022f * value;
    else if (value < 500000.00f)
        commission = 155.00f + .0011f * value;
    else
        commission = 255.00f + .0009f * value;

    if (commission < 39.00f)
        commission = 39.00f;

    printf("Commission: $%.2f\n", commission);

//    不清楚股是什么意思
    if (stock < 2000) {
        printf("Competitor Commission: $%.2f\n", 33 + 0.03f * stock);
    } else {
        printf("Competitor Commission: $%.2f\n", 33 + 0.02f * stock);
    }

    return 0;
}
