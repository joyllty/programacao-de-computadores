/*Usando recursividade, calcule a soma de todos os valores de um array de reais.*/
#include <stdio.h>
float soma(float arr[], int t);

float soma(float arr[], int t){
    //Caso base
    if(t == 0){
      return 0;
    }
    return arr[t-1] + soma(arr, t-1);
}  

int main() {
    float array[5] = {10, 20, 30, 40, 50};
    int tamanhoArray = 5;

    float resultado = soma(array, tamanhoArray);

    printf("O resultado da soma de um vetor com %.1d posicoes é: %.1f", tamanhoArray, resultado);

    return 0;
}
