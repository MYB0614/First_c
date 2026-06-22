// double로 두 실수 입력받아 사칙연산 하기
#include <stdio.h>

    int main(void){ 
        double num1, num2;
        printf("두 개의 실수를 입력하시오.\n");
        scanf("%lf %lf",&num1, &num2);
        printf("두 수의 덧셈 : %f\n",num1+num2);
        printf("두 수의 뺄셈 : %f\n",num1-num2);
        printf("두 수의 곱셈 : %f\n",num1*num2);
        printf("두 수의 나눗셈 : %f\n",num1/num2);
        return 0;
        
        
    }
