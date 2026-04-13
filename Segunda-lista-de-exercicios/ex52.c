#include <stdio.h>
int main(){
    float numero;
    numero = 101;
    do{
        printf("%.0f ",numero);
        numero++;
    }while(numero<=110);
    return 0;
}