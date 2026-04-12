#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  double radius;
  double circumference;
  const double PI = 3.1415926536;

  if(!(argc > 1)){
    printf("No arguments provided.");
    return 1;
  }
  radius = strtod(argv[1], NULL);
  circumference = 2*PI*radius;

  printf("Circumference in meters: %lf", circumference);
  return 0;
}
