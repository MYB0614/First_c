
/*
Ex.1) 정수 5개를 입력받아 합을 출력. 조건 : 1미만의 수를 입력받을 경우 무한으로 다시 받아 1이상의 5개의 정수를 받아내야 함

#include <stdio.h>

int main(void){
    int result = 0, val;
    int i = 0;
    while(i<5){
        printf("정수를 입력하시오 : ");
        scanf("%d",&val);
        while(val<1){
            printf("1 이상 정수를 입력하시오 : ");
            scanf("%d",&val);
        }
        result += val;
        i++;
    }
    printf("수의 합 : %d",result);
    
}
Ex.2) p157참조

#include <stdio.h>

int main(void){
    int i = 0, j =0;
    
    while(i<5){
        j = 0;
        while(j<i){
            printf("o");    
            j++;
        }         
        printf("*");
        printf("\n");
        i++;
    }
    
    return 0;
}
*/
