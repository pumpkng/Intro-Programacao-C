#include <stdio.h>
#include <stdlib.h>

void soma(int*, int*);

int main(){
    int a, b;

    printf("\nA: ");
    scanf("%d", &a);
    printf("\nB: ");
    scanf("%d", &b);

    printf("\n\nPrimeiro valor de A: %d", a);
    printf("\nPrimeiro valor de B: %d", b);

    soma(&a, &b);

    printf("\n\nA + B: %d", a);

    return 0;
}

void soma(int *a, int *b){
    *a += *b;
}