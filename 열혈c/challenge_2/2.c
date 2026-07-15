#include <stdio.h>
#define SIZE 32

int main(void){
    int num, val, rem;  //num = 나눌값val = 몫, rem = 나머지
    int arr[SIZE] = {0};
    int *ptr = &arr[SIZE-1];
    
    printf("10진수 정수 입력: ");
    scanf("%d",&num);
    
    while (val!=0 && val!=1){
        val = num / 2; // 3 / 2 = 1
        rem = num % 2; // 3 % 2 = 0
        num = val;    // num = 1
        *(ptr) = rem;
        ptr--;
    }
    
    if(val == 1){
        *ptr = num;    
    }
    
    ptr = arr;
    
    for(int i = 0; i < SIZE; i++){
        printf("%d ",arr[i]);
    }
}
