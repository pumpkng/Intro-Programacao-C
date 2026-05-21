#include <stdio.h>
int main(){
    float n1, n2;
    printf("Insira o primeiro número: ");
    scanf("%f",&n1);
    printf("\nInsira o segundo número: ");
    scanf("%f",&n2);
    if(n1==n2)
    printf("\nNúmeros iguais");
    if(n1>n2)
    printf("\nPrimeiro é maior");
    if(n1<n2)
    printf("\nSegundo é maior");
    return 0;
}