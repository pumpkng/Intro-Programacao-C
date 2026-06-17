#include <stdio.h>

int fatorial(int);

int main(){
    int n;

    printf("\nN: ");
    scanf("%d",&n);

    printf("\nFatorial: %d",fatorial(n));

    return 0;
}

int fatorial(int n){
    if(n == 0 || n == 1){
        return 1;
    }

    return n * fatorial(n-1);
}