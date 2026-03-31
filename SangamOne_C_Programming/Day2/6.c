#include <stdio.h>
#include <stdlib.h>

int main() {
  int num1 = 0;
  scanf("%d", &num1);
  
  if(num1 < 0){
    if(abs(num1)%2 == 0){
      printf("Negative Even");
    }else{
      printf("Negative Odd");
    }
  }else if(num1 > 0){
    if(num1%2 == 0){
      printf("Positive Even");
    }else{
      printf("Positive Odd");
    }
  }else{
    printf("Zero");
  }

}
