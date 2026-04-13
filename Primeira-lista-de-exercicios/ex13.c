#include <stdio.h>
int main(){
    float cfa, cfi, pd, pi;
    pd = 0.28;
    pi = 0.45;
    printf("Insira o custo de fábrica do carro: ");
    scanf("%f",&cfa);
    cfi = cfa+(cfa*pd)+(cfa*pi);
    printf("O custo final do carro é igual a R$%.2f.",cfi);
    return 1;
}