#include <stdio.h>

void numeros(int);

int main(){
    int n;

    do{
        printf("\nNumero par: ");
        scanf("%d", &n);
    }while(n % 2 != 0);

    numeros(n);

    return 0;
}

void numeros(int n){
    
    if(n == 0){
        printf("%d", 0);
    }
    else{
        printf("%d", n);
        numeros(n - 2);
    }
}