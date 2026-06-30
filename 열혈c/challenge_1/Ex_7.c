// Ex_7.c
// 2*2*,,,,,k번 <= n
// n입력후 k 최댓값 출력
// 그럼 while로 계속 돌리고 그 값이 n보다 크다면 그 전값 출력
#include <stdio.h>

int multi_k (int max){          // 2^n <= max
    int k = 0;
    if (max == 1) return 0;  
    
    for(int i = 2; i <= max; i *= 2){
        k += 1;
    }
    return k;
}

int main()
{
    int max;
    printf("상수 n 입력\n: ");
    scanf("%d",&max);
    
    
    printf("공식을 만족하는 k의 최댓값은 %d", multi_k(max));
    
    return 0;
}
