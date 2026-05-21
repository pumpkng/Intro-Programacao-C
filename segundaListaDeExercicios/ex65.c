#include <stdio.h>
int main(){
    int a=0, n1, n2;
    printf("Insira o primeiro número: ");
    scanf("%d",&n1);
    printf("\nInsira o segundo número: ");
    scanf("%d",&n2);
    for(int i=0;i<n2;i++){
        a+=n1;
        n1++;
    }
    printf("\nA soma dos números entre os dois inteiros é igual a %d.",a);
    return 0;
}