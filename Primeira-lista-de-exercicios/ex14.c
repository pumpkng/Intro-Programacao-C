#include <stdio.h>
int main(){
    float sf, nc, vv, c, T;
    printf("Insira o salário fixo: ");
    scanf("%f",&sf);
    printf("Insira o número de carros vendidos: ");
    scanf("%f",&nc);
    printf("Insira o valor recebido por carro vendido: ");
    scanf("%f",&vv);
    c = nc*vv;
    T = sf+c+(c*5/100);
    printf("O salário final é igual a R$%.2f.",T);
    return 1;
}