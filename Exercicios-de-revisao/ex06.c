#include <stdio.h>
#define M 4

int main(){
    int m[M][M], m1[M][M], m2[M][M];

    for(int i=0;i<M;i++){
        for(int j=0;j<M;j++){
            printf("\nm[%d][%d]: ",i,j);
            scanf("%d",&m[i][j]);
        }
    }

    for(int i=0;i<M;i++){
        for(int j=0;j<M;j++){
            printf("\nm1[%d][%d]: ",i,j);
            scanf("%d",&m1[i][j]);
        }
    }

    for(int i=0;i<M;i++){
        for(int j=0;j<M;j++){
            if(m[i][j]>=m1[i][j]){
                m2[i][j]=m[i][j];
            }
            else{
                m2[i][j]=m1[i][j];
            }
        }
    }

    printf("\nm2:\n");

    for(int i=0;i<M;i++){
        for(int j=0;j<M;j++){
            printf("%d\t",m2[i][j]);
        }
        printf("\n");
    }

    return 0;
}