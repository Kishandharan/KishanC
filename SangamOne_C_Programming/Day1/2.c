#include <stdio.h>

int main() {
  int seconds = 0;
  int minutes = 0;
  int hours = 0;

  scanf("%d", &seconds);

  minutes = seconds/60;
  hours = seconds/(60*60);

  printf("Minutes: %d, Seconds: %d", minutes, hours);
  
  return 0;
}
