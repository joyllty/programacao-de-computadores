/*  2. Escreva um programa que aloque dinamicamente uma matriz de inteiros. As dimensões da matriz deverão ser lidas do usuário. Em seguida, escreva uma função 
que receba um valor e retorne 1, caso o valor esteja na matriz, ou retorne 0, no caso contrário */
#include <stdio.h>
#include <stdlib.h>

int checkValores(int **matriz, int linhas, int colunas, int valor){
    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            if(matriz[i][j] == valor){
                return 1;
            }
        }
    }
    return 0;
}

int main(){
    int **matriz;
    int i, j, linhas, colunas, valor;
    
    //definindo as dimensões da matriz
    printf("Digite o número de linhas desejado: ");
    scanf("%d", &linhas);
    printf("Digite o número de colunas desejado: ");
    scanf("%d", &colunas);
    
    //alocação de memória das linhas
    matriz = (int **) malloc(linhas * sizeof(int));
    
    //alocação de memória de cada linha
    for(i = 0; i < linhas; i++){
        matriz[i] = (int*) malloc(colunas * sizeof(int));
    }
    if (matriz == NULL) {
        printf("Memória insuficiente!\n");
        return 1;
    }
    
    printf("Digite os valores para preencher a matriz ");
    for(i = 0; i < linhas; i++){
        for(j = 0; j < colunas; j++){
            printf("[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }    
            
    printf("Digite um valor: ");
    scanf("%d", &valor);
    
    int resultado = checkValores(matriz, linhas, colunas, valor);
    
    if(resultado){
        printf("O valor foi encontrado na matriz!");
    }
    else{
        printf("O valor não foi encontrado na matriz!");
    }
    
    free(matriz);
    
    return 0;
}
