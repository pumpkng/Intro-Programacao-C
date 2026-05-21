#include <stdio.h>
#include <stdlib.h>
 
int divisao(int, int);

int main(){
    int n1, n2;

    printf("\nN1: ");
    scanf("%d",&n1);

    printf("\nN2: ");
    scanf("%d",&n2);

    printf("\nResultado: %d",divisao(n1, n2));
}

int divisao(int n1, int n2){
    int resultado;
    resultado = n1/n2;
    return resultado;   
}