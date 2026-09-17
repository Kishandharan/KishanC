#include <stdio.h>

int factorial(int x){
  int n = x;
  while(!(n==1)){
    n--;
    x = x * n;
  }
  return x;
}

int main(){
  int x = factorial(5);
  printf("The factorial is: %d", x);
  return 0;
}
