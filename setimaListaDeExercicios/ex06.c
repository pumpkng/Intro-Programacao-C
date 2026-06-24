#include <stdio.h>
#include <stdlib.h>

int dobro(int*, int*);

int main(){
    int a, b;

    printf("\nA: ");
    scanf("%d", &a);
    printf("\nB: ");
    scanf("%d", &b);

    printf("\nPrimeiro valor de A: %d", a);
    printf("\nPrimeiro valor de B: %d", b);

    printf("\n\nSoma de a e b: %d", dobro(&a, &b));
    printf("\nSegundo valor de A: %d", a);
    printf("\nSegundo valor de B: %d", b);

    return 0;
}

int dobro(int *a, int *b){
    int soma = 0;
    *a *= 2;
    *b *= 2;
    soma += *a;
    soma += *b;
    return soma;
}