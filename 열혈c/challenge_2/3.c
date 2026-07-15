
#include <stdio.h>
#define SIZE 10

int main()
{
    int arr[SIZE] = {0};    // 배열 초기화
    int val;                // 짝수 홀수 구분 전, 값 받기
    int even = 0, odd = 0;  // 짝, 홀 갯수 세기
    
    for (int i = 0; i < SIZE; i++){
        printf("입력: ");
        scanf("%d",&val);
        
        if(val%2 == 0){ //짝수
            *(arr + SIZE - 1 - even) = val;
            even++;
        }
        else{
            *(arr+odd) = val;
            odd++;
        }
        
    }
    
    printf("배열의 요소 출력 : ");
    for(int i = 0; i < SIZE; i++){
        printf("%d ",*(arr+i));
    }
    
    return 0;
}
