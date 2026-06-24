#include <stdio.h>
#include <string.h>

int palindromo(char[],int);

int main(){
    char palavra[30];

    printf("\nPalavra: ");
    fgets(palavra, sizeof(palavra), stdin);
    palavra[strlen(palavra)-1] = '\0';

    if(palindromo(palavra, strlen(palavra)))
        printf("\nPalindromo!");
    else{
        printf("\nNão é palindromo!");
    }

    return 0;
}

int palindromo(char p[], int n){
    if(n<=1)
        return 1;
    else{
        if(p[0] != p[n-1])
            return 0;
        else
            return palindromo(p+1, n-2);
    }
}