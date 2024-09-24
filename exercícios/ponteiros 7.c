/*  Escreva um programa que faz o seguinte: Declare um array de inteiros com 5 elementos. Use um ponteiro para preencher o array com números inteiros lidos 
do usuário. Crie uma função que recebe um ponteiro para o array e um tamanho, e calcula a soma e a média dos elementos do array. A função deve retornar
a soma e a média através de parâmetros de saída (ponteiros).*/
#include <stdio.h>
#include <stdlib.h>

float calcula(int *array, int tamanho, float *soma, float *media){
    for(int i = 0; i < tamanho; i ++){
        *soma = *soma + array[i];
    }
    *media = *soma / tamanho;
    
    return 0;
}
int main(){
    int array[5];
    int *p, i;
    float soma = 0, media;
    
    p = array;
    /* array = (int *) malloc(5 * sizeof(int));
     if (matriz == NULL) {
        printf("Memória insuficiente!\n");
        return 1;
    } */
    
    printf("Digite os valores do array");
    for(i = 0; i < 5; i++){
        printf("\nPosição [%d]:", i + 1);
        scanf("%d", p + i); //aritmética
    }
    
    calcula(array, 5, &soma, &media);
    
    printf("\nO resultado da soma dos elementos é: %.1f", soma);
    printf("\nO resultado da média dos elementos é: %.1f", media);
    
    return 0;
}
