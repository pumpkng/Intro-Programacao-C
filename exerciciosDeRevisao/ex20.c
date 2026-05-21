#include <stdio.h>
#define M 3
#define N 6

int main(){
    float m[M][N],soma,media;

    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            printf("\nm[%d][%d]: ",i,j);
            scanf("%f",&m[i][j]);
        }
    }

    for(int i=0;i<M;i++){
        for(int j=0;j<N;j+=2){
            soma+=m[i][j];
        }
    }

    printf("\nSoma das colunas ímpares: %.2f.",soma);
    soma=0;

    for(int i=0;i<M;i++){
        for(int j=1;j<N;j+=2){
            soma+=m[i][j];
        }
    }

    media=soma/(M*2);
    printf("\nMédia das colunas pares: %.2f.",media);

    for(int i=0;i<M;i++){
        m[i][5]=m[i][0]+m[i][1];
    }

    printf("\n\nMatriz transformada:\n");
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            printf("%.2f\t",m[i][j]);
        }
        printf("\n");
    }

    return 0;
}