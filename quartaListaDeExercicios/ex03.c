#include <stdio.h>

int potencia(int,int);

int main(){
    int n1, n2;

    do{
        printf("\nN1: ");
        scanf("%d",&n1);
    
        printf("\nN2: ");
        scanf("%d",&n2);
    }while(n1==0&&n2==0);
    
    printf("\nResultado: %d",potencia(n1,n2));
}

int potencia(int n1, int n2){
    int resultado = 1;
    for(int i=0;i<n2;i++){
        resultado*=n1;
    }
    return resultado;
}