// Ex_8.c
#include <stdio.h>

int rept_func(int num){
    int val;
    if(num == 0) return 1;
    val = 2 * rept_func(num - 1);
    return val;
}
/*
f(0) = 1            (n=0)
f(n) = 2*f(n-1)     (n>=1)

n = 3 
2*f(2)
f(2) = 2*f(1)
f(1) = 2*f(0)
f(0) =1
*/
int main()
{
    int rept;
    printf("정수 입력 : ");
    scanf("%d",&rept);
    printf("\n");
    printf("2의 %d승은 %d",rept, rept_func(rept));
    
    
    return 0;
}
