#include <stdio.h>

int main() {
  int limit = 0;

  printf("Enter limit: ");
  scanf("%d", &limit);

  for(int i = 1; i < limit+1; i++){
    printf("%d\n", i);
  }
}
