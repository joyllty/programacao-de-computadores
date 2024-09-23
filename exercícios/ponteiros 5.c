/*  16.Crie um programa que contenha uma função que permita passar por parâmetro dois números inteiros A e B. A função devera calcular a soma entre estes 
dois números e armazenar o resultado na variável A. Esta função não devera possuir retorno, mas devera modificar o valor do primeiro parâmetro. 
Imprima os valores de A e B na função principal.*/
#include <stdio.h>
void soma(int *a, int b);

void soma(int *a, int b){
    int temp;
    temp = *a + b;
    *a = temp;
}

int main(void){
    int a = 12, b = 15;
    
    soma(&a, b);
    
    printf("Antes: a = 12 e b = 15");
    
    printf("\nDepois: a = %d b= %d", a, b);

    return 0;
}
