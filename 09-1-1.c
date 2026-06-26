//Ex.1) 세 정수 입력받아 최대값, 최솟값 출력.
#include <stdio.h>
int max_val (int i, int j, int k){
    int result;
    if(i>j){
        result = i>k ? i : k;
    }
    else
        result = j>k ? j :k;
    
    return result;
}
int min_val (int i, int j, int k){
    int result;
    if(i>j){
        result = j<k ? j : k;
    }
    else
        result = i<k ? i :k;
    
    return result;
}



int main(void){
    int n1,n2,n3;
    printf("정수 3개를 입력하시오.");
    scanf("%d %d %d",&n1,&n2,&n3);
    printf("min : %d\n",min_val(n1,n2,n3));
    printf("max : %d\n",max_val(n1,n2,n3));
    
    return 0;
}
