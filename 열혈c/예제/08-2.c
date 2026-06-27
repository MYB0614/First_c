/* 
Ex.1) 구구단 (조건 : 짝수단 + 해당 단까지만 곱함)
#include <stdio.h>

int main(void){
    
    for (int i = 2 ; i < 9 ; i++){
        if (i % 2 != 0){
            continue;
        }
        for(int j = 1 ; j < 9 ; j++){
            if(i<j){
                break;
            }
            printf("%d x %d = %d\n",i,j,i*j);
        }
    }
}

Ex.2) AZ + ZA = 99 에서 A,Z의 모든 경우의수 출력


Ex.2) AZ + ZA = 99 에서 A,Z의 모든 경우의수 출력

#include <stdio.h>

int main(void){
    int result;
    // (10a+z) + (10z+a) = 99
    // 11a + 11z = 99
    // a + z = 9
    // 09 18 27 36 45 54 63 72 81 90
    // 10가지 
    
    for (int a = 0; a<10 ;a++){
        for(int z = 0; z<10;z++){
            result = (10*a+z) + (10*z+a);
            if (result == 99){
                printf("%d%d + %d%d = 99\n",a,z,z,a);
            }
        }
    }
    return 0;
}
*/
