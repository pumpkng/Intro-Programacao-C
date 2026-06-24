#include <stdio.h>

int sequencia(int);

int main(){
    int n;

    printf("\nN: ");
    scanf("%d", &n);

    printf("Soma da sequencia: %d", sequencia(n));

    return 0;
}

int sequencia(int n){

    if(n == 1 || n == 2){
        return n;
    }

    return 2 * sequencia(n-1) + 3 * sequencia(n-2);
}