#include <stdio.h>

int main() {
  char str1[] = "Hello";
  char* ptr1 = str1;

  ptr1+=1;

  printf("%c\n", *ptr1);
}
