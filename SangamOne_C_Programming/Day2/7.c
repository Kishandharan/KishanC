#include <stdio.h>

int main() {
  int num1;
  int num2;

  printf("Enter target divider: ");
  scanf("%d", &num1);
  printf("Enter target reminder: ");
  scanf("%d", &num2);

  for(int i = 1; i < 101; i++){
    if(! (i % num1 == num2) ) continue;
    printf("%d\n", i);
  }
}
