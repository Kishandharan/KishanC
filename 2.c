#include <stdio.h>

int main(){
  int num1 = 0;
  int num2 = 0;
  int num3 = 0;
  int num4 = 0;

  printf("\n");
  printf("Enter table start: ");
  scanf("%d", &num1);

  printf("Enter table end: ");
  scanf("%d", &num2);

  printf("Enter multipler start: ");
  scanf("%d", &num3);

  printf("Enter multipler end: ");
  scanf("%d", &num4);

  printf("\n");

  for(int i = num1; i<num2+1; i++){
    for(int j = num3; j<num4+1; j++){
      printf("%d * %d = %d\n", i, j, i*j);
    }
    printf("\n");
  }
  printf("\n");
}
