/*
우 -> 하 -> 좌 -> 상 (반복함)
0 -> 1 -> 2 -> 3 -> 0
- state_num 
1. 0으로 시작
2. 꺽어야할 조건 충족 시 state_num++
3. 3 다음은 0

- 꺽어야할 조건
1. 우(j++)
    - j+1 == size  || (i,j+1) != 0
2. 하(i++)
    - i+1 == size || (i+1,j) != 0
3. 좌(j--)
    - j-1 < 0  || (i,j-1) != 0
4. 상(i--)
    - i-1 < 0 
*/
#include <stdio.h>
void insert_value(int n, int(*arr)[n]){
    int state_num = 0;
    int size = n*n;
    
    int i = 0, j = 0;
    
    for (int num = 1; num <= size; num++){
        arr[i][j] = num;
        
        switch (state_num){
            case 0://우
                if((j+1 == n || arr[i][j+1] != 0))  state_num = 1;
                break;
            case 1://하
                if((i+1 == n || arr[i+1][j] != 0))  state_num = 2;
                break;
            case 2://좌
                if((j-1 < 0 || arr[i][j-1] != 0))  state_num = 3;
                break;
            case 3://상
                if((i-1 < 0 || arr[i-1][j] != 0))  state_num = 0;
                break;
        }
        
        switch(state_num){
            case 0: j++; break;
            case 1: i++; break;
            case 2: j--; break;
            case 3: i--; break;
        }
    }
    
    for (int a = 0; a < n; a++){
        for(int b = 0; b < n; b++){
            printf("%3d",arr[a][b]);
        }
        printf("\n");
    }
    
    
    
}

void insert_zero(int size, int (*arr)[size]){
    for (int i = 0; i < size; i++){
        for(int j = 0 ; j < size; j++){
            arr[i][j] = 0;
        }
    }
    insert_value(size,arr);
}



int main()
{
    int n;
    printf("숫자를 입력하시오 : ");
    scanf("%d",&n);
    int arr[n][n];
    insert_zero(n,arr);
    
    

    return 0;
}
