#include <stdio.h>
int main(){
    int N;
    printf("\nInsira o valor de N: ");
    scanf("%d",&N);
    int A[N],B[N],Soma[N];
    for(int i=0;i<N;i++){
        printf("\nInsira um número do vetor A: ");
        scanf("%d",&A[i]);
    }
    for(int i=0;i<N;i++){
        printf("\nInsira um número do vetor B: ");
        scanf("%d",&B[i]);
    }
    for(int i=0;i<N;i++){
        Soma[i]=A[i]+B[i];
    }
    printf("\nOs elementos do vetor Soma são: ");
    for(int i=0;i<N;i++){
        printf("%d\t",Soma[i]);
    }
    return 0;
}