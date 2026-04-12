#include <stdio.h>
#include <math.h>

int main() {
  double principal = 0;
  double annualRate = 0;
  double compoundingTimesPerYear = 0;
  double targetYears = 0;
  double result_totalAmount = 0;

  printf("Enter principal amount: ");
  scanf("%lf", &principal);

  printf("Enter annual rate: ");
  scanf("%lf", &annualRate);

  printf("Enter times compounded per year: ");
  scanf("%lf", &compoundingTimesPerYear);

  printf("Enter target years: ");
  scanf("%lf", &targetYears);

  result_totalAmount = principal * pow((1 + (annualRate/100) / compoundingTimesPerYear),compoundingTimesPerYear * targetYears);
  printf("%lf", result_totalAmount);
  return 0;
}
