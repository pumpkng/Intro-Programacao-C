#include <stdio.h>
#define M 2

int main(){
    int m[M][M],mT[M][M];

    for(int i=0;i<M;i++){
        for(int j=0;j<M;j++){
            printf("\nm[%d][%d]: ",i,j);
            scanf("%d",&m[i][j]);
        }
    }

    printf("\nm:\n");

    for(int i=0;i<M;i++){
        for(int j=0;j<M;j++){
            printf("%d\t",m[i][j]);
        }
        printf("\n");
    }

    printf("mT:\n");

    for(int i=0;i<M;i++){
        for(int j=0;j<M;j++){
            mT[i][j]=m[j][i];
            printf("%d\t",mT[i][j]);
        }
        printf("\n");
    }

    return 0;
}