#include <stdio.h>
#define SIZE 5

int main()
{
    int arr[SIZE] = {1,2,3,4,5};
    int *ptr = arr;     //same mean to "*ptr = &arr[0]"
    
    
    for (int i = 0; i < SIZE ; i++){
        *(ptr + i) += 2;
    }
    
    for (int i = 0; i < SIZE ; i++){
        printf("배열 %d번째 값 : %d\n",(i+1),*(ptr + i));
    }
    
    return 0;
}
