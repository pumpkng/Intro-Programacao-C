#include <stdio.h>
int main(){
    float A, Pl, l, c;
    int n;
    printf("Insira a potência de uma lâmpada em watts: ");
    scanf("%f",&Pl);
    printf("\nInsira a largura do quarto em metros: ");
    scanf("%f",&l);
    printf("\nInsira o comprimento do quarto em metros: ");
    scanf("%f",&c);
    A=l*c;
    n=(18*A/Pl)+1;
    printf("\n%d lâmpadas são necessárias.",n);
    return 0;
}