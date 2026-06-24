#include <stdio.h>
#include <string.h>

int contaLetra(char[]);
int contaVogal(char[]);
int contaConsoante(char[]);

int main(){
    char str[30];
    
    printf("\nDigite uma string: ");
    fgets(str, sizeof(str), stdin);
    str[strlen(str)-1] = '\0';

    printf("\nA string possui %d letras, %d vogais e %d consoantes.", contaLetra(str), contaVogal(str), contaConsoante(str));
    
    return 0;
}

int contaLetra(char str[]){
    int cont = 0;

    for(int i=0;i<strlen(str);i++){
        if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')){
            cont++;
        }
    }

    return cont;
}

int contaVogal(char str[]){
    int cont = 0;
    
    for(int i=0; i<strlen(str); i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
           str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){
            cont++;
        }
    }
    
    return cont;
}

int contaConsoante(char str[]){
    int cont = 0;
    
    for(int i=0; i<strlen(str); i++){
        if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')){
            if(!(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
               str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')){
                cont++;
            }
        }
    }
    
    return cont;
}