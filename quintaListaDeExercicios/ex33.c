#include <stdio.h>

void inverteVetor(int[], int);

int main(){
    int v[10];

    for(int i=0;i<10;i++){
        printf("\nv[%d]: ", i);
        scanf("%d",&v[i]);
    }

    inverteVetor(v, 10);
    printf("\nVetor invertido: \n");

    for(int i=0;i<10;i++){
        printf("%d ", v[i]);
    }

    return 0;
}

void inverteVetor(int v[], int n){
    int aux;
    if(n == 2){
        aux = v[0];
        v[0] = v[1];
        v[1] = aux;
    }
    else{
        aux = v[0];
        v[0] = v[n-1];
        v[n-1] = aux;
        inverteVetor(v+1, n-2);
    }
}