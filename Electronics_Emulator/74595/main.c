#include <stdio.h>

typedef struct ic74hc595{
  int out[8];
  int outprime;
  bool ser;
  bool noe;
  bool oclk;
  bool bclk;
  bool bclr;
} mem;

int main(){
  return 0;
}
