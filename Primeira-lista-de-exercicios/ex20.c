#include <stdio.h>
int main(){
    float Kmi, Kmf, L, vt, M, l;
    printf("Insira a marcação inicial do odômetro: ");
    scanf("%f",&Kmi);
    printf("\nInsira a marcação final do odômetro: ");
    scanf("%f",&Kmf);
    printf("\nInsira a gasolina gasta em litros: ");
    scanf("%f",&L);
    printf("\nInsira o valor total recebido em reais: ");
    scanf("%f",&vt);
    M=(Kmf-Kmi)/L;
    l=vt-(2.90*L);
    printf("\nO rendimento em Km/L foi de %.2f. O lucro líquido foi de R$%.2f.",M,l);
    return 0;
}