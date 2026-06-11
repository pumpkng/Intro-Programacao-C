#include <stdio.h>

int mult(int,int);

int main(){
    int n1, n2;

    printf("\nn1: ");
    scanf("%d",&n1);

    printf("\nn2: ");
    scanf("%d",&n2);

    printf("\nResultado: %d", mult(n1,n2));
}

int mult(int n1, int n2){
    int soma = 0;
    if(n1 != 0 && n2 != 0){
        for(int i=0;i<n2;i++){
            soma+=n1;
        }
    }
    return soma;
}