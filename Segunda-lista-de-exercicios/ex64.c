#include <stdio.h>
int main(){
    float c, c1, n;
    c1=0;
    for(c=0;c<10;c++){
        printf("Insira um número: ");
        scanf("%f",&n);
        if(n<40){
            c1+=n;
        }
    } 
    printf("A soma dos números menores que 40 é igual a %.0f.",c1);
    return 0;
}