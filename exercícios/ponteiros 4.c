/* 13. Faça um programa que leia 2 valores inteiros e chame uma função que receba estas 2 variáveis e troque o seu conteúdo, ou seja, esta função e chamada passando duas variáveis A e B por exemplo e, após a execução da função, A terá o valor de B e B terá o valor de A.*/
#include <stdio.h>
void troca(int *o, int *t);

void troca(int *o, int *t){
    int temporario = *o;
    *o = *t;
    *t = temporario;
}
int main(void){
    int oi, tchau;
    
    printf("Digite o primeiro valor: ");
    scanf("%d", &oi);
    printf("\nDigite o segundo valor: ");
    scanf("%d", &tchau);
    
    printf("\nAntes da troca: oi = %d tchau = %d", oi, tchau);
    
    troca(&oi, &tchau);
    
    printf("\nDepois da troca: oi = %d tchau = %d", oi, tchau);

    return 0;
}
