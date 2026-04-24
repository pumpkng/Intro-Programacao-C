#include <stdio.h>
int main(){
    int v1[15],v2[15],c=0;
    for(int i=0;i<15;i++){
        printf("Insira um número do primeiro vetor: ");
        scanf("%d",&v1[i]);
    }
    for(int i=0;i<15;i++){
        printf("Insira um número do segundo vetor: ");
        scanf("%d",&v2[i]);
    }
    for(int i=0;i<15;i++){
        if(v1[i]==v2[i])
            c++;
    }
    printf("Os dois vetores tem %d números iguais na mesma posição.",c);
    return 0;
}