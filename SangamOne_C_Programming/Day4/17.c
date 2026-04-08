#include <stdio.h>

int main(){
  int year = 0;

  printf("Enter year: ");
  scanf("%d", &year);

  if(!(year%4 == 0)){
    printf("Not a leap year");
    return 0;
  }

  if(!(year%100==0)){
    printf("It is a leap year");
    return 0;
  }

  if(!(year%400==0)){
    printf("Not a leap year");
    return 0;
  }

  printf("it is a leap year");
  return 0;
}
