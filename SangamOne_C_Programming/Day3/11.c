#include <stdio.h>

int main() {
  int num1 = 0;
  int num2 = 0;

  printf("Enter starting of table range: ");
  scanf("%d", &num1);
  printf("Enter ending of table range: ");
  scanf("%d", &num2);

  for(int j = num1; j<num2+1; j++){
    for(int i = 1; i<11; i++){
      printf("%d*%d = %d\n", j, i, j*i);
    }
    printf("\n");
  }
}
