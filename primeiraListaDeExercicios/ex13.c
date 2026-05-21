#include <stdio.h>
#define D 0.28
#define I 0.45
int main(){
    float cfa, cfi;
    printf("Insira o custo de fábrica do carro em reais: ");
    scanf("%f",&cfa);
    cfi=cfa+(cfa*D)+(cfa*I);
    printf("\nO custo final do carro é igual a R$%.2f.",cfi);
    return 0;
}