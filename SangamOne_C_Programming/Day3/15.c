#include <stdio.h>

int main(){
  float ctemp = 0;
  float ftemp = 0;
  printf("Enter temperature in fahrenheit: ");
  scanf("%f", &ftemp);
  printf("Temperature in celsius: %f", (ftemp - 32) / 1.8);
}
