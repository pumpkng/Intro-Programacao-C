#include <stdio.h>
#include <string.h>

void inverteString(char[], int);

int main(){
    char str[30];

    printf("\nDigite uma string: ");
    fgets(str, sizeof(str), stdin);
    str[strlen(str)-1] = '\0';

    inverteString(str, strlen(str));
    
    printf("\nString invertida: %s", str);

    return 0;
}

void inverteString(char str[], int n){
    char aux;

    if(n <= 1){
        return;
    }
    
    aux = str[0];
    str[0] = str[n-1];
    str[n-1] = aux;

    inverteString(str+1, n-2);
}