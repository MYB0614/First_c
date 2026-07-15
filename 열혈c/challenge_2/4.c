
#include <stdio.h>
#define MAX 100
void Palindrome_func (char *arr, int size){
    for(int i = 0; i < size/2; i++){
        if(arr[i] != arr[size-1-i])   return;
    }
    printf("회문입니다.");
}

int main()
{
    char str[MAX];
    int size = 0;   //단어 갯수 
    
    printf("문자열 입력: ");
    scanf("%s",str);
    
    while(str[size] != '\0'){
        size++;
    }
    
    Palindrome_func(str, size);
    
    return 0;
}
