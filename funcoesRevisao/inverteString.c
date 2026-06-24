#include <stdio.h>
#include <string.h>

void inverte_string(char[]);

int main(){
    char str[30];

    printf("\nDigite uma string: ");
    fgets(str, sizeof(str), stdin);
    str[strlen(str)-1] = '\0';

    inverte_string(str);

    printf("\nString invertida: %s", str);

    return 0;
}

void inverte_string(char str[]) {
    char aux;

    for (int i=0; i<strlen(str)/2; i++) {
        aux = str[i];
        str[i] = str[strlen(str) - 1 - i];
        str[strlen(str) - 1 - i] = aux;
    }
}