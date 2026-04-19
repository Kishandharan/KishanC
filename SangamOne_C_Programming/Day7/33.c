#include <stdio.h>
#include <windows.h>

int main(int argc, char *argv[]) {
  char *string1 = argv[1];
  
  while(*string1 != '\0'){
    printf("%c", *string1);
    Sleep(200);
    string1++;
  }
}
