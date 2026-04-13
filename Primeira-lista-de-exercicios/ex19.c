#include <stdio.h>
int main(){
    float c, l, a, At, n;
    printf("Insira o comprimento da cozinha em metros: ");
    scanf("%f",&c);
    printf("Insira a largura da cozinha em metros: ");
    scanf("%f",&l);
    printf("Insira a altura da cozinha em metros: ");
    scanf("%f",&a);
    At = (4*l*a)+(2*c*a);
    n = (At/1.5)+1;
    printf("A quantidade necessária de caixas de azulejo é igual a %.0f.",n);
    return 1;
}