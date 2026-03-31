#include <stdio.h>

int main() {
  float num1 = 0;
  float num2 = 0;
  
  printf("Enter numerator: ");
  scanf("%f", &num1);

  printf("Enter denominator: ");
  scanf("%f", &num2);

  if(num2 == 0){
    printf("Denominator 0 not allowed");
    return 0;
  }

  printf("%f/%f = %f", num1, num2, num1/num2);
}
