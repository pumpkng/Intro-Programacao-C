#include <stdio.h>
#include <stdlib.h>

int main(){
    int i = 1, *pi;
    float f = 2, *pf;
    char c = '3', *pc;

    pi = &i;
    pf = &f;
    pc = &c;

    printf("\nValores iniciais:");
    printf("\nI: %d",i);
    printf("\nF: %.2f",f);
    printf("\nC: %c",c);

    *pi = 0;
    *pf = 0.0;
    *pc = '0';

    printf("\nValores modificados:");
    printf("\nI: %d",i);
    printf("\nF: %.2f",f);
    printf("\nC: %c",c);

    return 0;
}