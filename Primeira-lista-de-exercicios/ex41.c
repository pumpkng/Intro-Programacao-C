#include <stdio.h>
int main(){
    float n1, n2;
    printf("Insira o primeiro número: ");
    scanf("%f",&n1);
    printf("Insira o segundo número: ");
    scanf("%f",&n2);
    if(n1==n2)
    printf("Números iguais");
    if(n1>n2)
    printf("Primeiro é maior");
    if(n1<n2)
    printf("Segundo é maior");
    return 1;
}