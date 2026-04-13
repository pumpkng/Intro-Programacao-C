#include <stdio.h>
int main(){
    float c,c1,n,media;
    c=0;
    for(c=0;c<10;c++){
        printf("Insira um valor: ");
        scanf("%f",&n);
        c1+=n;
    }
    media = c1/c;
    printf("A média aritmética dos números é igual a %.2f.",media);
    return 0;
}