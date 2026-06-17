#include <stdio.h>
#include <math.h>

int somaCubos(int);

int main(){
    int n;

    printf("\nN: ");
    scanf("%d",&n);

    printf("\nSoma: %d", somaCubos(n));

    return 0;
}

int somaCubos(int n){
    if(n == 1){
        return 1;
    }

    return pow(n,3) + somaCubos(n-1);
}