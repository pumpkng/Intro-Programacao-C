#include <stdio.h>
int main(){
    int Q[20],maior=0,posicao=0;
    for(int i=0;i<20;i++){
        printf("\nInsira um número: ");
        scanf("%d",&Q[i]);
        if(Q[i]<0)
            i--;
        if(Q[i]>maior){
            maior=Q[i];
            posicao=i;
        }
        printf("\nO maior até agora é %d.",maior);
    }
    printf("\nO maior número do vetor é %d. Sua posição é %d.",maior,posicao);
    return 0;
}