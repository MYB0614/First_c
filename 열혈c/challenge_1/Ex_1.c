// Ex.1) 10진수 정수를 입력 받아서 16진수로 출력하는 프로그램 작성

#include <stdio.h>

int main(void){
    int num;
    printf("10진수 정수를 입력 : ");
    scanf("%d",&num);
    printf("\n");
    
    printf("10진수 -> 16진수 변환 : %#X",num);
    
    return 0;
}
