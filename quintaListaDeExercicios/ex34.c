#include <stdio.h>
#include <math.h>

int inverteNumero(int, int);

int main(){
    int n, r;

    printf("\nNumero: ");
    scanf("%d", &n);
    printf("\nNumero de casas decimais: ");
    scanf("%d", &r);

    printf("\nNumero invertido: %d", inverteNumero(n, pow(10, r-1)));

    return 0;
}

int inverteNumero(int n, int dec){
    
    if(dec == 1){
        return n;
    }

    return (n % 10) * dec + inverteNumero(n/10, dec/10);
}