#include <stdio.h>
int main(){
    float s, h, T;
    printf("Insira o salário por hora: ");
    scanf("%f",&s);
    printf("Insira o número de horas trabalhadas no mês: ");
    scanf("%f",&h);
    T = s*h;
    printf("O total do salário no mês é igual a R$%.2f.",T);
    return 1;
}