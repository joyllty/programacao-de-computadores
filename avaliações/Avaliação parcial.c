//Questão 4
#include <stdio.h>
#include <stdlib.h>
void troca(int *pi, float *pf, char *pc){
    *pi = 150;
    *pf = 30.5;
    *pc = 'b';
}

int main(){
  int oi = 10, *pi;
  float real = 100, *pf;
  char c = 'c', *pc;
  
  printf("====== Antes da troca ====== \nInteiro: %d \nReal: %.1f \nChar: %c", oi, real, c);
 
  pi = &oi;
  pf = &real;
  pc = &c;

  troca(pi, pf, pc);
 
  printf("\n====== Depois da troca ====== \nInteiro: %d \nReal: %.2f \nChar: % c", oi, real, c);
 
  return 0;
}
