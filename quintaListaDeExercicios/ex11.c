#include <stdio.h>

void imprimeVetor(int[], int);

int main(){
    int v[10];
    
    for(int i=0;i<10;i++){
        printf("\nv[%d]: ",i);
        scanf("%d", &v[i]);
    }

    imprimeVetor(v,10);

    return 0;
}

void imprimeVetor(int v[], int n){
    
    if(n == 1){
        printf("%d ", v[0]);
    }
    else{
        imprimeVetor(v, n-1);
        printf("%d ", v[n-1]);
    }
}