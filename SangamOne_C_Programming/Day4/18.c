#include <stdio.h>

int fact(int num1){
  int result = num1;
  for(int i = result-1; i > 0; i--){
    result *= i;
  }
  return result;
}

int main(){
  int inp_num1 = 0;
  printf("Enter a number: \n");
  scanf("%d", &inp_num1);
  printf("%d\n", fact(inp_num1));
}
