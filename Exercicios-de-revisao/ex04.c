#include <stdio.h>
#define M 4

int main(){
    int m[M][M],maior=0,linha,coluna;

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

    for(int i=0;i<M;i++){
        for(int j=0;j<M;j++){
            if(m[i][j]>maior){
                maior=m[i][j];
                linha=i;
                coluna=j;
            }
        }
    }

    printf("Maior elemento da matriz: m[%d][%d] = %d.",linha,coluna,maior);
    return 0;
}