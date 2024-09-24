/*  16.Crie um programa que contenha uma função que permita passar por parâmetro dois números inteiros A e B. A função devera calcular a soma entre 
estes dois números e armazenar o resultado na variável A. Esta função não devera possuir retorn , mas devera modificar o valor do primeiro parâmetro.  
Imprima os valores de A e B na função principal.*/
#include <stdio.h>
void soma(int *a, int b);

void soma(int *a, int b){
    int temp;
    temp = *a + b;
    *a = temp;
}

int main(void){
    int a, b ;
    
    printf("Digite o primeiro valor: ");
    scanf("%d", &a);
    printf("Digite o segundo valor: ");
    scanf("%d", &b);
    
    printf("\nAntes: %d e %d", a, b);
    
    soma(&a, b);
    
    printf("\nDepois: a = %d b= %d", a, b);

    return 0;
}
