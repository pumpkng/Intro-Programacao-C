#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
int main(){
    int A[128], K;
    bool achei=false;
    for(int i=0;i<128;i++){
        A[i]=rand()%100;
        printf("%d, ",A[i]);
    }
    printf("\nK: ");
    scanf("%d",&K);

    for(int i=0;i<128;i++){
        if(A[i]==K){
            printf("\nEncontrado na posição %d\n",i);
            achei=true;
            break;
        }
    }
    if(!achei)
        printf("\nNão encontrado.\n");
    return 0;
    //SIX SEVEN
}