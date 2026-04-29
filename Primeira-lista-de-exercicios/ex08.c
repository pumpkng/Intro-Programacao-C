#include <stdio.h>
int main(){
    float m1, m2;
    printf("Insira a medida em metros: ");
    scanf("%f",&m1);
    m2=m1*100;
    printf("\nA medida em centímetros é igual a %.2f.", m2);
    return 0;
}