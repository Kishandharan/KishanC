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
  if(exp->bclr == 1){
    if(exp->bclk == 0 && bit == 1){
      exp->buf[7] = exp->buf[6];
      exp->buf[6] = exp->buf[5];
      exp->buf[5] = exp->buf[4];
      exp->buf[4] = exp->buf[3];
      exp->buf[3] = exp->buf[2];
      exp->buf[2] = exp->buf[1];
      exp->buf[1] = exp->buf[0];
      exp->buf[0] = exp->ser; 
    }
  }
  exp->bclk = bit;
}

void setOCLK(Expander *exp, bool bit){
  if(exp->noe == 0){
    if(exp->oclk == 0 && bit == 1){
      for(int i = 0; i < 8; i++){ exp->out[i] = exp->buf[i]; }
    }
  }
  exp->oclk = bit;
}

void setBCLR(Expander *exp, bool bit){
  exp->bclr = bit;
  if(bit == 0){
    for(int i = 0; i < 9; i++){ exp1.buf[i] = 0; }
  }
}

int main(){
  Expander exp1 = expanderInit();
  return 0;
}
