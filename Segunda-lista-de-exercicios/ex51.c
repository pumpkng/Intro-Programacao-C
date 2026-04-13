#include <stdio.h>
int main(){
    float numero;
    numero = 10;
    do{
        printf("%.0f ",numero);
        numero--;
    }while(numero>=1);
    return 0;
}