/* 5. Faca um programa que leia do usuário o tamanho de um vetor a ser lido e faça a alocação dinâmica de memória. Em seguida, leia do usuário seus valores 
e mostre quantos dos números são pares e quantos são ímpares */
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int *array;
    int par = 0, impar = 0;
    
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    
    array = (int*) malloc (n * sizeof(int));
    if (array == NULL) {
        printf("Erro ao alocar memória!\n");
        return 1; 
    }
        
    printf("Digite os valores do vetor: ");
    for(i = 0; i < n; i++){
        printf("Valor[%d]: ", i + 1);
        scanf("%d", &array[i]);
    }
    
    for(i = 0; i < n; i++){
        if(array[i] % 2 == 0){
            par++;
        }
        else{
            impar++;
        }
    }
    
    printf("Total de números pares: %d", par);
    printf("\nTotal de números ímpares: %d", impar);
    
    free(array);
    
    return 0;
}
