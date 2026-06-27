/*
Ex.1) 양의 정수를 입력받아 그 수만큼 Hello World!를 반복하시오

#include <stdio.h>

int main()
{
    int input_num;
    int i = 0;
    printf("반복 횟수 : ");
    scanf("%d",&input_num);
    
    while(i<input_num){
        printf("Hello world!\n");
        i++;
    }
    return 0;
}

Ex.2) 양의 정수를 입력 받아, 그 수만큼 3의 배수를 출력하시오
#include <stdio.h>

int main()
{
    int num;
    int i = 0;
    printf("양의 정수를 입력하시오.");
    scanf("%d",&num);
    
    while(i<num){
        printf("%d ",3*(i+1));
        i++;
    }
    
    return 0;
}

Ex.3) 양의 정수를 계속 입력 받아, 0이 입력되면 종료 후 합을 출력하시오

#include <stdio.h>

int main()
{
    int result = 0;
    int hap;
    
    while (hap){
        printf("더할 정수를 적으시오(종료 : 0 입력)\n");
        scanf("%d",&hap);
        result += hap;
    }
    printf("모든 정수의 합 : %d",result);
    
    return 0;
}

Ex.4) 역순 구구단 출력

#include <stdio.h>

int main()
{
   int dan;
   int i = 1;
    printf("단을 입력하시오.");
    scanf("%d",&dan);
    
    while(i<10){
        printf("%d x %d = %d\n",dan,(10-i),dan*(10-i));
        i++;
    } 
    
    return 0;
}
Ex.5) 사용자로부터 입력받은 숫자의 평균을 출력

#include <stdio.h>

int main()
{
   int val, j;
   int result = 0, i = 0;
   printf("몇개의 정수를 입력하실건가요?");
   scanf("%d",&val);
   
   while(i < val){
       printf("더할 정수를 입력하시오 : ");
       scanf("%d",&j);
       result += j;
       i++;
   }
   result /= val;
   printf("평균값 : %d",result);
   
   
    return 0;
}

*/
