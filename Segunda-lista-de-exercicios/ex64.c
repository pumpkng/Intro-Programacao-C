#include <stdio.h>
int main(){
    int a=0,n;
    for(int i=0;i<10;i++){
        printf("Insira um número: \n");
        scanf("%d",&n);
        if(n<40){
            a+=n;
        }
    } 
    printf("A soma dos números menores que 40 é igual a %d.",a);
    return 0;
}