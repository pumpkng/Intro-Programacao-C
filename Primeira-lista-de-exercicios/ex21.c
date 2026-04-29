#include <stdio.h>
int main(){
    float c,v,KmL,r,L;
    printf("Insira o comprimento da pista em metros: ");
    scanf("%f",&c);
    printf("\nInsira o número de voltas: ");
    scanf("%f",&v);
    printf("\nInsira o número de quilômetros por litro: ");
    scanf("%f",&KmL);
    printf("\nInsira o número de reabastecimentos desejado: ");
    scanf("%f",&r);
    L=((c*v)/1000)/KmL/r;
    printf("\nO mínimo de litros por reabastecimento é de %.1f.",L);
    return 0;    
}