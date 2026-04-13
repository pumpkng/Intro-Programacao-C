#include <stdio.h>
int main(){
    float nl,l,P,A;
    printf("Insira o número de lados: ");
    scanf("%f",&nl);
    printf("Insira a medida de um lado em centímetros: ");
    scanf("%f",&l);
    if(nl==3){
        P=3*l;
        printf("TRIÂNGULO de perímetro igual a %.0f.",P);
    }
    if(nl==4){
        A=l*l;
        printf("QUADRADO de área em cm² igual a %.0f.",A);
    }
    if(nl==5)
    printf("PENTÁGONO.");
    if(nl<3)
    printf("NÃO É UM POLÍGONO.");
    if(nl>5)
    printf("POLÍGONO NÃO IDENTIFICADO.");
    return 1;
}