#include <stdio.h>

int somaVetor(int[], int);

int main(){
    int v[10];

    for(int i=0;i<10;i++){
        printf("\nv[%d]: ",i);
        scanf("%d",&v[i]);
    }

    printf("\nSoma do vetor: %d", somaVetor(v,10));

    return 0;
}

int somaVetor(int v[], int n){
    
    if(n == 1){
        return v[0];
    }
    else{
        return v[0] + somaVetor(v+1, n-1);
    }
}
