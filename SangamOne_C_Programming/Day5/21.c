#include <stdio.h>
#include <stdlib.h>

int* numberList(int length){
  int* marr1 = malloc(length * sizeof(int));
  if(marr1 == NULL){
    return NULL;
  }
  for(int i = 0; i < length; i++){
    marr1[i] = i+1;
  }
  return marr1;
}
int main() {
  int* numlist1 = numberList(100);
  if(numlist1 == NULL){
    return 0;
  }
  for(int i = 0; i < 100; i++){
    printf("%d\n", numlist1[i]);
  }
  free(numlist1);
  return 0;
}
