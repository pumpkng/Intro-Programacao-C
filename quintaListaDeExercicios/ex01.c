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
    int s;

    if(n == 0){
        return 0;
    }

    s = n + soma(n-1);

    return s;
}