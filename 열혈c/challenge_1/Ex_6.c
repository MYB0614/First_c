// Ex_6.c
// sec => h, m , s
// hour = sec/3600
// minute = sec/60
#include <stdio.h>

void trans_time (int sec){
    int hour, minute;
    hour = sec/3600;
    sec = sec%3600;
    minute = sec/60;
    sec = sec % 60;
    printf("[h:%d , m:%d , s:%d]",hour,minute,sec);
    
    
    
}

int main()
{
    int sec;
    printf("초(second) 입력: ");
    scanf("%d",&sec);
    trans_time(sec);
    
    return 0;
}
