#include <stdio.h>
#include <string.h>

void binario(int);

int main(){
    int numero;

    do{
        printf("\nN(10): ");
        scanf("%d",&numero);
    }while(numero<0);

    binario(numero);

    return 0;
}

void binario(int numero){
    char binario[32];
    
    binario[32] = '\0';

    for(int i=31;i>=0;i--){
        
        if(numero%2 == 1){
            binario[i] = '1';
        }
        else{
            binario[i] = '0';
        }
        
        numero /= 2;
    }

    printf("\nN(2): %s",binario);
}