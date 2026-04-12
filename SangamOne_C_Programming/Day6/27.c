#include <stdio.h>

int main(){
  const double PI = 3.1415926536;
  double radius = 0;
  double circumference = 0;
  printf("Enter radius in meters: ");
  scanf("%lf", &radius);
  circumference = 2*PI*radius;
  printf("The circumference is: %lf", circumference);

  return 0;
}
