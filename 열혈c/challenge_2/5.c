
#include <stdio.h>
#define SIZE 5
void BubbleSort_func(int *ptr){
    for (int i = 0 ; i <SIZE-1; i++){
        for(int j = 0 ; j < SIZE -1 - i; j++){
            int temp = *(ptr + j);
            if(temp > *(ptr+j+1)){
                *(ptr+j) = *(ptr+j+1);  // n번째 <-> n+1번째 swqp (An > An+1)
                *(ptr+j+1) = temp;
            }
        }
    }
    for(int i = 0; i < SIZE; i++){
        printf("배열 %d번째 값 : %d\n",i+1,*(ptr+i));
    }
}

int main(void){
    int arr[SIZE] = {0};            // 배열 초기화
    
    for(int i = 0; i < SIZE; i++){     // 배열 0~4번째 값 입력
        printf("배열 %d번째 정수 입력 : ",i+1);
        scanf("%d",&arr[i]);
    }
    
    BubbleSort_func(arr);
    
    
    return 0;
}
