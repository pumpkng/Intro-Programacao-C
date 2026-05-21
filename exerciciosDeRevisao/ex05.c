#include <stdio.h>
#define M 5

int main(){
    int m[M][M],X,c=0;

    for(int i=0;i<M;i++){
        for(int j=0;j<M;j++){
            printf("\nm[%d][%d]: ",i,j);
            scanf("%d",&m[i][j]);
        }
    }

    printf("\nInsira um número: ");
    scanf("%d",&X);

    for(int i=0;i<M;i++){
        for(int j=0;j<M;j++){
            if(m[i][j]==X){
                printf("\nNúmero encontrado na posição m[%d][%d].",i,j);
                c++;
            }
        }
    }

    if(c==0){
        printf("\nNúmero não encontrado.");
    }
    
    return 0;
}