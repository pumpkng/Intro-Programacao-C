#include <stdio.h>

int fatorial(int);

int combinacao(int,int);

int main(){
    int n, r;

    printf("\nN: ");
    scanf("%d",&n);

    printf("\nR: ");
    scanf("%d",&r);

    printf("\nC: %d",combinacao(n, r));
    
    return 0;
}

int fatorial(int n){
    int fat = 1;
    
    for(int i=n;i>0;i--){
        fat*=i;
    }

    return fat;
}

int combinacao(int n, int r){
    int combinacao = fatorial(n)/(fatorial(r)*fatorial(n-r));

    return combinacao;
}