#include <stdio.h>

int main(){
    int A[3][3],B[3][3],prod[3][3];

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("\nA[%d][%d]: ",i,j);
            scanf("%d",&A[i][j]);
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("\nB[%d][%d]: ",i,j);
            scanf("%d",&B[i][j]);
        }
    }

    
}