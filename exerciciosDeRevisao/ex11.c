#include <stdio.h>
#define M 3

int main(){
    int m[M][M],soma=0;

    for(int i=0;i<M;i++){
        for(int j=0;j<M;j++){
            printf("\nm[%d][%d]: ",i,j);
            scanf("%d",&m[i][j]);
        }
    }

    for(int i=0;i<M;i++){
        soma+=m[i][M-(1+i)];
    }

    printf("\nSoma dos elementos na diagonal secundária: %d.",soma);
    return 0;
}