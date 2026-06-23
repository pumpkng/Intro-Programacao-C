#include <stdio.h>

void troca(int*, int*);

int main(){
    int A, B;

    printf("\nA: ");
    scanf("%d",&A);

    printf("\nB: ");
    scanf("%d",&B);
    
    troca(&A, &B);
    printf("\nA trocado: %d", A);
    printf("\nB trocado: %d", B);
}
    
void troca(int *a, int *b){
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}