#include <stdio.h>
int main(){
    float c, numero;
    numero = 1;
    c=1;
    do{
        printf("%.0f ",numero);
        numero++;
        c++;
    }while(c<=10);
    return 0;
}