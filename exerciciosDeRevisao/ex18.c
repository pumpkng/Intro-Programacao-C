#include <stdio.h>

int main(){
    int m[3][3],v[3];

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("\nm[%d][%d]: ",i,j);
            scanf("%d",&m[i][j]);
        }
    }

    printf("\nm:\n");

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",m[i][j]);
        }
        printf("\n");
    }

    printf("\n\nv: ");

    for(int i=0;i<3;i++){
        v[i]=m[0][i]+m[1][i]+m[2][i];
        printf("%d\t",v[i]);
    }

    return 0;
}