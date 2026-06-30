#include <stdio.h>
int Euclid_GCD(int num1, int num2){
    int num, p, q, r;
    
    if(num1 > num2){
        num = num1;
        p = num2;
        q = num / p;
        r = num % p;
        if(r == 0) return p;
    }
    
    else{
        num = num2;
        p = num1;
        q = num / p;
        r = num % p;
        if(r == 0) return p;
    }
    
    while(1){
        num = p;
        p = r;
        q = num / p;
        r = num % p;
        if(r == 0) return p;
    }
    
    
}


int main()
{
    int n1,n2;
    printf("두 개의 정수 입력: ");
    scanf("%d %d",&n1,&n2);
    
    printf("두 수의 최대공약수: %d",Euclid_GCD(n1,n2));

    return 0;
}
