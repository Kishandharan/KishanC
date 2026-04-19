#include <stdio.h>
#include <windows.h>

int main() {
  char *string1 = "FunWithProgramming";
  
  while(*string1 != '\0'){
    printf("%c", *string1);
    Sleep(200);
    string1++;
  }
}
