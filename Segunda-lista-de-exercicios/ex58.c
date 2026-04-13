#include <stdio.h>
int main(){
    float c, numero;
    numero = 10;
    c=1;
    while(c<=10){
        printf("%.0f ",numero);
        numero--;
        c++;
    }
    return 0;
}