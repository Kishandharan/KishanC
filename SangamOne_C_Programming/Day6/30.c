#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
  
  double add1 = 0;
  double sub1 = 0;
  double mul1 = 0;
  double div1 = 0;
  double exp1 = 0;

  double num1 = 0;
  double num2 = 0;

  printf("Enter first number: ");
  scanf("%lf", &num1);
  printf("Enter second number: ");
  scanf("%lf", &num2);
  
  add1 = num1+num2;
  sub1 = num1-num2;
  mul1 = num1*num2;
  div1 = num1/num2;
  exp1 = pow(num1,num2);

  printf("Addition: %lf\n", add1);
  printf("Subtraction: %lf\n", sub1);
  printf("Multiplication: %lf\n", mul1);
  printf("Division: %lf\n", div1);
  printf("Exponentiation: %lf\n", exp1);
  
  return 0;
}
