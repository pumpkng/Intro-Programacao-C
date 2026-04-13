#include <stdio.h>
int main(){
    float c,v,KmL,r,L;
    printf("Insira o comprimento da pista em metros: ");
    scanf("%f",&c);
    printf("Insira o número de voltas: ");
    scanf("%f",&v);
    printf("Insira o número de quilômetros por litro: ");
    scanf("%f",&KmL);
    printf("Insira o número de reabastecimentos desejado: ");
    scanf("%f",&r);
    L = ((c*v)/1000)*KmL/r;
    printf("O mínimo de litros por reabastecimento é de %.1f.",L);
    return 1;
}