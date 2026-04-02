#include <stdio.h>

int main(){
  float ctemp = 0;
  float ftemp = 0;
  printf("Enter temperature in celcius: ");
  scanf("%f", &ctemp);
  printf("Temperature in fahrenheit: %f", ctemp*1.8+32);
}
