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
    int fat;

    if(n == 0){
        return 1;
    }

    fat = n * fatorial(n-1);

    return fat;
}