#include <stdio.h>
#include <string.h>

int palindromo(char[]);

int main(){
    char str[30];
    
    printf("\nDigite uma string: ");
    fgets(str, sizeof(str), stdin);
    str[strlen(str)-1] = '\0';

    if(palindromo(str)){
        printf("\nA string é um palíndromo.");
    } else {
        printf("\nA string não é um palíndromo.");
    }

    return 0;
}

int palindromo(char str[]){
    
    for(int i=0;i<strlen(str)/2;i++){
        if(str[i] != str[strlen(str)-1-i]){
            return 0;
        }
    }

    return 1;
}