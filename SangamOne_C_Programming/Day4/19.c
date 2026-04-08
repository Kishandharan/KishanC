#include <stdio.h>

int main(){
  char prisons[100];
  int count = 100;

  // Initial State of prisons
  for(int i = 0; i<count; i+=1){
    prisons[i] = 'C';
  }

  // Round 1
  for(int i = 0; i<count; i+=1){
    prisons[i] = 'O';
  }

  // Round 2 
  for(int i = 1; i<count; i+=2){
    prisons[i] = 'C';
  }

  // Round 3-N
  for(int j = 2; j<count; j++){
    for(int i = j; i<count; i+=(j+1)){
      if(prisons[i] == 'C'){
        prisons[i] = 'O';
        continue;
      }
      prisons[i] = 'C';
    }
  }

  // Find lucky prisoners 
  for(int i = 0; i < count; i++){
    if(prisons[i] == 'C'){
      continue;
    }
    printf("Lucky Prisoner: %d\n", i+1);
  }
  return 0;
}

