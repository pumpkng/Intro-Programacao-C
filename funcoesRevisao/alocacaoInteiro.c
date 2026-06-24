#include <stdio.h>
#include <stdlib.h>

int main(){
    int *n;

    n = (int *) malloc(sizeof(int));

    *n = 3;

    printf("\nValor de n: %p",n);
    printf("\nValor de *n: %d",*n);

    printf("\nN: ");
    scanf("%d",n);
    printf("\nValor de n: %p",n);
    printf("\nValor de *n: %d",*n);

    free(n);

    return 0;
}