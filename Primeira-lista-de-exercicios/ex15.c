#include <stdio.h>
int main(){
    float F, C;
    printf("Insira a temperatura em ºF: ");
    scanf("%f",&F);
    C=(F-32)*5/9;
    printf("\nA temperatura em ºC é igual a %.2f.",C);
    return 0;
}