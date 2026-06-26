/*
Ex.1)   사용자로부터 두 개의 정수를 입력받아 두 정수를 포함하여 
        그 사이 존재하는 모든 정수들의 합을 출력 (for, while, do while 활용)

    #include <stdio.h>

    int main()
    {
        int fir_num, sec_num, result = 0;
        printf("첫번째 정수 입력 : \n");
        scanf("%d",&fir_num);
    
        printf("두번째 정수 입력 : \n");
        scanf("%d",&sec_num);
    
        for (fir_num;fir_num < (sec_num + 1);fir_num++){
            result += fir_num;
        }
        printf("총합 : %d",result);
    
        return 0;
    }


    #include <stdio.h>

    int main()
    {
        int fir_num, sec_num, f_first_num, result = 0;
        printf("첫번째 정수 입력 : \n");
        scanf("%d",&fir_num);
    
        f_first_num = fir_num;
    
        printf("두번째 정수 입력 : \n");
        scanf("%d",&sec_num);
    
        while (fir_num < sec_num + 1){
            result += fir_num;
            fir_num++;
        }
        printf("%d ~ %d 까지의 합 : %d",f_first_num,sec_num,result);
    
        return 0;
    }

    
#include <stdio.h>

    int main()
    {
        int fir_num, sec_num, f_first_num, result = 0;
        printf("첫번째 정수 입력 : \n");
        scanf("%d",&fir_num);
    
        f_first_num = fir_num;
    
        printf("두번째 정수 입력 : \n");
        scanf("%d",&sec_num);
    
        do{
           result += fir_num;
           fir_num++;
        }while(fir_num < sec_num+1);
   
        printf("%d ~ %d 까지의 합 : %d",f_first_num,sec_num,result);
    
        return 0;
    }

Ex.2) factorial구하기(for, while, do while 활용)

    #include <stdio.h>

    int main(void){
        int n, result=1;
    
        printf("factorial n 입력 : ");
        scanf("%d",&n);
    
        for (int i = 1;i<(n+1);i++){
            result *= i;
        }
        printf("%d! = %d",n,result);
    }
    
    #include <stdio.h>

    int main(void){
        int i = 1, n, result=1;
    
        printf("factorial n 입력 : ");
        scanf("%d",&n);
    
        while(i < n+1){
            result *= i;
            i++;
        }    
    
        printf("%d! = %d",n,result);
    }
    
    
    #include <stdio.h>

    int main(void){
        int i = 1, n, result=1;
    
        printf("factorial n 입력 : ");
        scanf("%d",&n);
    
        do{
            result *= i;
            i++;
        }while(i < n+1);
    
        printf("%d! = %d",n,result);
    }


*/
