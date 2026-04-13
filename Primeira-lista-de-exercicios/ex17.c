#include <stdio.h>
int main(){
    float R, A;
    printf("Insira o raio do círculo: ");
    scanf("%f",&R);
    A = R*R*3.14;
    printf("A área do círculo é igual a %.2f.",A);
    return 1;
}