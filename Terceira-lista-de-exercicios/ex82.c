#include <stdio.h>
int main(){
    int A[10],X,M[10];

    for(int i=0;i<10;i++){
        printf("Insira o %do número do vetor: ",i+1);
        scanf("%d",&A[i]);
    }

    printf("\nInsira o número X: ");
    scanf("%d",&X);

    for(int i=0;i<10;i++){
        M[i]=A[i]*X;
    }

    printf("\nOs números do vetor M são: \n");

    for(int i=0;i<10;i++){
        printf("%d\t",M[i]);
    }

    return 0;
}