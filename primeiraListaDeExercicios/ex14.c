#include <stdio.h>
int main(){
    float sf, nc, vv, c, T;
    printf("Insira o salário fixo em reais: ");
    scanf("%f",&sf);
    printf("\nInsira o número de carros vendidos: ");
    scanf("%f",&nc);
    printf("\nInsira o valor recebido por carro vendido em real: ");
    scanf("%f",&vv);
    c=nc*vv;
    T=sf+c+(c*5/100);
    printf("\nO salário final é igual a R$%.2f.",T);
    return 0;
}