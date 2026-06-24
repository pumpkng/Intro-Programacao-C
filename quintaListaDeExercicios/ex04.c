#include <stdio.h>

int pot(int, int);

int main(){
    int k, n;

    printf("\nNumero: ");
    scanf("%d",&k);

    printf("\nExpoente: ");
    scanf("%d",&n);

    printf("\nPotencia: %d", pot(k, n));

    return 0;
}

int pot(int k, int n){
    
    if(n == 1){
        return k;
    }

    if(n == 0){
        return 1;
    }
    
    return k * pot(k, n-1); 
}