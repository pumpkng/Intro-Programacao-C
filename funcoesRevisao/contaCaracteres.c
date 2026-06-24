#include <stdio.h>
#include <string.h>

int conta_caracteres(char[]);

int main(){
    char texto[50];
    
    printf("\nDigite uma string: ");
    fgets(texto, sizeof(texto), stdin);
    texto[strlen(texto)-1] = '\0';

    printf("\nA string possui %d caracteres.", conta_caracteres(texto));

    return 0;
}

int conta_caracteres(char t[]){
    int cont = 0;
    for(int i=0;i<strlen(t)-1;i++){
        if(t[i] == ' ' && i != 0){
            cont--;
        }
        cont++;
    }
    return cont;
}