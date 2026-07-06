#include <stdio.h>
#define SIZE 6
// 13-1-4.c 배열 뒤집기 => 단 *fir_ptr, *end_ptr를 활용하여 변경해야함

int main()
{
    int arr[SIZE] = {1,2,3,4,5,6};
    
    
    for (int i = 0; i < (SIZE /2); i++){
        int *fir_ptr = &arr[i];
        int *end_ptr = &arr[5-i];
        
        int temp = *fir_ptr;        //1
        *fir_ptr = *end_ptr;
        *end_ptr = temp;
        
    }
   
    
    
    for(int i = 0 ;i < SIZE ; i++){
        printf("배열 %d번째 값 : %d\n",(i+1),*(arr+i));
    }
    return 0;
}
