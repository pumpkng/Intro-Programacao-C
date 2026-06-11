#include <stdio.h>

int somaCubos(int);

int main(){
    int n;

    printf("\nN: ");
    scanf("%d",&n);

    printf("\nSoma: %d", somaCubos(n));

    return 0;
}

int somaCubos(int n){
    int sC;

    if(n == 1){
        return 1;
    }

    sC = n*n*n + somaCubos(n-1);

    return sC;
}