
#include <stdio.h>

void MaxAndMin (int *arr, int size, int **Mx_dp, int **Min_dp){
    *Mx_dp = &arr[0];      // *Mx_dp == maxptr
    *Min_dp = &arr[0];   // *Min_dp == minptr
    
    for (int i = 1; i < size; i++){
        if(arr[i] > **Mx_dp){
            *Mx_dp = &arr[i];
        }
        if(arr[i] < **Min_dp){
            *Min_dp = &arr[i];
        }
    
    }
}

int main(void){
    int * maxptr;
    int * minptr;
    int arr[5];
    
    for(int i = 0 ; i < 5; i++){
        printf("%d번째 정수 입력 : ",(i+1));
        scanf("%d",&arr[i]);
    }
    
    MaxAndMin(arr,sizeof(arr)/sizeof(int),&maxptr,&minptr);    
    
    printf("*Maxptr, *minptr : %d, %d",*maxptr,*minptr);
    return 0;
}
