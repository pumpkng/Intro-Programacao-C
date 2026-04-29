#include <stdio.h>
int main(){
    float n1, n2, divisao;
    printf("Insira o primeiro valor: ");
    scanf("%f",&n1);
    printf("\nInsira o segundo valor: ");
    scanf("%f",&n2);
    while(n2==0){
        printf("\nValor inválido, digite outro  valor: ");
        scanf("%f",&n2);
    }
    divisao = n1/n2;
    printf("\nO resultado da divisão é igual a %.2f.",divisao);
    return 0;
}