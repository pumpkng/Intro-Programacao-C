#include <stdio.h>
#define M 4

int main(){
    int m[M][M];

    for(int i=0;i<M;i++){
        for(int j=0;j<M;j++){
            m[i][j]=i*j;
        }
    }

    printf("\nm:\n");

    for(int i=0;i<M;i++){
        for(int j=0;j<M;j++){
            printf("%d\t",m[i][j]);
        }
        printf("\n");
    }

    return 0;
}