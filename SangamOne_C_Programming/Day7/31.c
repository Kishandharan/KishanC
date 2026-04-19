#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  if(argc < 5){
    printf("Too few arguments");
    return 1;
  }
  if(argc > 5){
    printf("Warning: too many args provided, ignoring extra args");
  }
  double principal = strtod(argv[1], NULL);
  double annualRate = strtod(argv[2], NULL);
  double compoundingTimesPerYear = strtod(argv[3], NULL);
  double targetYears = strtod(argv[4], NULL);
  double result_totalAmount = strtod(argv[5], NULL);

  result_totalAmount = principal * pow((1 + (annualRate/100) / compoundingTimesPerYear),compoundingTimesPerYear * targetYears);
  printf("%lf", result_totalAmount);
  return 0;
}
