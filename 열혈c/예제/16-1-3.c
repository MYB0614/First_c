
#include <stdio.h>

int arr[5][5] = {0};

void score_func(void){
    for (int i = 0 ; i < 4; i++){
        int sum = 0;
        printf("%d번째 학생 성적 입력\n",i+1);
        for(int j = 0; j < 4; j++){
            printf("과목 %d : ",j+1);
            scanf("%d",&arr[i][j]);
            sum += arr[i][j];
        }
        arr[i][4] = sum;
    }
    return;
}

void sum_func(void){
    int sum = 0;
    for (int i =0; i < 4; i++){
        sum = 0;
        for(int j = 0; j < 4; j++){
            sum += arr[j][i];
        }
        arr[4][i] = sum;
    }
    
    sum = 0;
    
    for (int i =0; i < 4; i++){
        sum += (arr[i][4]+arr[4][i]);
    }
    arr[4][4] = sum;
    
}

void All_prt(void){
    for(int i = 0 ; i < 5; i++){
        for(int j = 0; j < 5; j++){
            printf("arr[%d][%d] = %d\n",i,j,arr[i][j]);
        }
    }
}


int main(void){
    score_func(); // 학생별 과목별 점수입력, 학생별 점수 총점
    sum_func(); // 과목별 총점, 총점
    All_prt(); // 모두출력
    
    
    return 0;
}
