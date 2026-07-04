
#include <stdio.h>

int main()
{
    int arr_size;
    
    char arr1[] = {"Good time"};
    arr_size = sizeof(arr1);
    
    printf("arr_size : %d\n", arr_size);
    for(int i = 0; i < arr_size; i++){
        printf("arr1[%d] : %c\n",i,arr1[i]);
    }
    return 0;
}
