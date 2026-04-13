#include <stdio.h>
int main(){
    float F, C;
    printf("Insira a temperatura em ºF: ");
    scanf("%f",&F);
    C = (F-32)*5/9;
    printf("A temperatura em ºC é igual a %.0F.",C);
    return 1;
}