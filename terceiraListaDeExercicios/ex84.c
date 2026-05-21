#include <stdio.h>
#define N 5
int main(){
    int A[N],B[N],Soma[N];

    for(int i=0;i<N;i++){
        printf("Insira o %do número do vetor A: ",i+1);
        scanf("%d",&A[i]);
    }

    for(int i=0;i<N;i++){
        printf("\nInsira o %do número do vetor B: ",i+1);
        scanf("%d",&B[i]);
    }

    for(int i=0;i<N;i++){
        Soma[i]=A[i]+B[i];
    }

    printf("\nOs elementos do vetor Soma são: \n");
    
    for(int i=0;i<N;i++){
        printf("%d\t",Soma[i]);
    }
    return 0;
}