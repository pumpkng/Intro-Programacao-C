#include <stdio.h>
int main(){
    float c, l, a, At;
    int n;
    printf("Insira o comprimento da cozinha em metros: ");
    scanf("%f",&c);
    printf("\nInsira a largura da cozinha em metros: ");
    scanf("%f",&l);
    printf("\nInsira a altura da cozinha em metros: ");
    scanf("%f",&a);
    At=(4*l*a)+(2*c*a);
    n = (At/1.5)+1;
    printf("\nSão necessárias %d caixas de azulejos.",n);
    return 0;
}