#include <stdio.h>
#include <stdlib.h>

void imprimeVetor(int*,int);

int main(){
    int v[10];

    printf("\nV: %p",v);
    printf("\nEndereços:");
    printf("\nV + 1: %p",v+1);
    printf("\nEndereços:");
    for(int i=0;i<10;i++){
        v[i] = i;
        printf("\n%p",&v[i]);
    }

    printf("\nVetor: ");
    imprimeVetor(v,10);

    return 0;
}

void imprimeVetor(int *vet,int n){
    for(int i=0;i<n;i++)
        printf("%d, ",vet[i]);
}