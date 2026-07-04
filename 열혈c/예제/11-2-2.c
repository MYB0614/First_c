
#include <stdio.h>
#define MAX 100

int main()
{
    char arr[MAX];
    int size_arr = 0;
    
    printf("뒤집을 영단어 입력 : ");
    scanf("%s",arr);                            
    
    while(arr[size_arr] != '\0'){
        size_arr++;
    }
    
    for (int i = 0; i < (size_arr/2); i++){
        char emp = arr[i];
        arr[i] = arr[size_arr-1-i];
        arr[size_arr-1-i] = emp;
    }
    
    printf("%s",arr);
    
    return 0;
}
