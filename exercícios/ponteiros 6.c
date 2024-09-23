/*  18. Faça um programa em C que receba 4 notas de um aluno, calcule sua média, e exiba uma mensagem de aprovação (caso a média seja maior ou igual a 7) ou reprovação (caso contrário). Manipule as variáveis do programa (para leitura, processamento e exibição) APENAS através de ponteiros, nunca utilizando as variáveis originais.*/
#include <stdio.h>
void calculaMedia(float *notas, float *media);

void calculaMedia(float *notas, float *media){
    *media = 0;
    for(int i = 0; i < 4; i++){
        *media = *media + *(notas + i);//acessa cada posição do vetor;
    }
    *media = *media / 4;
}

int main(void){
    float nota1, nota2, nota3, nota4, media;
    float *p1, *p2, *p3, *p4, *pM;
    
    p1 = &nota1;
    p2 = &nota2;
    p3 = &nota3;
    p4 = &nota4;
    pM = &media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);
    printf("Digite a quarta nota: ");
    scanf("%f", &nota4);
    
    float notas[4] = {*p1, *p2, *p3, *p4};
    
    calculaMedia(notas, pM);
    
    printf("\nMédia: %.2f", *pM);
    
    if(*pM >= 7){
        printf("\nAluno APROVADO!");
    }
    else{
        printf("\nAluno NÃO APROVADO!");
    }
 
    return 0;
}
