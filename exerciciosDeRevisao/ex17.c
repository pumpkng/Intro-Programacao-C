#include <stdio.h>
#define M 10
#define N 3

int main(){
    int m[M][N],cont1=0,cont2=0,cont3=0;

    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            printf("\nInsira a %da nota do %do aluno.",j+1,i+1);
            scanf("%d",&m[i][j]);
        }
    }

    for(int i=0;i<M;i++){
        if(m[i][0]<=m[i][1]&&m[i][0]<=m[i][2]){
            cont1++;
        }
        else if(m[i][1]<=m[i][0]&&m[i][1]<=m[i][2]){
            cont2++;
        }
        else if(m[i][2]<=m[i][0]&&m[i][2]<=m[i][1]){
            cont3++;
        }
    }

    printf("\nAlunos com a pior nota na P1: %d",cont1);
    printf("\nAlunos com a pior nota na P2: %d",cont2);
    printf("\nAlunos com a pior nota na P3: %d",cont3);
    return 0;
}