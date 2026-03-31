#include <stdio.h>

void intVarModifier(int* ptr1, int newValue){
  *ptr1 = newValue;
}

int main() {
  int value = 1;
  printf("%d\n", value);
  intVarModifier(&value, 10);
  printf("%d\n", value);
  return 0;
}
