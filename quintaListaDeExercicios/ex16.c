#include <stdio.h>

int fatorialDuplo(int);

int main(){
    int n;

    do{
        printf("\nNumero impar: ");
        scanf("%d",&n);
    }while(n % 2 == 0);

    printf("\nFatorial duplo: %d", fatorialDuplo(n));

    return 0;
}

int fatorialDuplo(int n){
    if(n == 1){
        return 1;
    }

    return n * fatorialDuplo(n-2);
}