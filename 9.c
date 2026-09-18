#include <stdio.h>
 
int main(){
  FILE *file = fopen("in.txt", "r");
  int number = 0;

  if (file == NULL){
    printf("Cm'on!! Thats'n error!");
    return 1;
  }

  while(fscanf(file, "%d", &number) == 1){
    printf("%d\n", number*2);
  }

  fclose(file);

  return 0;
}
