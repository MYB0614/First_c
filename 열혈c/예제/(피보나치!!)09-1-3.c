// Ex.3) 피보나치 수열
#include <stdio.h>

void fibonacci_arr (int size){
    // 1 2 | 3 4 5 6 7 8 
    // 0 1 | 1 2 3 5 8 13 
    
    if(size <= 0)return;
    
    int b2_num = 0 , b1_num = 1, val; //b2는 back 2자리 ex) 0,1,1,2,3에서 3기준 1을 뜻함.

    if(size >= 1){
        printf("%d ",0);
    }
    
    if(size >= 2){
        printf("%d ",1);
    }
        
    for(int i = 2; i <size ; i++){
        val = b1_num + b2_num;
        printf("%d ",val);
        b2_num = b1_num;    //num기준 -2자리가 -1자리로
        b1_num = val;       //두 숫자의 합이 -1자리로
    }
    
} 

int main(void){
    int size;
    printf("몇 개의 피보나치 수열을 출력할까요?");
    scanf("%d",&size);
    
    fibonacci_arr(size);
    
    return 0;
}
