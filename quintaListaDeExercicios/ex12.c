#include <stdio.h>

int menorElemento(int[], int);

int main(){
    int v[10];

    for(int i=0;i<10;i++){
        printf("\nv[%d]: ",i);
        scanf("%d",&v[i]);
    }

    printf("\nMenor elemento: %d", menorElemento(v,10));

    return 0;
}

int menorElemento(int v[], int n){
    int menor;

    if(n == 1){
        return v[0];
    }
    else{
        menor = menorElemento(v+1,n-1);
        if(v[0] < menor){
            return v[0];
        }
        else{
            return menor;
        }
    }
}