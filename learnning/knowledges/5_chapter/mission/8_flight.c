//
// Created by NfryCreator on 2023/3/27.
//
#include <stdio.h>

int main(void) {
    int hour, minute, cost_time;
    printf("Please a 24-hour time: ");
    scanf("%d:%d", &hour, &minute);
    cost_time = hour * 60 + minute;
    if (hour >= 0 && minute >= 0) {
        if (cost_time < (8 * 60)) {
            printf("Closest departure time is 8:00 a.m.,arriving at 10:16 a.m.\n");
        } else if (cost_time < (9 * 60 + 43)) {
            printf("Closest departure time is 9:43 a.m.,arriving at 11:52 a.m.\n");
        } else if (cost_time < (11 * 60 + 19)) {
            printf("Closest departure time is 11:19 a.m.,arriving at 1:31 p.m.\n");
        } else if (cost_time < (12 * 60 + 47)) {
            printf("Closest departure time is 12:47 p.m.,arriving at 3:00 p.m.\n");
        } else if (cost_time < (14 * 60)) {
            printf("Closest departure time is 14:00 p.m.,arriving at 4:08 p.m.\n");
        } else if (cost_time < (15 * 60 + 45)) {
            printf("Closest departure time is 3:45 p.m.,arriving at 5:55 p.m.\n");
        } else if (cost_time < (19 * 60)) {
            printf("Closest departure time is 7:00 p.m.,arriving at 9:20 p.m.\n");
        } else if (cost_time < (21 * 60 + 45)) {
            printf("Closest departure time is 9:45 p.m.,arriving at 11:58 p.m.\n");
        }
    }

    return 0;
}