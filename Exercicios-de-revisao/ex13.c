#include <stdio.h>
#define M 3

int main(){
    int m[M][M],m1[M][M];

    for(int i=0;i<M;i++){
        for(int j=0;j<M;j++){
            do{
            printf("\nm[%d][%d]: ",i,j);
            scanf("%d",&m[i][j]);
            }while(m[i][j]<1||m[i][j]>20);
        }
    }

    printf("\n\nm:\n");

    for(int i=0;i<M;i++){
        for(int j=0;j<M;j++){
            printf("%d\t",m[i][j]);
        }
        printf("\n");
    }

    printf("\nm1:\n");

    for(int i=0;i<M;i++){
        for(int j=0;j<M;j++){
            if(j>i){
                m1[i][j]=0;
            }
            else{
                m1[i][j]=m[i][j];
            }
            printf("%d\t",m1[i][j]);
        }
        printf("\n");
    }

    return 0;
}