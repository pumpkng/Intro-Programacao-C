#include <stdio.h>
#include <windows.h>

int soma(int);

int main(){
    SetConsoleOutputCP(65001);
    int numero;

    printf("\nNúmero: ");
    scanf("%d",&numero);

    printf("\nSoma: %d", soma(numero));

    return 0;
}

int soma(int numero){
    int soma = 0;

    for(int i=2;i<numero;i++){
        soma+=i;
    }

    return soma;
}