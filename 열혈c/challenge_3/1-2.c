
#include <stdio.h>
#define SIZE 4

void swap(int (*arr1)[SIZE]){
    int temp;
    for(int step = 0 ; step < 3; step++){
        for(int i = 0 ; i < SIZE-1; i++){   // 대칭이동
            for(int j= i + 1; j < 4; j++){
                temp = arr1[i][j];
                arr1[i][j] = arr1[j][i];
                arr1[j][i] = temp;
            }
        }
    
        for(int i = 0 ; i < SIZE; i++){   // 좌우 뒤집기
            for(int j = 0; j < SIZE/2; j++){
                temp = arr1[i][j];
                arr1[i][j] = arr1[i][SIZE-1-j];
                arr1[i][SIZE-1-j] = temp;
            }
        }
        printf("[%d도 회전 결과]\n",(step+1)*90);
        for(int i = 0 ; i < SIZE; i++){
            for(int j = 0 ; j < SIZE; j++){
                printf("%4d",arr1[i][j]);
          }
            printf("\n");
        }
        printf("\n");
    }
}
int main (void){
    int arr[SIZE][SIZE] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    swap(arr);
    
}
