/* Faça um programa que leia um valor inteiro N não negativo. Se o valor de N for inválido, o usuário deverá digitar outro até que ele seja válido (ou seja, positivo). Em seguida, leia um vetor V
contendo N posições de inteiros, em que cada valor deverá ser maior ou igual a 2. Esse vetor deverá ser alocado dinamicamente */
#include <stdio.h>
#include <stdlib.h>
int main() {
  int *array;
  int n, i;
  
  //alocação do vetor
  array = (int*) malloc(n * sizeof(int));

  if(array == NULL){
    printf("Memória insuficiente!");
  }
  
  do {
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

  //verificação do inteiro positivo
    if(n < 0){
      printf("Valor invalido, digite novamente: ");
    }
  } while(n < 0);

    for(i = 0; i < n; i++){
      do{
        printf("\nDigite o valor da posição [%d] do vetor:", i);
        scanf("%d", &array[i]);

        //verificação se os valores são iguais ou maiores que 2
        if(*array < 2){
          printf("\nValor invalido, digite novamente: ");
        }
      } while (*array < 2);
    }

    for(i = 0; i < n; i++){
      printf("Vetor [%d]: %d\n", i, array[i]);
    }
  
    free(array);
  
    return 0;
}
