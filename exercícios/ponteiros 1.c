/*  7. Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real, e char. Associe as variáveis aos ponteiros (use &). 
Modifique os valores de cada variável usando os ponteiros. Imprima os valores das variáveis antes e após a modificação. */
#include <stdio.h>
int main(void)
{
    int a = 1, *pa;
    float b = 2, *pb;
    char c = 'c', *pc;
    
    pa = &a;
    pb = &b;
    pc = &c;
    
    printf("\n%d", a);
    printf("\n%.1f", b);
    printf("\n%c", c);
    
    *pa = 10;
    *pb = 20;
    *pc = 'b';
    
    printf("\n%d", a);
    printf("\n%.1f", b);
    printf("\n%c", c);
    
    return 0;
}
