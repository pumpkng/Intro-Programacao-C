#include <stdio.h>
int main(){
    float a,n,media;
    for(int i=0;i<10;i++){
        printf("Insira o %do valor: ",i+1);
        scanf("%f",&n);
        a+=n;
    }
    media=a/10;
    printf("\nA média aritmética dos números é igual a %.2f.",media);
    return 0;
}