#include <stdio.h>
#include <stdlib.h>
int main(){
    int *array;
    int n, m, i;
 
    printf("Digite o tamanho desejado do array: ");
    scanf("%d", &n);
    
    array = (int *) malloc (n * sizeof(int));
    
    printf("\n\nDigite os valores para preencher o array: ");
    
    for(i = 0; i < n; i ++){
        printf("\n[%d]: ", i+1);
        scanf("%d", &array[i]);
    }
 
    printf("\nDigite um novo tamanho para a realocacao do array: ");
    scanf("%d", &m);

    array = (int*) realloc (array, m * sizeof(int));
 
    printf("\nDigite os novos valores a serem adicionados no array: ");
 
    for(i < n; i < m; i++){
        printf("\n[%d]: ", i+1);
        scanf("%d", &array[i]);
    }
     
    printf("\nArray apos redimensionamento: ");
    
    for(i = 0; i < m; i++){
        printf("\n[%d]: %d", i+1, array[i]);
    }
 
    free(array);
  s
    return 0;
}
