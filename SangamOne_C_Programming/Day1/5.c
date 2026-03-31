#include <stdio.h>

int main() {
  int limit = 0;
  printf("Enter limit: ");
  scanf("%d", &limit);

  for(int i = 1; i < limit+1; i++){
    if(i%2==0){
      printf("%d\n", i*i);
    }
  }
}
