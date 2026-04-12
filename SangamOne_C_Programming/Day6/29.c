#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
  if(argc < 3){
    printf("Too few arguments");
    return 1;
  }
  
  double add1 = 0;
  double sub1 = 0;
  double mul1 = 0;
  double div1 = 0;
  double exp1 = 0;

  double num1 = strtod(argv[1], NULL);
  double num2 = strtod(argv[2], NULL);
  
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
