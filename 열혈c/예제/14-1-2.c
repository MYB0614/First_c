#include <stdio.h>

//14-1-2.c 
//세 변수에 저장된 값을 뒤바꾸는 함수 정의
// Swap3(&num1,&num2,&num3)
// num1 -> num2, num2 -> num3, num3 -> num1 


void Swap3(int *n1,int *n2, int *n3){
    int temp = *n1;
    
    *n1 = *n3;
    *n3 = *n2;
    *n2 = temp;

}


int main(void){
    int num1 = 1, num2 = 2, num3 = 3;
    
    Swap3(&num1,&num2,&num3);
    
    printf("%d %d %d",num1,num2,num3);
    return 0;
}
