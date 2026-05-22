#include <stdio.h>
#include <stdlib.h>

int fatorial(int);

int main(){
    int n;

    printf("\nN: ");
    scanf("%d",&n);

    printf("\nFatorial: %d",fatorial(n));
}

int fatorial(int n){
    int resultado = 1;
    for(int i=n;i>0;i--){
        resultado*=i;
    }
    return resultado;
}