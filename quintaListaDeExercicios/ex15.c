#include <stdio.h>

int somaSerie(int);

int main(){
    int n;

    printf("\nN: ");
    scanf("%d",&n);

    printf("\nSoma da serie: %d", somaSerie(n));

    return 0;
}

int somaSerie(int n){

    if(n == 1){
        return 2;
    }

    return (1+n*n)/n + somaSerie(n-1);
}