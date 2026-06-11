#include <stdio.h>
#include <string.h>
#include <windows.h>

void inverte(char[]);

int main(){
    SetConsoleOutputCP(65001);
    char numero[10];

    printf("\nNúmero: ");
    fgets(numero,sizeof(numero),stdin);
    numero[strlen(numero)-1] = '\0';

    inverte(numero);

    printf("\n%s", numero);

    return 0;
}

void inverte(char numero[]){
    char aux;
    for(int i=0;i<=(strlen(numero)-1)/2;i++){
        aux = numero[i];
        numero[i] = numero[strlen(numero)-i-1];
        numero[strlen(numero)-i-1] = aux;
    }
}