#include <stdio.h>
#define M 3
#define N 4
int main(){
    int m[M][N],v[N],a=0;

    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            printf("Insira o número m[%d][%d] da matriz: \n",M,N);
            scanf("%d",&m[i][j]);
        }
    }  

    for(int i=0;i<M;i++){
        v[i]=0;
        for(int j=0;j<N;j++){
            v[i]+=m[i][j];
        }
        a+=v[i];
    }

    printf("Os elementos do vetor são: %d, %d, %d. A soma dos elementos do vetor é igual a %d.",v[0],v[1],v[2],a);
    return 0;
}