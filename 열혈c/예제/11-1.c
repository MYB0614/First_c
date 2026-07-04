
#include <stdio.h>
#define SIZE 5

int main()
{
    int arr1[SIZE];
    int max, min, sum = 0;
    
    for (int i = 0; i < 5; i++){
        printf("%d번째 정수 입력 : ",i);
        scanf("%d",&arr1[i]);
        sum += arr1[i];
    }
    max = arr1[0];
    min = arr1[0];

    for (int i = 1; i<5; i++){  // i가 1부터 시작하는 이유 : max, min 모두 arr1[0]임
        if(arr1[i]>max){
            max = arr1[i];
        }
        if(arr1[i]<min){
            min = arr1[i];
        }
    }
    printf("최대값 : %d\n",max);
    printf("최솟값 : %d\n",min);
    printf("total : %d",sum);
    
    return 0;
}
