// Ex_3.c) 두 개의 정수를 입력받아서 최대공약수(GCD)를 구해라 (유클리드 호제법 X)
#include <stdio.h>
int GCD_func (int num_1, int num_2){
    int GCD_val;
    
    if(num_1 > num_2){  
        for (int i = 1; i < (num_2+1); i++){
            if((num_1%i == 0)&&(num_2%i == 0)){
                GCD_val = i;
            }
        }
    }
    else{
        for (int i = 1; i < (num_1+1); i++){
            if((num_1%i == 0)&&(num_2%i == 0)){
                GCD_val = i;
            }
        }
    }
    return GCD_val;
}

int main(void){
    int num1, num2;
    printf("두 개의 정수 입력 : ");
    scanf("%d %d",&num1,&num2);
    
    printf("두 수의 최대공약수 : %d",GCD_func(num1,num2));
    
    return 0 ;
}
