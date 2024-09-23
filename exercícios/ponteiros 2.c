/*  Crie um programa que contenha uma matriz de float contendo três linhas e três colunas. Imprima o endereço de cada posição dessa matriz.*/
#include <stdio.h>
int main(void){
    float matriz[3][3], *pf;
  
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            pf = &matriz[i][j];
            printf("\nEndereço de memória da posição [%d][%d] da matriz: %p", i+1, j+1, pf);
        }
    }
    
    return 0;
}
