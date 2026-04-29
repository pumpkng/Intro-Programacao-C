#include <stdio.h>
int main(){
    float l,A;
    int nl;
    printf("Insira o número de lados: ");
    scanf("%d",&nl);
    printf("\nInsira a medida de um lado em centímetros: ");
    scanf("%f",&l);
    if(nl==3){
        printf("\nTRIÂNGULO de perímetro igual a %.2fcm.",l*3);
    }
    if(nl==4){
        printf("\nQUADRADO de área igual a %.2fcm².",l*l);
    }
    if(nl==5)
    printf("\nPENTÁGONO.");
    return 0;
}