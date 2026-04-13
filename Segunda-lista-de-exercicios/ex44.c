#include <stdio.h>
int main(){
    float n1, n2, divisao;
    printf("Insira o primeiro valor: ");
    scanf("%f",&n1);
    printf("Insira o segundo valor: ");
    scanf("%f",&n2);
    do{
        scanf("%f",&n2);
    }while(n2==0);
    divisao=n1/n2;
    printf("O resultado da divisão é igual a %.2f.",divisao);
    return 1;
}