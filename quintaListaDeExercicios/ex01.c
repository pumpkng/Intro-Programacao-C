#include <stdio.h>

int soma(int);

int main(){
    int n;

    printf("\nN: ");
    scanf("%d",&n);

    printf("\nSoma: %d",soma(n));

    return 0;
}

int soma(int n){
    if(n == 0){
        return 0;
    }

    return n + soma(n-1);
}