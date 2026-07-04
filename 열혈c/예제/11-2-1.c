
#include <stdio.h>

int main()
{
    char arr1[100]; 
    int i =0;
    
    printf("영단어 입력 : ");
    scanf("%s",arr1);
    
    while(arr1[i] != '\0'){     // "" => 문자열 , '' => 하나의 문자 
        i++;
    }
    printf("영단어 길이 : %d",i);
    
    return 0;
}
