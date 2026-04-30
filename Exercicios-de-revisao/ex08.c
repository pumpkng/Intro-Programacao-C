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
        for(int j=i+1;j<M;j++){
            soma+=m[i][j];
        }
    }

    printf("\nSoma acima da diagonal principal: %d.",soma);
    return 0;
}