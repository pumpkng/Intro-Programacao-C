#include <stdio.h>
int main(){
    float n, A, Pl, l, c;
    printf("Insira a potência de uma lâmpada em watts: ");
    scanf("%f",&Pl);
    printf("Insira a largura do quarto em metros: ");
    scanf("%f",&l);
    printf("Insira o comprimento do quarto em metros: ");
    scanf("%f",&c);
    A = l*c;
    n = (18*A/Pl)+1;
    printf("O número necessário de lâmpadas é %.0f.",n);
    return 1;
}