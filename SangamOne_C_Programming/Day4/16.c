#include <stdio.h>

int main() {
  float num1 = 0;
  float num2 = 0;

  printf("Enter dividend and divisor, separated by a whitespace: ");
  scanf("%f %f", &num1, &num2);

  if(num2 == 0){
    printf("Divisor can't be 0\n");
    return 0;
  }

  printf("%f\n", num1/num2);
}
