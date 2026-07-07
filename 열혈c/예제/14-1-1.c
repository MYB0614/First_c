#include <stdio.h>

//14-1-1.c 변수 num에 저장된 값의 제곱을 계산하는 함수 정의 후, 이를 호출하는 main함수 작성
//단, call-by-value 기반 SquareByValue 함수, Call-by-reference 기반의 SquareByReference함수
//SquareByValue함수 는 인자로 전달된 값의 제곱 반환
//SquareByReference함수는 정수가 저장되어 있는 변수의 주소 값을 인자로 받아서 
//해당 변수에 저장된 값의 제곱을 그 변수에 다시 저장해야 함.
void SquareByReference(int *num_addr){
    *num_addr = (*num_addr)*(*num_addr);
}

int SquareByValue (int Sq_num){
    return Sq_num*Sq_num;
}

int main(void){
  int num = 10;
  int result = SquareByValue(num);
  
  printf("num(SquareByValue) : %d\n", num);
  
  SquareByReference(&num);
  printf("num(SquareByReference) : %d",num);
 
  
  
  return 0;
}
