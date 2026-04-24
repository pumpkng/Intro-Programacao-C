#include <stdio.h>
#define M 5
int main(){
    int VET[M];
    for(int i=0;i<M;i++){
        printf("Insira o %do numero do vetor: \n",i+1);
        scanf("%d",&VET[i]);
    }
    for(int i=0;i<M;i++){    
        for(int j=0;j<M;j++){
            if(VET[i]==VET[j]){
                printf("Número %d igual encontrado nas posições %d e %d.\n",VET[i],i,j);
            }
        }
    }
    return 0;
}