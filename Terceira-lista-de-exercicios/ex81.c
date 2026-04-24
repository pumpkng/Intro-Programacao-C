#include <stdio.h>
int main(){
    int Q[20],menor=-1,posicao=0,c=0;
    for(int i=0;i<20;i++){
        printf("\nInsira um número: ");
        scanf("%d",&Q[i]);
        if(Q[i]<0){
            i--;
            c--;
        }
        if(menor==-1)
            menor=Q[i];
        if(Q[i]<=menor){
            menor=Q[i];
            posicao=i;
        }
        printf("\nO menor até agora é %d.",menor);
        c++;
    }
    printf("\nO menor número do vetor é %d. Sua posição é %d. %d números foram inseridos.",menor,posicao,c);
    return 0;
}