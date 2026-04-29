#include <stdio.h>
int main(){
    int a=0,n;
    for(int i=0;i<10;i++){
        printf("Insira o %do número: ",i+1);
        scanf("%d",&n);
        a+=n;
    }
    printf("A soma de todos os números é igual a %d.",a);
    return 0;
}