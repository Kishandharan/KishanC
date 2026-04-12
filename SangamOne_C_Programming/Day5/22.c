#include <stdio.h>

int main(){
  double principal = 0;
  double rate = 0;
  double time = 0;

  printf("Enter principal amount: ");
  scanf("%lf", &principal);

  printf("Enter annual interest rate in percent: ");
  scanf("%lf", &rate);

  printf("Enter time in years: ");
  scanf("%lf", &time);
  
  printf("%lf RS is the interest", (principal*rate*time)/100);
}
