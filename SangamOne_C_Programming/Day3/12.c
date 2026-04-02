#include <stdio.h>

int main() {
  int num1 = 0;
  int num2 = 0;
  int num3 = 0;
  int num4 = 0;

  printf("Enter starting of table range: ");
  scanf("%d", &num1);
  printf("Enter ending of table range: ");
  scanf("%d", &num2);
  printf("Enter starting of multipler per table range: ");
  scanf("%d", &num3);
  printf("Enter ending of multipler per table range: ");
  scanf("%d", &num4);

  for(int j = num1; j<num2+1; j++){
    for(int i = num3; i<num4+1; i++){
      printf("%d*%d = %d\n", j, i, j*i);
    }
    printf("\n");
  }
}
