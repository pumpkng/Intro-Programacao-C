#include <stdio.h>

int fibo(int);

int main(){
    int p;

    printf("\nPosicao: ");
    scanf("%d",&p);

    printf("\n%d",fibo(p));

    return 0;
}

int fibo(int p){
    if(p == 1){
        return 0;
    }
    if(p == 2){
        return 1;
    }

    return fibo(p-1) + fibo(p-2);
}