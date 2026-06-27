// 전역변수(total)를 static변수로 바꾸기
#include <stdio.h>


int AddToTotal(int num){
    static int total = 0;
    total += num;
    return total;
}

int main()
{
    int num, i;
    for (i = 0; i < 3; i++){
        printf("입력%d: ", i+1);
        scanf("%d", &num);
        printf("누적: %d\n",AddToTotal(num));
    }
    return 0;
}
