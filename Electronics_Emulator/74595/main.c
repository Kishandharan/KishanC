#include <stdio.h>

typedef struct ic74hc595{
  int out[8];
  int outprime;

  bool buf[8];
  bool ser;
  bool noe;
  bool oclk;
  bool bclk;
  bool bclr;
} Expander;

Expander expanderInit(){
  Expander exp1;

  for(int i = 0; i < 9; i++){ exp1.out[i] = 0; exp1.buf[i] = 0; }
  exp1.outprime = 1;
  exp1.ser = 0;
  exp1.noe = 0;
  exp1.oclk = 0;
  exp1.bclk = 0;
  exp1.bclr = 0;
  
  return exp1;
}

void setSER(Expander *exp, bool bit){
  exp->ser = bit;
}

void setBCLK(Expander *exp, bool bit){
  if(exp->bclk == 0 && bit == 1){
    exp->buf[0] = exp->ser; // Hardcoding the bit for now. 
  }
}

int main(){
  Expander exp1 = expanderInit();

  setSER(&exp1, 0); 
  setBCLK(&exp1, 1); 
  setBCLK(&exp1, 0);
  printf("Test1 state: %d\n", exp1.buf[0]);
  // We should expect no change in exp1.buf[0] (The IC gets triggered, but buf[0] is already 0, so no change)

  setSER(&exp1, 1);
  setBCLK(&exp1, 1);
  setBCLK(&exp1, 0);
  printf("Test2 state: %d", exp1.buf[0]);
  // We should expect a change in exp1.buf[0]
  

  return 0;
}
