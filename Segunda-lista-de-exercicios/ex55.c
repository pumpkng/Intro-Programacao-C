#include <stdio.h>
int main(){
    float oito;
    oito = 8;
    do{
        printf("%.0f ",oito);
        oito+=8;
    }while(oito<=80);
    return 0;
}