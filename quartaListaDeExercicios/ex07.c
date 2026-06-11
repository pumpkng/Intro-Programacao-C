#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

int palindromo(char[]);

int main(){
    SetConsoleOutputCP(65001);
    char texto[100];

    printf("\nTexto: ");
    fgets(texto,sizeof(texto),stdin);
    texto[strlen(texto)-1] = '\0';

    if(palindromo(texto))
        printf("É palíndromo!");
    else
        printf("Não é palíndromo!");
}

void corrige(char texto[]){

}
int palindromo(char texto[]){
    for(int i=0;i<strlen(texto)/2;i++){
        if(texto[i]!=texto[strlen(texto)-1-i]){
            return 0;
        }
    }
    return 1;
}