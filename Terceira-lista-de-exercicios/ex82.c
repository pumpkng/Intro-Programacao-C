#include <stdio.h>
int main(){
    int A[10],X,M[10];
    for(int i=0;i<10;i++){
        printf("\nInsira um número: ");
        scanf("%d",&A[i]);
    }
    printf("\nInsira o número X: ");
    scanf("%d",&X);
    for(int i=0;i<10;i++){
        M[i]=A[i]*X;
    }
    printf("\nOs números do vetor M são: ");
    for(int i=0;i<10;i++){
        printf("\n%d",M[i]);
    }
    return 0;
}