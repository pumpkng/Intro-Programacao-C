#include <stdio.h>

int fatorialQuad(int);

int main(){
    int n;

    
    printf("\nN: ");
    scanf("%d",&n);

    printf("\nFatorial quadruplo: %d", fatorialQuad(n));

    return 0;
}

int fatorialQuad(int n){
    if(n == 1){
        return 2;
    }

    return (2 * n) / n * fatorialQuad(n-1);
}