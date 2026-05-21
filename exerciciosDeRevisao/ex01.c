#include <stdio.h>
#define M 4

int main(){
    int m[M][M],c=0;

    for(int i=0;i<M;i++){
        for(int j=0;j<M;j++){
            printf("m[%d][%d]: \n",i,j);
            scanf("%d",&m[i][j]);
        }
    }

    printf("m: \n");

    for(int i=0;i<M;i++){
        for(int j=0;j<M;j++){
            printf("%d\t",m[i][j]);
        }
        printf("\n");
    }

    for(int i=0;i<M;i++){
        for(int j=0;j<M;j++){
            if(m[i][j]>10)
                c++;
        }
    }

    printf("Matriz possui %d valores maiores que 10.",c);
    return 0;
}