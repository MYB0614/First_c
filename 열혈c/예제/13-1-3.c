#include <stdio.h>
#define SIZE 5

int main()
{
    int arr[SIZE] = {1,2,3,4,5};
    int *ptr = &arr[4];
    int sum = 0;
    
    
    for (int i = 0; i < SIZE ; i++){
        sum += *(ptr--);
    }
    
    printf("모든 배열값의 합 : %d",sum);
    
    return 0;
}
