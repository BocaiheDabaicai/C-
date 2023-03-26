//
// Created by NfryCreator on 2023/3/26.
//
//
// Created by NfryCreator on 2023/3/26.
//
#include <stdio.h>
// 6:12 12:24 23:55 0:12
int main(void ){
    int time_hour,time_minute;
    printf("Enter a 24-hour time: ");
    scanf("%d:%d",&time_hour,&time_minute);
    if(time_hour-12<0 && time_hour!=0){
        printf("Equivalent 12-hour time: %2.2d:%2.2d AM\n",time_hour,time_minute);
    }
    else if(time_hour-12==0){
        printf("Equivalent 12-hour time: %2.2d:%2.2d PM\n",time_hour,time_minute);
    }
    else if(time_hour==0){
        printf("Equivalent 12-hour time: %2.2d:%2.2d AM\n",time_hour+12,time_minute);
    }
    else{
        printf("Equivalent 12-hour time: %2.2d:%2.2d PM\n",time_hour-12,time_minute);
    }


    return 1;
}
