#include <stdio.h>

#define M 30
#define N 40

int main(){
    int m[M][N],v[N],a2=0;
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            printf("Insira um número da matriz: ");
            scanf("%d",&m[i][j]);
        }
    }  
    for(int i=0;i<M;i++){
        v[i]=0;
        for(int j=0;j<N;j++){
            v[i]+=m[i][j];
        }
        a2+=v[i];
    }
    printf("Os elementos do vetor são: %d, %d, %d. A soma dos elementos do vetor é igual a %d.",v[0],v[1],v[2],a2);
}