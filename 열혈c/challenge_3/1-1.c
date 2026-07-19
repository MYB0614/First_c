
#include <stdio.h>
#define SIZE 4

void swap(int (*arr1)[SIZE]){
    int arr2[SIZE][SIZE];
    int temp;
    
    for(int i = 0 ; i < SIZE; i++){
        for(int j = 0; j < SIZE; j++){
            arr2[i][j] = arr1[SIZE-1-j][i];     //a = b
        }
    }
    
    for(int i = 0 ; i < SIZE; i++){
        for(int j = 0 ; j < SIZE; j++){
            arr1[i][j] = arr2[i][j];
        }
    }
}

int main (void){
    int arr[SIZE][SIZE] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    swap(arr);
    for(int i = 0 ; i < SIZE; i++){
        for(int j = 0 ; j < SIZE; j++){
            printf("arr[%d][%d] = %d \n",i,j,arr[i][j]);
        }
    }
}
