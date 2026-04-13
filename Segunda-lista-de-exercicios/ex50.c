#include <stdio.h>
int main(){
    float numero;
    numero = 1;
    do{
        printf("%.0f ",numero);
        numero++;
    }while(numero<=10);
    return 0;
}