
#include <stdio.h>
#define MAX 100

int main()
{
    char arr[MAX];
    int size_arr = 0, max;
    
    printf("영단어 입력 : ");
    scanf("%s",arr);                        //doge        
    
    while(arr[size_arr] != '\0'){           //size_arr = 4
        size_arr++;             
    }
    
    max = arr[0];
    
    for (int i = 1; i < size_arr; i++){     // 1~3
        if(arr[i] > max){
            max = arr[i];
        }
    }
    printf("%c",max);
    
    return 0;
}
