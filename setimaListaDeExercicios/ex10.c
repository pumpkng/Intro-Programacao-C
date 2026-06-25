#include <stdio.h>

void imprimeDobro(int*, int);

int main(){
    int v[5];

    imprimeDobro(v, 5);

    return 0;
}

void imprimeDobro(int *pv, int n){
    
    for(int i=0;i<n;i++){
        printf("\nv[%d]: ", i);
        scanf("%d", pv + i);

        printf("\nDobro de v[%d]: %d", i, *(pv + i)*2);
    }
}