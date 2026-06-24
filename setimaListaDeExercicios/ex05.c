#include <stdio.h>
#include <stdlib.h>

void maior(int*, int*);

int main(){
    int A, B;

    printf("\nA: ");
    scanf("%d",&A);

    printf("\nB: ");
    scanf("%d",&B);

    maior(&A, &B);

    printf("\n\nA: %d", A);
    printf("\nB: %d", B);

    return 0;
}

void maior(int *a, int *b){
    int aux;
    
    if(*a < *b){
        aux = *a;
        *a = *b;
        *b = aux;
    }
}