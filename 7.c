#include <stdio.h>

int main(){
  int x = 65;
  void* vX = &x;
  int y = *((int*)vX);
  char z = *((char*)vX);

  printf("%d", y);
  printf("%c", z);
  return 0;
}
