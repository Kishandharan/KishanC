#include <stdio.h>

typedef struct ic74hc670{
  bool WR_ADDR[2];
  bool RE_ADDR[2];
  bool MEMORY[4][4];
  bool DATA[4];
  int OUT[4]; 
  bool nWE;
  bool nRE;
} MEM;

MEM memInit(){
  MEM mem;
  mem.WR_ADDR[0] = 0;
  mem.WR_ADDR[1] = 0;
  for(int i = 0; i < 4; i++){
    for(int j = 0; j < 4; j++){
      mem.MEMORY[i][j] = 0;
    }
  }
  mem.DATA[0] = 0;
  mem.DATA[1] = 0;
  mem.DATA[2] = 0;
  mem.DATA[3] = 0;
  mem.OUT[0] = -1;
  mem.OUT[1] = -1;
  mem.OUT[2] = -1;
  mem.OUT[3] = -1;
  mem.nWE = 1;
  mem.nRE = 1;
  return mem;
}

void setWrAddr(MEM *mem, bool bit1, bool bit2){
  mem->WR_ADDR[0] = bit1;
  mem->WR_ADDR[1] = bit2;
  
  if((mem->nWE) == false){
    if(((mem->WR_ADDR[0]) == 0 && (mem->WR_ADDR[1]) == 0)){
      mem->MEMORY[0][0] = mem->DATA[0];
      mem->MEMORY[0][1] = mem->DATA[1];
      mem->MEMORY[0][2] = mem->DATA[2];
      mem->MEMORY[0][3] = mem->DATA[3];
    }else if(((mem->WR_ADDR[0]) == 0 && (mem->WR_ADDR[1]) == 1)){
      mem->MEMORY[1][0] = mem->DATA[0];
      mem->MEMORY[1][1] = mem->DATA[1];
      mem->MEMORY[1][2] = mem->DATA[2];
      mem->MEMORY[1][3] = mem->DATA[3];
    }else if(((mem->WR_ADDR[0]) == 1 && (mem->WR_ADDR[1]) == 0)){
      mem->MEMORY[2][0] = mem->DATA[0];
      mem->MEMORY[2][1] = mem->DATA[1];
      mem->MEMORY[2][2] = mem->DATA[2];
      mem->MEMORY[2][3] = mem->DATA[3];
    }else if(((mem->WR_ADDR[0]) == 1 && (mem->WR_ADDR[1]) == 1)){
      mem->MEMORY[3][0] = mem->DATA[0];
      mem->MEMORY[3][1] = mem->DATA[1];
      mem->MEMORY[3][2] = mem->DATA[2];
      mem->MEMORY[3][3] = mem->DATA[3];
    } 
  }
}

int main(){
  MEM mem = memInit();
  
  mem.nWE = false;
  mem.DATA[0] = 1;
  mem.DATA[1] = 1;
  mem.DATA[2] = 0;
  mem.DATA[3] = 1;

  setWrAddr(&mem, false, true);

  printf("%d", mem.MEMORY[1][0]);
  printf("%d", mem.MEMORY[1][1]);
  printf("%d", mem.MEMORY[1][2]);
  printf("%d", mem.MEMORY[1][3]);
}
