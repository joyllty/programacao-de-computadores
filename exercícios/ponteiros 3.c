/* 11. Escreva um programa que contenha duas variáveis inteiras. Compare seus endereços e exiba o maior endereço.*/
#include <stdio.h>
int main(void){
    int oi, tchau, *p;
  
    printf("Endereço da váriavel 1: %p", &oi);
    printf("\nEndereço da váriavel 2: %p", &tchau);
    
    if(&oi > &tchau){
        printf("\nO endereço da variável 1 ""oi"" é maior!");
    }
    else{
        printf("\nO endereço da variável 2 ""tchau"" é maior!");
    }
    
    return 0;
}
