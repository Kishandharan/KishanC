#include <stdio.h>
#include <windows.h>

int main() {
  char string1[100];

  printf("Enter a string: ");
  fgets(string1, sizeof(string1), stdin);

  char *ptr1 = string1;

  while(*ptr1 != '\0'){
    printf("%c", *ptr1);
    Sleep(200);
    ptr1++;
  }

  return 0;
}
