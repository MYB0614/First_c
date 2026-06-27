/* 

Ex.1) 7과 9의 배수인 정수 찾기 (단, 7과 9 동시에 배수인 경우 1번만 출력)
#include <stdio.h>

int main(void){
   // 1이상 100미만의 정수 중에서 7의 배수와 9의 배수를 출력하는 프로그램 작성
   // 단, 7의 배수와 동시에 9의 배수인 경우 1번만 출력하는 프로그램 작성
   
   for(int i = 1; i < 100; i++){
        if ((i % 7 == 0)&&(i%9 == 0)){
           printf("7,9의 배수 : %d\n",i);
       } 
       else if (i % 7 == 0){
           printf("7의 배수 : %d\n",i);
       }
       
       else if(i % 9 == 0){
            printf("9의 배수 : %d\n",i);
       }
   }
   return 0;
}
---------------------------------------------------------------------------------
Ex.2) 두 정수의 차(절댓값)
#include <stdio.h>

int main(void){
    int a,b, result;
    
    printf("두 수를 입력 : ");
    scanf("%d %d",&a,&b);
    
    result = (a > b) ? a-b : b-a;
    printf("두 수의 차 : %d",result);
    
    return 0;
}

#include <stdio.h>

int main(void){
    int a,b, result;
    
    printf("두 수를 입력 : ");
    scanf("%d %d",&a,&b);
    
    if (a > b ){
        result = a - b;
    }
    else{
        result = b - a;
    }
    
    printf("두 수의 차 : %d",result);
    
    return 0;
}
---------------------------------------------------------------------------------
Ex.3) 학점 출력

#include <stdio.h>

int main(void){
    int Type_1, Type_2, Type_3, avg_val;
    
    printf("국어, 영어, 수학의 점수를 순서대로 입력하시오.");
    scanf("%d %d %d",&Type_1,&Type_2,&Type_3);
    
    avg_val = (double)(Type_1+Type_2+Type_3)/3;
    
    if (avg_val >= 90){
        printf("Grade : A");
    }
    else if (avg_val >= 80){
        printf("Grade :  B");
    }
    else if (avg_val >= 70){
        printf("Grade :  C");
    }
    else if (avg_val >= 50){
        printf("Grade :  D");
    }
    else {
        printf("Grade :  F");
    }
}
---------------------------------------------------------------------------------
*/
